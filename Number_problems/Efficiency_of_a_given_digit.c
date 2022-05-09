/*

   =============================
     Author: Vishwajeet Kumar.
    Email  : vcnvim@gmail.com
   =============================

Q.Program to print efficiency of a given digit.

*/
#include<stdio.h>

int main(){
    int num, a, x, counter=0;
    num = 1234111;
    a = 1;
    while(num > 0){
	x = num%10;
	if(x == a)
	    counter++;
	num/=10;
    }
    printf("%d\n", counter);
    return 0;
}
