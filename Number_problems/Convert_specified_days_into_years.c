//8. Write a C program to convert specified days into years, weeks and days. Go to the editor
//Note: Ignore leap year.
//



//Author: Vishwajeet kumar

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number of days:)");
    scanf("%d",&num);

    int year;
    year = num/365;
    printf("Years : %d\n", year);

    int weeks;
    weeks = (num % 365)/7;
    printf("Weeks : %d\n", weeks);

    int days;
    days = (num % 365)%7;
    printf("days : %d\n", days);


    return 0;
}
