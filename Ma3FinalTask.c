#include<stdio.h>

int main(){

    int choice, price, payment, change;
    printf("NPC vendo! Happy to serve you\n\n");
    printf("[1]Coca-Cola (P50.00)\n[2]Mountain Dew (P80.00)\n[3]Nature's Spring (P20.00)\n");
        printf("Please select your beverage of choice:");
        scanf("%d", &choice);
    switch(choice){

        case 1: price = 50;
            printf("\nPlease Input Payment:Php");
            scanf("%d.00", &payment);
        if(payment>=price){
            change = payment-price;
            printf("\nYou have purchased Coca-Cola.\n");
            printf("\nChange:Php%d.00\n", change);
            printf("\nThank You! Come Again!\n");
        }
        else { printf("Sorry, you do not have enough money to continue on this transaction.\n\nPlease try again later.\n");
        }
        break;

        case 2: price = 80;
            printf("\nPlease Input Payment:Php");
            scanf("%d.00", &payment);
        if(payment>=price){
            change = payment-price;
            printf("\nYou have purchased Mountain Dew.\n");
            printf("\nChange:Php%d.00\n", change);
            printf("\nThank You! Come Again!\n");
        }
        else { printf("Sorry, you do not have enough money to continue on this transaction.\n\nPlease try again later.\n");
        }
        break;

        case 3:price = 20;
            printf("\nPlease Input Payment:Php");
            scanf("%d.00", &payment);
        if(payment>=price){
            change = payment-price;
            printf("\nYou have purchased Nature's Spring.\n");
            printf("\nChange:Php%d.00\n", change);
            printf("\nThank You! Come Again!\n");
        }
        else { printf("Sorry, you do not have enough money to continue on this transaction.\n\nPlease try again later.\n");
        }
        break;
        default:printf("\nBeverage not found.\n\nPlease try again later.\n");
        }
return 0;}
