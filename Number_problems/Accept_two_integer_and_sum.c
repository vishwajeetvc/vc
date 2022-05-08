/*9. Write a C program that accepts two integers from the user and calculate the sum of the two integers. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/



//Author : Vishwajeet kumar.

#include<stdio.h>

int main(){
    int a , b;
    printf(" Enter 1st integer:)");
    scanf("%d",&a);
    printf(" Enter 2nd integer:)");
    scanf("%d",&b);
    printf("The sum of two integer is %d.\n",a+b);
    return 0;
}
