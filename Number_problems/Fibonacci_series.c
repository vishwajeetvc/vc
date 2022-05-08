/*
 ============================
 Author : Vishwajeet kumar
 Email  : vcnvim@gmail.com
============================

Q. Print Fibonacci series.

*/

#include<stdio.h>

int main(){
    int p, c, n, num = 10;
    p = 0;
    c = 1;
    printf("%d\n%d\n",p, c);
    while(num-2>0){
	n = p + c;
	printf("%d\n", n);
	p = c;
	c = n;
	num--;
    }
    return 0;
}
