#include<stdio.h>
#include<string.h>

int main(void){ 
	
	
	int input, selection, quantity, selection2; 
	
	char product[][100] = {"Honey Lemon", "Lemon", "Calamansi", "Papaya", "Apple"};
	char description[][100] = {"an edible fruit", "a round object", "used to write", "used to store things", "used to cure sickness"};
	float price[] = {10, 15, 20, 30, 35};
	int quant[100];
	int inventory[] = {5, 5, 5, 5, 5};
	
	char temp_product[100][100];
	char temp_description[100][100];
	float temp_price[100];
	float total[100];
	float total_payable; 
	char user[100],pass[100];
	

	
	

	
	printf("******************************WELCOME TO FRESCO *******************************\n");
    printf("                        FRESH. COOL .AND .READY .TO .GO                        \n");
    printf("*******************************************************************************\n\n");
    printf("     FFFFFFFFFFFFFFFFF   BBBBBBBBBBBBBBBBB                SSSSSSSSSSSSSSS\n");
    printf("     FFFFFFFFFFFFFFFFF   BBBBBB       BBBBBB           SSSSSSSS\n");
    printf("     FFFFF               BBBBBB         BBBBBB        SSSS\n");
    printf("     FFFFF               BBBBBB         BBBBBB       SSSS\n");
    printf("     FFFFFFFFFFF         BBBBBB       BBBBBBB       SSSSS\n");
    printf("     FFFFF               BBBBBB      BB               SSSSSss\n");
    printf("     FFFFF               BBBBBBBBBBBBB                    SSSSSSSSSSS\n");
 	printf("     FFFFF               BBBBBB      BBBBBBB                   SSSSSSS\n");
 	printf("     FFFFF               BBBBBB        BBBBBBB                      SSSSSS\n");
 	printf("     FFFFF               BBBBBB        BBBBBBB                      SSSSSS\n");
 	printf("     FFFFF               BBBBBB         BBBBBB                       SSSSS\n");
 	printf("     FFFFF               BBBBBB        BBBBBBB                   SSSSSSSS\n");
 	printf("     FFFFF               BBBBBBBBBBBBBBBBB           SSSSSSSSSSSSSSSSSSS\n");
 	printf("*******************************************************************************");
 	
 
    printf("\n\nEnter your username:\n"); 
    scanf("%s",&user); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&pass); 
 
    if(strcmp(user,"kimberly")==0){ 
        if(strcmp(pass,"ilovecfp")==0){ 
		system("clear"); //for linux
		//system("cls"); //for windows
        printf("\nWelcome.Login Success!\n\n\n"); //next page
        
        printf("***************************************************************************************\n\n\n");
		printf("Select a product below\n");
		printf("                                      List of Products                  \n\n(1)Honey Lemon\n(2)Lemon\n(3)Calamansi\n(4)Papaya\n(5)Applen\n\n");
		
	int i = 0, checker, bought_products = 0;
	for (i = 0; i < 5; i++){
		checker = 0;
		while (checker != 1){
			printf("\nProduct choice %d: ",i+1);
			scanf("%d",&input);
		
			printf("Product: %s\n\n",product[input-1]);
			printf("Description: %s\n\n",description[input-1]);
			printf("Price: %.2f\n\n",price[input-1]);
			
			printf("(1) Buy\n(2) Back\n");
			printf("\nInput your selection here: ");
			scanf("%d",&selection);
			
			if (selection == 1){
				checker = 1;
			}
			else{
				checker = 0;  //next page
			}
		}
		
		strcpy(temp_product[i],product[input -1]);
		strcpy(temp_description[i],description[input -1]);
		temp_price[i] = price[input -1];

		
		int quant_in_range = 0;
		
		while (quant_in_range != 1){
			printf("\nQuanitity: ");
			scanf("%d",&quantity);
			if(quantity <= inventory[input-1]){
				quant[i] = quantity; 
				inventory[input-1] = inventory[input-1] - quantity;
					quant_in_range = 1;
			}
			else{
				printf("There is/are only %d stocks left",inventory[input-1]);
				quant_in_range = 0; 
			} 	
		}
		
		bought_products++; //next page
		
		printf("(1) Add more products\n(2) Check my Total purchase\n");	
		printf("Input selection: ");
		scanf("%d",&selection2);
		
		if (selection2 == 1){
			//do nothing and proceed to loop
		}
		else {
			break; 
		}
	}  //next page
	
	printf("\n\nBill: 123456789        Address: Utok ni Kim            phone: 0987654321\n\n");
	
	int j;
	float discount = 0.10;  
	for (j = 0; j < bought_products; j++){
		printf("Product: %s\n",temp_product[j]);
		printf("Quantity: %d\n",quant[j]);
		printf("Price: %.2f\n",temp_price[j]);
		printf("Discount: 10%%\n");
		printf("\n\n");
		
		total[j] = (temp_price[j] - (temp_price[j])*(0.10))*quant[j];	
	}
	int k;
	for (k = 0; k < bought_products; k++){
		total_payable = total_payable + total[k];
	}			
	printf("Total Amount: %.2f",total_payable);
 
 
        } else { 
    printf("\nWrong password"); 
} 
    } else{ 
    printf("\nUser doesn't exist"); 
    return;
    
} 


 
}

