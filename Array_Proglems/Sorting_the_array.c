/*
   ============================
    Author : Vishwajeet kumar.
    Email  : vcnvim@gmail.com
   ============================

Q. Sort a array in ascending or descending order.

Expected output:

--------------------------------------------------
--------------------------------------------------
    Enter the size of the array {Maxium 20} :6
    Enter the 0th element of the array :5
    Enter the 1st element of the array :2
    Enter the 2nd element of the array :3
    Enter the 3rd element of the array :4
    Enter the 4th element of the array :1
    Enter the 5th element of the array :2
    Entered order is :5 2 3 4 1 2 
    Sorted array is :1 2 2 3 4 5
--------------------------------------------------
--------------------------------------------------
*/



//Answer


#include<stdio.h>

int main(){
  int a[20], i , j, size;
// Scaning the elements of the array.
  printf("Enter the size of the array {Maxium 20} :");
  scanf("%d", &size);
  for(i = 0; i < size; i++){
    switch(i){
      case 1:
        printf("Enter the 1st element of the array :");
        break;
      case 2:
        printf("Enter the 2nd element of the array :");
        break;
      case 3:
        printf("Enter the 3rd element of the array :");
        break;
      default:
        printf("Enter the %dth element of the array :", i);
        break;
    }
    scanf("%d",&a[i]);
  }
  //Entered order
  printf("Entered order is :");
  for(i = 0; i < size ; i++){
    printf("%d ", a[i]);
  }
// Sorting in ascending order.
  for(i = 0; i < size -1; i++){
    for(j = i + 1; j < size ;j++){
      if(a[i] > a[j]){   // You can change ' > ' to ' < ' for descending order.
        int tem = a[i];
        a[i] = a[j];
        a[j] = tem;
      }
    }
  }
  printf("\nSorted array is :");
  for(i = 0; i < size ; i++){
    printf("%d ", a[i]);
  }
  return 0;
}
