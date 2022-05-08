/*
Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes. Go to the editor
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00
*/




//Author : Vishwajeet kumar





#include<stdio.h>

int main(){
    int num;
    printf("Enter amount :)");
    scanf("%d",&num);
    printf("%d Notes of 100.00\n",num/100);
    printf("%d Notes of 50.00\n",num%100/50);
    printf("%d Notes of 20.00\n",num%100%50/20);
    printf("%d Notes of 10.00\n",num%100%50%20/10);
    printf("%d Notes of 5.00\n",num%100%50%20%10/5);
    printf("%d Notes of 2.00\n",num%100%50%20%10%5/2);
    printf("%d Notes of 1.00\n",num%100%50%20%10%5%2/1);
    return 0;
}
