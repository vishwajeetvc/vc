//Author: Vishwajeet kumar.
//Program to detect even numbers between given range.
/*
#expected output:
//
//
Enter the starting point number:) 1
Enter the ending point number:) 500
Total even number is 250.

*/
#include<stdio.h>

int main(){
    int st, end, counter = 0;
    printf("Enter the starting point number:)");
    scanf("%d",&st);
    printf("Enter the ending point number:)");
    scanf("%d",&end);

    for(int i = st; i <= end; i++){
	if(i%2 == 0)
	    counter++;
    }
    printf("Total even number is %d.",counter);
    return 0;
}
