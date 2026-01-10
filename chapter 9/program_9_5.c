

#include <stdio.h>

struct time {
    int second;
    int minute;
    int hour;
};

struct time updateTime(struct time current);

int main(void)
{
    struct time current_time, next_time;

    printf("Enter current time (HH:MM:SS): ");
    scanf("%i:%i:%i", &current_time.hour, &current_time.minute, &current_time.second);

    next_time = updateTime(current_time);

    printf("Updated time is %.2i:%.2i:%.2i\n", next_time.hour, next_time.minute, next_time.second);
    
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

    
