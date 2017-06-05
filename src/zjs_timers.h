// Copyright (c) 2016-2017, Intel Corporation.

#ifndef __zjs_timers_h__
#define __zjs_timers_h__

#include <stdint.h>

/**
 * Service the timer module.
 *
 * @return          Shortest time until next expiring timer
 */
s32_t zjs_timers_process_events();
void zjs_timers_init();
// Stops and frees all timers
void zjs_timers_cleanup();

#endif  // __zjs_timers_h__
