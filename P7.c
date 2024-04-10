#include<stdio.h>
main(){
	
	int language_choice,service_choice;
	
	printf("Please Press 1 For English Language \n");
	printf("Please Press 2 For Hindi Language \n");
	printf("Please Press 3 For Gujrati Language \n");
	printf("Enter Your Choice : ");
	scanf("%d",&language_choice);
	
	switch(language_choice){
		case 1:
			printf("Press 1 For Internet Recharge \n");
			printf("Press 2 For Top-up Recharge \n");
			printf("Press 3 For Special Recharge \n");
			printf("Enter Your Choice : ");
			scanf("%d",&service_choice);
			
			switch(service_choice){
				case 1:
					printf("You Are Succesfully Done Internet Recharge. \n");
				break;
				
				case 2:
					printf("You Are Succesfully Done Top-up Recharge. \n");
				break;
				
				case 3:
					printf("You Are Succesfully Done Spical Recharge. \n");
				break;
				
				default:
					printf("Please Enter In Vaild Choice For Recharge. \n");
				break;			
			}
			break;
			
		case 2:
			printf("Internet Recharge Ki Liye 1 Dabaye. \n");
			printf("Top-up Recharge Ki Liye 2 Dabaye. \n");
			printf("Special Recharge Ki Liye 3 Dabaye. \n");
			printf("Enter Your Choice : ");
			scanf("%d",&service_choice);
			
			switch(service_choice){
				case 1:
					printf("Aapne Safalta Purvak Internet Recharge Kar Liya He. \n");
				break;
				
				case 2:
					printf("Aapne Safalta Purvak Top-up Recharge Kar Liya He. \n");
				break;
				
				case 3:
					printf("Aapne Safalta Purvak Special Recharge Kar Liya He. \n");
				break;
				
				default:
					printf("Yaha Koi Bhi Manpasand Choice Kare. \n");			
			}
			break;
			
			case 3:
				printf("Internet Recharge Mate Ahiya 1 Dabavo \n");
				printf("Top-up Recharge Mate Ahiya 2 Dabavo \n");
				printf("Special Recharge Mate Ahiya 3 Dabavo \n");
				printf("Enter Your Choice : ");
				scanf("%d",&service_choice);
				
				switch(service_choice){
					case 1:
						printf("Tame Safalta Purvak Internet Recharge Kari Lidhu Che. \n");
					break;
					
					case 2:
						printf("Tame Safalta Purvak Top-up Recharge Kari Lidhu Che. \n");
					break;
					
					case 3:
						printf("Tame Safalta Purvak Special Recharge Kari Lidhu Che. \n");
					break;
					
					default:
						printf("Ahiya Koi Pan Ek Avsay Pasand Karo.");			
				}
	}	
}
