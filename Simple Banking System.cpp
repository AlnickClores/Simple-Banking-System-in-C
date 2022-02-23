#include<stdio.h>

int main()
{
    //balance, deposit, withdraw
    
    int balance = 0;
    int deposit, withdraw;
    int choice;
    
    printf("\tSimple Banking System\n");
    
    while(choice != 4)
    {
    printf("\nChoose Transaction\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    
    scanf("%d", &choice);
    
        switch(choice)
        {
            case 1:
            printf("Enter the amout you want to deposit: ");
            scanf("%d", &deposit);
                balance+= deposit;
                printf("Your balance is: %d\n\n", balance);
                    break;
                    
            case 2:
            printf("Enter the amount you want to withdraw: ");
            scanf("%d", &withdraw);
                balance-= withdraw;
                if(balance < 0)
				{
        			printf("Insufficient Balance");
        		return 0;
        		}
                printf("Your balance is %d\n\n", balance);
                    break;
                    
            case 3:
                printf("Your balance is: %d\n\n", balance);
            		break;
            		
            case 4:
            	printf("Thank You! :)");
            		return 0; 
            default:
            		printf("Enter correct number!");
            		break;
        }
    }
    
    return 0;
}
