#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void clrscr(){
    system("cls");
}

int main(){
    clrscr();

    char name[10];

    printf("What's your name? ");
    scanf("%s", &name);

    printf("\nHello: %s", name);

    getch();

    return 0;
}