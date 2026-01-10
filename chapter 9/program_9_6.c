// Program to display next time of 5 different time using array

#include <stdio.h>

struct time {
    int hour;
    int minute;
    int second;


};

struct time updateTime(struct time current);

int main(void)
{
    struct time current_time[5], next_time;
    int i;
    
    printf("Enter 5 different times\n");

    // Input
    for (i = 0; i < 5; i++) {
	printf("Enter current time (HH:MM:SS): ");
	scanf("%i:%i:%i", &current_time[i].hour, &current_time[i].minute, &current_time[i].second);
    }

    // Time update
    for (i = 0; i < 5; i++) 
	current_time[i] = updateTime(current_time[i]);

    for (i = 0; i < 5; i++) 
    printf("Updated time is %.2i:%.2i:%.2i\n", current_time[i].hour, current_time[i].minute, current_time[i].second);
    
    return 0;
}

struct time updateTime(struct time current)
{
    current.second++;

    if (current.second == 60) {
	current.minute++;
	current.second = 0;

	if (current.minute == 60) {
	    current.hour++;
	    current.minute = 0;
	    
	    if (current.hour == 24) 
		current.hour = 0;
	}
    }
    return current;
}

    
