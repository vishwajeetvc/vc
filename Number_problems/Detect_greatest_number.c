/* 
  
 *============================
  Author : Vishwajeet Kumar.
 *============================

Q.Write a program to detect greatest number.

Expected output:

Enter 1st number:) 23
Enter 2nd number:) 2345
Enter 3rd number:) 4345
Enter 4th number:) 24
Enter 5th number:) 0
The max number is 4345.

*/
#include<stdio.h>

int main(){
    int a , b, c, d ,e, max;
    printf("Enter 1st number:)");
    scanf("\n%d",&a);
    printf("Enter 2nd number:)");
    scanf("\n%d",&b);
    printf("Enter 3rd number:)");
    scanf("\n%d",&c);
    printf("Enter 4th number:)");
    scanf("\n%d",&d);
    printf("Enter 5th number:)");
    scanf("\n%d",&e);
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    if(e > max) max = e;
    printf("The max number is %d.", max);
    return 0;
}
