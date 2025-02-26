#include "sleep_calculator.h"

int to_minutes(int hours, int minutes)
{
            return(hours * 60) + minutes;
}

void to_hours_minutes(int total_minutes,int *hours, int *minutes)
{
            *hours = (total_minutes / 60) % 24;
            *minutes = total_minutes % 60;
}
void calculate_sleep_times(int wake_hour, int wake_minute) 
{
            printf("\nRecommended sleep times for waking up at %02d:%02d:\n", wake_hour, wake_minute);
            int wake_time = to_minutes(wake_hour, wake_minute);
            int sleep_time;

        for (int cycles = 6; cycles >= 3; cycles--) 
    {
            sleep_time = wake_time - (cycles * CYCLE_MINUTES) - FALL_ASLEEP_TIME;
            int sleep_hour, sleep_minute;
            to_hours_minutes(sleep_time, &sleep_hour, &sleep_minute);
             printf("%02d:%02d (%d cycles)\n", sleep_hour, sleep_minute, cycles);
    }
}

void calculate_wake_times(int bed_hour, int bed_minute) 
{
            printf("\nRecommended wake-up times if you sleep at %02d:%02d:\n", bed_hour, bed_minute);
            int bed_time = to_minutes(bed_hour, bed_minute) + FALL_ASLEEP_TIME;
            int wake_time;

    for (int cycles = 3; cycles <= 6; cycles++) 
    {
             wake_time = bed_time + (cycles * CYCLE_MINUTES);
             int wake_hour, wake_minute;
             to_hours_minutes(wake_time, &wake_hour, &wake_minute);
             printf("- %02d:%02d (%d cycles)\n", wake_hour, wake_minute, cycles);
    }
}
