#include<stdio.h>
main(){
	
	int a,b,c,min_num;
	
	printf("Enter Value Of A : \n");
	scanf("%d",&a);
	printf("Enter Value Of B : \n");
	scanf("%d",&b);
	printf("Enter Value Of C : \n");
	scanf("%d",&c);
	
	min_num = (a < b && a < c) ? a : ((b < c) ? b : c);
	
	printf("The minimum value is: %d \n", min_num);


}
