// Function to give elapsed time

#include <stdio.h>


struct time {
    int hour;
    int minute;
    int second;
    
};

int main(void)
{
    struct time time1, time2, elapsed_time;

    struct time  elapsedTime (struct time t1, struct time t2);

    printf("Enter your first time (HH:MM:SS):  ");
    scanf("%i:%i:%i", &time1.hour, &time1.minute, &time1.second);
    printf("Enter your second time (HH:MM:SS):  ");
    scanf("%i:%i:%i", &time2.hour, &time2.minute, &time2.second);

    elapsed_time = elapsedTime(time1,time2);

    printf("Your elapsed time is\n");
    printf("%i hours, %i minutes and %i second", elapsed_time.hour, elapsed_time.minute, elapsed_time.second);
}


struct time  elapsedTime (struct time t1, struct time t2)
{
    struct time elapsed_time = { 0 , 0 ,0 };
/*
    while ( (t1.hour != t2.hour) && (t1.minute != t2.minute) && (t1.second != t2.second)) {
	t1.second++;
	elapsed_time.second++;

	if (t1.second == 60) {
	    t1.second = 0;
	    t1.minute++;
	}
	if (t1.minute == 60) {
	    t1.minute = 0;
	    t1.hour++;
	}
	if (t1.hour == 24)
	    t1.hour = 0;
// Elapsed time
	
	if (elapsed_time.second == 60) {
	    elapsed_time.second = 0;
	    elapsed_time.minute++;
	}
	if (elapsed_time.minute == 60) {
	    elapsed_time.minute = 0;
	    elapsed_time.hour++;
	}
	
    }

*/


    while ( t1.second != t2.second) {
	t1.second++;
	elapsed_time.second++;
	
	if (t1.second == 60) {
	    t1.second = 0;
	    t1.minute++;
	}

	if (elapsed_time.second == 60) {
	    elapsed_time.second = 0;
	    elapsed_time.minute++;
	}
    }
      
    while (t1.minute != t2.minute) {
	t1.minute++;
	elapsed_time.minute++;

	if (t1.minute == 60) {
	t1.minute = 0;
	t1.hour++;
	}
	
	if (elapsed_time.minute == 60) {
	    elapsed_time.hour++;
	    elapsed_time.minute = 0;
	}
    }

    while (t1.hour != t2.hour) {
	t1.hour++;
	elapsed_time.hour++;

	if (t1.hour == 24)
	    t1.hour = 0;
    }
    return elapsed_time;
    
}


