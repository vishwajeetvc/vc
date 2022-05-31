
/*

   ******************************
     Author: Vishwajeet Kumar.
    Email  : vcnvim@gmail.com
   ******************************
Q. Program to reverse the array using single variable.


expected output:
======================================================
======================================================
    Enter the size of the array [Maximum 20] :) 5

    Enter number on the 0 index:) 1
    Enter number on the 1 index:) 4
    Enter number on the 2 index:) 2
    Enter number on the 3 index:) 4
    Enter number on the 4 index:) 5
    You entered :1 4 2 4 5 .
    The reversed array is 5 4 2 4 1 .

======================================================
======================================================
*/


#include<stdio.h>

int main(){
  int a[20], i, j, size;
  //taking the size of the array.
  printf("Enter the size of the array [Maximum 20] :) ");
  scanf("%d", &size);
  printf("\n");
  //taking element in the array.
  for(i = 0; i < size; i++){
    printf("Enter number on the %d index:) ", i);
    scanf("%d", &a[i]);
  }
  //printing the entered order.
  printf("You entered :");
  for(i = 0; i < size; i++){
    printf("%d ",a[i]);
  }
  printf(".\n");
  //Reversing the array.
  for(i = 0; i <= size/2 ; i++){
    int t = a[i];
    a[i] = a[(size - 1) -i];
    a[(size - 1) -i] = t;
  }
  //Printing the reversed array.
  printf("The reversed array is ");
  for(i = 0; i < size; i++){
    printf("%d ",a[i]);
  }
  printf(".\n");

  return 0;
}
