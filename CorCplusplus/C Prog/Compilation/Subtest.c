#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void clrscr(){
    system("cls");
}


int main() {
    clrscr();
    int x, y;
    bool answer;

    printf("Enter value of (x): ");
    scanf("%d",&x);
    printf("Enter value of (y): ");
    scanf("%d",&y);
    printf("\n");

    printf("true: 1 \nfalse: 0 \n");
    if(x == y){
        answer = true;
        printf("%d == %d answer %d or %d\n",x, y, x == y, answer);
    } 
    printf("%d != %d answer %d\n",x, y, x != y);
    printf("%d > %d answer %d\n",x, y, x > y);
    printf("%d < %d answer %d\n",x, y, x < y);
    printf("%d >= %d answer %d\n",x, y, x >= y);
    printf("%d <= %d answer %d\n",x, y, x <= y);

    return 0;
}
