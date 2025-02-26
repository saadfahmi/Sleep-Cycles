#ifndef SLEEP_CALCULATOR_H
#define SLEEP_CALCULATOR_H


#define CYCLE_MINUTES 90   
#define FALL_ASLEEP_TIME 15 


#include <stdio.h>
#include <time.h>
void calculate_sleep_times(int wake_hour, int wake_minute);
void calculate_wake_times(int bed_hour, int bed_minute);
int to_minutes(int hours, int minutes);
void to_hours_minutes(int total_minutes, int *hours, int *minutes);


#endif 
