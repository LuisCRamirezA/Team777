#ifndef DEVICES_TIMER_H
#define DEVICES_TIMER_H

#include <round.h>
#include <stdint.h>

/* Number of timer interrupts per second. */
#define TIMER_FREQ 100

void timer_init (void);
void timer_calibrate (void);

int64_t timer_ticks (void); /*Reloj, cuando se llama incrementa en 1*/
int64_t timer_elapsed (int64_t); /*devuelve no. ticks desde el inicio ejecucion*/

/* Sleep and yield the CPU to other threads. */
void timer_sleep (int64_t ticks); /*suspende ejec. thread actual hasta que pasen el no. ticks del argumento*/
void timer_msleep (int64_t milliseconds);
void timer_usleep (int64_t microseconds);
void timer_nsleep (int64_t nanoseconds);

/* Busy waits. */
void timer_mdelay (int64_t milliseconds);
void timer_udelay (int64_t microseconds);
void timer_ndelay (int64_t nanoseconds);

void timer_print_stats (void);

#endif /* devices/timer.h */
