/*

============================
 Author : Vishwajeet kumar
 Email  : vcnvim@gmail.com
============================

Write a program to print this type of triangle.
 
Expected output::

Enter a number:) 9
        *
       * *
      *   *
     *     *
    *       *
   *         *
  *           *
 *             *
*****************
*/


//Author : Vishwajeet kumar
//logic and code is purly by made by vishwajeet.




#include<stdio.h>

int main(){
    int num;
    int i, j, k;
    printf("Enter a number:)");
    scanf("%d",&num);
    for(i = 1; i <= num; i++){
	for (j = 1; j <= num + i - 1; j++){
	    if(i+j == num+1 ||  j == num + i -1 || i == num)
		printf("*");
	    else
		printf(" ");
	}
	printf("\n");
    }
    return 0;
}
