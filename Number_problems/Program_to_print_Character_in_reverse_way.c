/*
4. Write a C program to print the following characters in a reverse way. Go to the editor
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/






//Author : Vishwajeet kumar
//code Here







#include<stdio.h>


int main(){
    char x = 'X';
    char m = 'M';
    char l = 'L';

    printf("The reverse of %c%c%c is %c%c%c\n",x, m, l, l, m, x);
    return 0;
}
