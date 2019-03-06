#include<stdio.h>

int main()
{
    int option;
    int pin;
    int initialPiyush=10000;
  	int initialPranad=20000;
  	int initialMohit=30000;
    int choice;
    int deposit;
    int balTotal;

    printf("Welcome to Pranad ATM\n\n");
    printf("Press 1 to enter pin\n");
    scanf("%d",&option);

    switch(option)
    {
    case 1:

        printf("Enter Your 4-digit Pin: \n");
        scanf("%d",&pin);

        if(pin==1234)
        {
            printf("Welcome Piyush\n");
            printf("Press 1: Deposit Money\n");
            printf("Press 2: Withdraw Money\n");
            printf("Press 3: Check Balance\n");
            scanf("%d",&choice);
         switch(choice)
         {
           case 1:
             printf("Enter money to deposit");
             scanf("%d",&deposit);

             balTotal=deposit+initialPiyush;
             printf("New Balance is: %d",balTotal);
             break;

           case 2:
             printf("Enter money to withdraw\n");
             scanf("%d",&deposit);
             if(deposit<=initialPiyush)
             {
                printf("Thankyou for withdrawing\nUpdated balance is: %d",balTotal);
                balTotal=initialPiyush-deposit;
             }
             else
             {
                 printf("Insufficient Funds");
             }
           break;
           case 3:
             printf("Your balance is: %d,initialPiyush");
             break;
           default:printf("Wrong Pin");
         }
        }
        else if(pin==5678)
        {
           printf("Welcome Pranad\n");
            printf("Press 1: Deposit Money\n");
            printf("Press 2: Withdraw Money\n");
            printf("Press 3: Check Balance\n");
            scanf("%d",&choice);
         switch(choice)
         {
           case 1:
             printf("Enter money to deposit");
             scanf("%d",&deposit);

             balTotal=deposit+initialPranad;
             printf("New Balance is: %d",balTotal);
             break;

           case 2:
             printf("Enter money to withdraw\n");
             scanf("%d",&deposit);
             if(deposit<=initialPranad)
             {
                printf("Thankyou for withdrawing\nUpdated balance is: %d",balTotal);
                balTotal=initialPranad-deposit;
             }
             else
             {
                 printf("Insufficient Funds");
             }
             break;
           case 3:
             printf("Your balance is: %d,initialPranad");
             break;
           default:printf("Wrong Pin");
         }
        }
        else if(pin==6789)
        {
           printf("Welcome Mohit\n");
            printf("Press 1: Deposit Money\n");
            printf("Press 2: Withdraw Money\n");
            printf("Press 3: Check Balance\n");
            scanf("%d",&choice);
         switch(choice)
         {
           case 1:
             printf("Enter money to deposit");
             scanf("%d",&deposit);

             balTotal=deposit+initialMohit;
             printf("New Balance is: %d",balTotal);
             break;

           case 2:
             printf("Enter money to withdraw\n");
             scanf("%d",&deposit);
            if(deposit<=initialMohit)
             {
                printf("Thankyou for withdrawing\nUpdated balance is: %d",balTotal);
                balTotal=initialMohit-deposit;
             }
             else
             {
                 printf("Insufficient Funds");
             }

             break;
           case 3:
             printf("Your balance is: %d,initialMohit");
             break;
           default:printf("Wrong Pin");
         }
        }
       else
       {
         printf("Wrong Pin");
       }


    }
}
