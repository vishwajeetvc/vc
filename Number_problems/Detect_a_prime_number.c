//Q. Write a program to detect a prime number?
//
//Author: Vishwajeet kumar



#include<stdio.h>

int main(){
    int num, flag = 1;
    printf("Enter a number :)");
    scanf("%d",&num);
    for(int i = 2; i <= num/2; i++){
	if(num%i == 0){
	    flag = 0;
	    break;
	}
    }
    if(flag == 0){
	printf("This number is not a prime Number.\n");
    }
    else
	printf("This number is a prime Number.\n");

    return 0;
}
