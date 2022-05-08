//Author : Vishwajeet kumar.

/*
Q.Write a program to make a basic calculator for 2 numbers

Note: This is a basic but tricky program while putting the operator.
Look carefully \n has used in "scanf("\n%c",&x);" because when you puts the num1 value and when you press enter the <enter> char is automatically assigned to next scanf("%c",&);(This is only for char).


Now think : After putting a value in scanf function, why do you go new line automatically?
*/




#include<stdio.h>

int main(){
    int num1, num2;
    char operator;
    printf("Enter the 1st number:) ");
    scanf("%d",&num1);
    printf("Enter the Operator:) ");
    scanf("\n%c",&operator);
    printf("Enter the 2nd number:) ");
    scanf("%d",&num2);

    switch(operator){
	case '+':
	    printf("The addition of these number is %d\n.",num1 + num2);
	    break;
	case '-':
	    printf("The subtraction of these number is %d.\n",num1 - num2);
	    break;
	case '*':
	    printf("The Multiplication of these number is %d.\n",num1 * num2);
	    break;
	case '/':
	    printf("The divison of these number is %d.\n",num1 / num2);
	    break;
    }
    return 0;
}
