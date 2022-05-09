/*

   =============================
     Author: Vishwajeet Kumar.
    Email  : vcnvim@gmail.com
   =============================

Q.Program to count digit(s) in given number.


*/
#include<stdio.h>

int main(){

    int num, count = 0;

    printf("Enter a number:)");
    scanf("%d",&num);
    while(num > 0){
	count++;
	num/=10;
    }
    printf("Processing.....\n");
    printf("There are %d digit(s) in given number.\n", count);
    return 0;
}
