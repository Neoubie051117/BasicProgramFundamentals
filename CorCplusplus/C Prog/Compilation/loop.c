#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void clrscr(){
    system("cls");
}

int main(){
    clrscr();

    int initialNumber = 0;
    int maxNumber = 10;

    int number = initialNumber;

    printf("While Loop: ");

    while(initialNumber < maxNumber) {
        
        number++;
        initialNumber = number;
        if(number == maxNumber){
            printf("%d ",number);
        }else{
            printf("%d, ",number);
        }
        
    }
    printf("\n");
    printf("End number is %d",number);
    printf("\n");

    number = 0;

    printf("Do While Loop: ");

    do{
        number++;
        initialNumber = number;
        if(number == maxNumber){
            printf("%d ",number);
        }else{
            printf("%d, ",number);
        }
    }while(initialNumber < maxNumber);
    printf("\n");
    printf("End number is %d",number);
    printf("\n");

    printf("For Loop: ");

    for(number = 0; number < maxNumber; number++){
        if(number == maxNumber){
            printf("%d ",number);
        }else{
            printf("%d, ",number);
        }
    }

    printf("\n");
    printf("End number is %d",number);
    printf("\n");

    getch();
    return 0;
}