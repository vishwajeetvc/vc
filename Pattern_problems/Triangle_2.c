/*
 
============================
 Author : Vishwajeet kumar
 Email  : vcnvim@gmail.com
============================
 
Q. Write a program to print this type of pattern.

#Expected output:

Enter a number :)8
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************

*/

//Author: vishwajeet kumar


#include<stdio.h>

int main(){
    int i , j, num;
    printf("Enter a number:)");
    scanf("%d",&num);
    for(i = 1 ; i <= num; i++){
	for(j = 1; j <= num+i-1;j++){
	    if(i+j <= num)
		printf(" ");
	    else
		printf("*");
	}
	printf("\n");
    }
    return 0;
}
