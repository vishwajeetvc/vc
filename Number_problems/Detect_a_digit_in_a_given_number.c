/*

Author : Vishwajeet kumar(vc).

Q. Program to detect a given digit in desired number.

*/
#include<stdio.h>

int main(){
    int num, i, a, x, flag = 0;
    printf("Enter a number:)");
    scanf("%d",&num);
    printf("Enter the digit to find:)");
    scanf("%d",&a);
    for(; num/10 != 0;){
	    x = num%10;
	    num=num/10;
	    if(x == a || num == a){
		flag++;
		break;
	    }
    }
    (flag == 0)?printf("Digit not found!\n"):printf("Digit found\n");;
    return 0;
}
