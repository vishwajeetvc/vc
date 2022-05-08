/*
================================
   Author : Vishwajeet kumar.
================================
Q. Factorial of given number.



Expected output:
.....................................

Enter the number:)5
The factorial of given number is 120.

.....................................


*/

#include<stdio.h>

int main(){
    int factorial = 1, num;
    printf("Enter the number:)");
    scanf("\n%d",&num);
    while (num > 0){
	factorial *= num--;
    }
    printf("The factorial of given number is %d.", factorial);
    return 0;
}
