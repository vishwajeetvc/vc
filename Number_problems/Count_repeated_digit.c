/* Error found in this program 
 
Q.This program count which digit repeated how many times.
Author : Vishwajeet kumar.

*/
#include<stdio.h>

int main(){
    int  x, num, a=0, b=0, c=0, d=0, e=0, f=0,g = 0, h = 0, i=0 ,j=0;
    printf("Enter a number:)");
    scanf("%d",&num);
    for(; num/10 != 0;){
	x = num%10;
	num/=10;
	switch(x){
	    case 0:
		a++;
		break;
	    case 1:
		b++;
		break;
	    case 2:
		c++;
		break;
	    case 3:
		d++;
		break;
	    case 4:
		e++;
		break;
	    case 5:
		f++;
		break;
	    case 6:
		g++;
		break;
	    case 7:
		h++;
		break;
	    case 8:
		i++;
		break;
	    case 9:
		j++;
		break;
	}
    }
	printf(" 0 = %d Times.\n", a);
	printf(" 1 = %d Times.\n", b);
	printf(" 2 = %d Times.\n", c);
	printf(" 3 = %d Times.\n", d);
	printf(" 4 = %d Times.\n", e);
	printf(" 5 = %d Times.\n", f);
	printf(" 6 = %d Times.\n", g);
	printf(" 7 = %d Times.\n", h);
	printf(" 8 = %d Times.\n", i);
	printf(" 9 = %d Times.\n", j);
    return 0;

}
