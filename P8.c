#include<stdio.h>
main(){
	
	int Order_choice,service_choice;
	
	printf("Please Press 1 For Gujrati Thali \n");
	printf("Please Press 2 For Punjabi Thali \n");
	printf("Please Press 3 For Veg.Chinise \n");
	printf("Enter Your Choice : ");
	scanf("%d",&Order_choice);
	
	switch(Order_choice){
		case 1:
			printf("Press 1 For Gulab Jambun \n");
			printf("Press 2 For Kesar-Angur Rabdi \n");
			printf("Press 3 For Keasar Mango Ras \n");
			printf("Enter Your Choice : ");
			scanf("%d",&service_choice);
			
			switch(service_choice){
				case 1:
					printf("Tame Gulab Jambun Pasand Kariu Che.\n");
				break;
				
				case 2:
					printf("Tame Kesar-Angur Rabdi Pasand Kariu Che. \n");
				break;
				
				case 3:
					printf("Tame Kesar Mango Ras Pasand Kariu Che. \n");
				break;
				
				default:
					printf("Please Enter In Vaild Choice For Order. \n");
				break;			
			}
			break;
			
		case 2:
			printf("Press 1 For Special Punjabi Thali. \n");
			printf("Press 2 For Kaju-Handi Subji. \n");
			printf("Press 3 For Jeera-Rise. \n");
			printf("Enter Your Choice : ");
			scanf("%d",&service_choice);
			
			switch(service_choice){
				case 1:
					printf("Tame Special Punjabi Thali Pasand Kariu Che. \n");
				break;
				
				case 2:
					printf("Tame Kaju-Handi Sabji Pasand Kariu Che. \n");
				break;
				
				case 3:
					printf("Tame Jeera-Rise Pasand Kariu Che. \n");
				break;
				
				default:
					printf("Please Enter In Vaild Choice For Order. \n");			
			}
			break;
			
			case 3:
				printf("Press 1 For Monchow Soup. \n");
				printf("Press 2 For Paneer Tikii. \n");
				printf("Press 3 For Green Manchuren. \n");
				printf("Enter Your Choice : ");
				scanf("%d",&service_choice);
				
				switch(service_choice){
					case 1:
						printf("Tame Monchow Soup Pasand Kariu Che. \n");
					break;
					
					case 2:
						printf("Tame Paneer Tikii Pasand Kariu Che. \n");
					break;
					
					case 3:
						printf("Tame Green Manchuren Pasand Kariu Che. \n");
					break;
					
					default:
						printf("Please Enter In Vaild Choice For Order.");			
				}
	}	
}
