#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter Number For A Check Even || Odd : \n");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		
		printf("Your Number Is Even");
	}
	else{
		printf("Your Number Is Odd");
	}
	
}
