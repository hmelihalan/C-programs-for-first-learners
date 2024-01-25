#include <stdio.h>
#include <stdlib.h> 

void dispBalance(int blnc); 
int addMoney(int blnc, int add);            /*Function headers that makes the choices*/
int wthdrwMoney(int blnc, int wthdrw);

int main() {
    int choice,
        balance = 1000,
        amount;

    while (choice != 0) {/*While function does the 0 option to quit*/
        printf("1-Balance\n");
        printf("2-Add Money\n");
        printf("3-Withdraw Money\n");
        printf("0-Exit\n");
        printf("Please select the function you want: ");
        scanf("%d", &choice);
        switch (choice) {/*Switch funciton checks the choice to execute the right funtions*/
            case 1:
                dispBalance(balance);
                break;
            case 2:
                printf("Enter the amount you want to add: ");
                scanf("%d", &amount);
                balance = addMoney(balance, amount);
                break;
            case 3:
                printf("Enter the amount you want to withdraw: ");
                scanf("%d", &amount);
                balance = wthdrwMoney(balance, amount);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Select between 0-3!!!\n");
                break;
        }
    }

    return 0;
}

void dispBalance(int blnc){
    printf("Your current balance is %d$\n", blnc); /*Display function of balance*/
}

int addMoney(int blnc, int add) {
    if (add < 0) {
        printf("Invalid amount!\n");            /*Function does the addition*/
    } else {                                    /*If the number is less than 0 it asks user choices again*/
        blnc += add;
        printf("Current balance: %d$\n", blnc);
    }
    return blnc;
}
#include <stdio.h>
#include <stdlib.h> 

void dispBalance(int blnc); 
int addMoney(int blnc, int add);            /*Function headers that makes the choices*/
int wthdrwMoney(int blnc, int wthdrw);

int main() {
    int choice,
        balance = 1000,
        amount;

    while (choice != 0) {/*While function does the 0 option to quit*/
        printf("1-Balance\n");
        printf("2-Add Money\n");
        printf("3-Withdraw Money\n");
        printf("0-Exit\n");
        printf("Please select the function you want: ");
        scanf("%d", &choice);
        switch (choice) {/*Switch funciton checks the choice to execute the right funtions*/
            case 1:
                dispBalance(balance);
                break;
            case 2:
                printf("Enter the amount you want to add: ");
                scanf("%d", &amount);
                balance = addMoney(balance, amount);
                break;
            case 3:
                printf("Enter the amount you want to withdraw: ");
                scanf("%d", &amount);
                balance = wthdrwMoney(balance, amount);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Select between 0-3!!!\n");
                break;
        }
    }

    return 0;
}

void dispBalance(int blnc){
    printf("Your current balance is %d$\n", blnc); /*Display function of balance*/
}

int addMoney(int blnc, int add) {
    if (add < 0) {
        printf("Invalid amount!\n");            /*Function does the addition*/
    } else {                                    /*If the number is less than 0 it asks user choices again*/
        blnc += add;
        printf("Current balance: %d$\n", blnc);
    }
    return blnc;
}
/*Using a int return on these two functions to update the files,*/
/*because in the function variable is not global so balance is not gonna update you can use pointers to do with no return void functions*/
int wthdrwMoney(int blnc, int wthdrw) {
    if (wthdrw < 0) {
        printf("Invalid amount!\n");
    } else if (wthdrw > blnc) {                  /*Function does the withdrawal*/          
        printf("Not enough balance!!\n");        /*If the number is bigger than balance or less than 0 code asks user choices again*/
    } else {
        blnc -= wthdrw;
        printf("Current balance: %d$\n", blnc);
    }
    return blnc;
}
int wthdrwMoney(int blnc, int wthdrw) {
    if (wthdrw < 0) {
        printf("Invalid amount!\n");
    } else if (wthdrw > blnc) {                  /*Function does the withdrawal*/          
        printf("Not enough balance!!\n");        /*If the number is bigger than balance or less than 0 code asks user choices again*/
    } else {
        blnc -= wthdrw;
        printf("Current balance: %d$\n", blnc);
    }
    return blnc;
}
