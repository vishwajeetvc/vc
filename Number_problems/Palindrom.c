/*

   =============================
     Author: Vishwajeet Kumar.
    Email  : vcnvim@gmail.com
   =============================

Q. Program to check given number is palindrome number or not.
ex.  12345 is equal to 54321 or not.

*/
#include<stdio.h>

int main(){
    int num, x, rev= 0;
    printf("Enter a number:) ");
    scanf("%d",&num);
    int	original_number = num;
    while(num > 0){
	x = num %10;
	rev = (rev+x)*10;
	num/=10;
    }
    rev/=10;
    if(rev == original_number)
	printf("Palindrome.\n");
    else
	printf("The number is not  palindrome type.\n");
    return 0;
}
