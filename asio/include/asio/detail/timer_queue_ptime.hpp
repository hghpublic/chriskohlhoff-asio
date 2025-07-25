//
// detail/timer_queue_ptime.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2025 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_DETAIL_TIMER_QUEUE_PTIME_HPP
#define ASIO_DETAIL_TIMER_QUEUE_PTIME_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/config.hpp"

#if !defined(ASIO_NO_DEPRECATED)

#if defined(ASIO_HAS_BOOST_DATE_TIME)

#include "asio/execution_context.hpp"
#include "asio/time_traits.hpp"
#include "asio/detail/timer_queue.hpp"

#include "asio/detail/push_options.hpp"

namespace asio {
namespace detail {

struct forwarding_posix_time_traits : time_traits<boost::posix_time::ptime> {};

// Template specialisation for the commonly used instantiation.
template <>
class timer_queue<time_traits<boost::posix_time::ptime>,
    execution_context::allocator<void>>
  : public timer_queue_base
{
public:
  // The time type.
  typedef boost::posix_time::ptime time_type;

  // The duration type.
  typedef boost::posix_time::time_duration duration_type;

  // Per-timer data.
  typedef timer_queue<forwarding_posix_time_traits,
      execution_context::allocator<void>>::per_timer_data per_timer_data;

  // Constructor.
  ASIO_DECL timer_queue(
      const execution_context::allocator<void>& alloc,
      std::size_t heap_reserve);

  // Destructor.
  ASIO_DECL virtual ~timer_queue();

  // Add a new timer to the queue. Returns true if this is the timer that is
  // earliest in the queue, in which case the reactor's event demultiplexing
  // function call may need to be interrupted and restarted.
  ASIO_DECL bool enqueue_timer(const time_type& time,
      per_timer_data& timer, wait_op* op);

  // Whether there are no timers in the queue.
  ASIO_DECL virtual bool empty() const;

  // Get the time for the timer that is earliest in the queue.
  ASIO_DECL virtual long wait_duration_msec(long max_duration) const;

  // Get the time for the timer that is earliest in the queue.
  ASIO_DECL virtual long wait_duration_usec(long max_duration) const;

  // Dequeue all timers not later than the current time.
  ASIO_DECL virtual void get_ready_timers(op_queue<operation>& ops);

  // Dequeue all timers.
  ASIO_DECL virtual void get_all_timers(op_queue<operation>& ops);

  // Cancel and dequeue operations for the given timer.
  ASIO_DECL std::size_t cancel_timer(
      per_timer_data& timer, op_queue<operation>& ops,
      std::size_t max_cancelled = (std::numeric_limits<std::size_t>::max)());

  // Cancel and dequeue operations for the given timer and key.
  ASIO_DECL void cancel_timer_by_key(per_timer_data* timer,
      op_queue<operation>& ops, void* cancellation_key);

  // Move operations from one timer to another, empty timer.
  ASIO_DECL void move_timer(per_timer_data& target,
      per_timer_data& source);

private:
  timer_queue<forwarding_posix_time_traits,
      execution_context::allocator<void>> impl_;
};

} // namespace detail
} // namespace asio

#include "asio/detail/pop_options.hpp"

#if defined(ASIO_HEADER_ONLY)
# include "asio/detail/impl/timer_queue_ptime.ipp"
#endif // defined(ASIO_HEADER_ONLY)

#endif // defined(ASIO_HAS_BOOST_DATE_TIME)

#endif // !defined(ASIO_NO_DEPRECATED)

#endif // ASIO_DETAIL_TIMER_QUEUE_PTIME_HPP
