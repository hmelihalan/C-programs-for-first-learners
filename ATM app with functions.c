#include <stdio.h>
#include <stdlib.h> 

void dispBalance(int blnc);
void addMoney(int blnc, int add);
void wthdrwMoney(int blnc, int wthdrw);

void NewFunction();

int main()
{
    int choice=1,
        balance = 1000,
        amount;


    while (choice != 0) {
        printf("1-Balance\n");
        printf("2-Add Money\n");
        printf("3-Withdraw Money\n");
        printf("0-Exit\n");
        printf("Please select the function you want: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                dispBalance(balance);
                break;
     case 2:
               addMoney(balance,amount);
                break;
            case 3:
               wthdrwMoney(balance,amount);
                break;
        case 0:
            printf("Exiting...");
            break;
        default:
            printf("Select between 0-3!!!\n");
            break;
        }

    }

    return 0;
}


void dispBalance(int blnc){
     printf("Your current balance is %d$\n", blnc);
}

void addMoney(int blnc,int add){
       printf("Enter the amount you want to add: ");
                scanf("%d", &add);
                if (add < 0) {
                    printf("Invalid amount!\n");
                } else {
                    blnc += add;
                    printf("Current balance: %d$\n", blnc);
                }
}

void wthdrwMoney(int blnc, int wthdrw){
    printf("Enter the amount you want to withdraw: ");
                scanf("%d", &wthdrw);
                if (wthdrw < 0) {
                    printf("Invalid amount!\n");
                } else if (wthdrw > blnc) {
                    printf("Not enough balance!!\n");
                } else {
                    blnc -= wthdrw;
                    printf("Current balance: %d$\n", blnc);
                }
}

