#include<stdio.h>

int main(){
  int a[20], i, j, size;
  printf("Enter the size of the array [Maximum 20] :) ");
  scanf("%d", &size);
  printf("\n");

  for(i = 0; i < size; i++){
    printf("Enter number on the %d index:) ", i);
    scanf("%d", &a[i]);
  }
  for(i = 0; i <= size/2 ; i++){
    int t = a[i];
    a[i] = a[(size - 1) -i];
    a[(size - 1) -i] = t;
  }
  for(i = 0; i < size; i++){
    printf("%d ",a[i]);
  }

  return 0;
}
