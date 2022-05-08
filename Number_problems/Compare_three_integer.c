/*
Write a C program that accepts three integers and find the maximum of three. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/



//Author :vishwajeet kumar
#include<stdio.h>

int main(){
    int a, b, c, num;
    printf("Input the first interger: ");
    scanf("%d",&a);
    printf("Input the second interger: ");
    scanf("%d",&b);
    printf("Input the third interger: ");
    scanf("%d",&c);

    if( a < b)
	num = b;
    else 
	num = a;
    if ( num < c)
	printf("Maximum value of three integers: %d", c);
    else
	printf("Maximum value of three integers: %d", num);

    return 0;
}
