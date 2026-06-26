 //QUESTION NO 103
  #include<stdio.h>
  int main(){
     int choice;
     float balance=10000,amount;
     do{
         printf("\n===ATM MENU===\n");
         printf("1.Check Balance\n");
         printf("2.Deposit Money\n");
         printf("3.Withdraw Money\n");
         printf("4.Exit\n");
         
         printf("Enter Your Choice:");
         scanf("%d",&choice);
         
         switch(choice){
             case 1:
             printf("Current Balance:%.2f\n",balance);
             break;
             case 2:
             printf("Enter Amount To Deposit:");
             scanf("%f",&amount);
             balance=balance+amount;
             printf("Deposit Successful!\n");
             printf("Updated Balance=%.2f\n",balance);
             break;
             case 3:
             printf("Enter Amount To Withdraw:");
             scanf("%f",&amount);
             
             if(amount<=balance){
                 balance=balance-amount;
                 printf("Withdrwal Successful!\n");
                 printf("Remaining Balance=%.2f\n",balance);
             }
             else{
                 printf("Insufficient Balance!\n");
             }
             break;
             
             case 4:
             printf("Thank you for using ATM!\n");
             break;
             
             default:
             printf("Invalid choice!\n");
         }
     }
     while(choice!=4);
      return 0;
  }


