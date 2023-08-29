//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]

#include <stdio.h>
void main() {
    int totalDays, year, week, days;
    printf("Enter the total days: ");
    scanf("%d", &totalDays);
    year = totalDays / 365;
    totalDays = totalDays % 365;
    week = totalDays / 7;
    days = totalDays % 7;
    printf("%d Years %d Weeks %d Days", year, week, days);
}

