//5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches. Go to the editor
//Expected Output:
//Perimeter of the rectangle = 24 inches
//Area of the rectangle = 35 square inches


//Code is here.
//Author : vishwajeet kumar

#include<stdio.h>

int main(){
    int l = 7;
    int b = 5;
    printf("Perimeter of the rectangle = %d inches \n", 2*(l+b));
    printf("Area of the rectangle = %d square inches\n", l * b);
    return 0;
}
