#include<stdio.h>

int main(){
    int a, b;
    char condition;
    do{
	printf("Enter a number:)");
	scanf("%d",&a);
	printf("Enter another number:)");
	scanf("%d",&b);
	printf("The result is %d.\n",a+b);
	printf("Do you want again press 'y' for yes and 'n' for no :) ");
	scanf("\n%c",&condition);
    }while(condition == 'y');
    return 0;
}
