// Function to update date and time clockkeeper

#include <stdio.h>


struct date {
    int year;
    int month;
    int day;
};

struct time {
    int hour;
    int minute;
    int second;
};

struct dateAndTime {
    struct date sdate;
    struct time stime;
};

// Function Definition
struct dateAndTime clockKeeper(struct dateAndTime);
struct time timeUpdate(struct time);
struct date dateUpdate(struct date);
int  checkEndMonth(struct date );

int main() {
    struct dateAndTime current_dt, next_dt;
    // Ask user for date and time
    printf("Enter your date (YYYY MM HH): ");
    scanf("%i %i %i", &current_dt.sdate.year, &current_dt.sdate.month, &current_dt.sdate.day);
    printf("Enter your time (HH:MM:SS): ");
    scanf("%i:%i:%i", &current_dt.stime.hour, &current_dt.stime.minute, &current_dt.stime.second);
   // Calls the function to update date and time accordingly


    next_dt = clockKeeper(next_dt);
   // Output of the update date and time

    printf(" %i %i %i |  %i:%.2i:%.2i\n",
	   next_dt.sdate.year, next_dt.sdate.month, next_dt.sdate.day,
	   next_dt.stime.hour, next_dt.stime.minute, next_dt.stime.second);


    

}

struct dateAndTime clockKeeper(struct dateAndTime dt)
{
    // Calls the function to update time (hour,minute,second)
    dt.stime = timeUpdate(dt.stime); 

    // Checks whether the date should be updated or not
    if (dt.stime.hour == 0 && dt.stime.minute == 0 && dt.stime.second == 0)
	dt.sdate = dateUpdate(dt.sdate); 

    return dt;
}

struct time timeUpdate(struct time t)
{
    t.second++;

    if(t.second  == 60) { // update minutes
	t.minute++;
	t.second = 0;

	if (t.minute == 60) { // update hour
	    t.hour++;
	    t.minute = 0;

	    if (t.hour == 24) // update 24hr 
		t.hour = 0;
	}
    }

    return t;
}


struct date dateUpdate(struct date d)
{
    
    if (d.day != checkEndMonth(d)) {  // updates day
	d.day++;
	return d;
    }
    else if ( d.month == 12) { // updates end of year
	d.year++;
	d.month = 1;
	d.day = 1;
	return d;
    }
    else { // end of month
	d.day = 1;
	d.month++;
	return d;
    }
    
}

int checkEndMonth(struct date d)
{
    int last_day[13] = { 0, 31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};
//  Check leap year and date of feb
    if (d.month == 2) {
	if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
	    return 29;
	}
    }
    else
	return last_day[d.month];
}
