#include <stdio.h>
#include <conio.h>

int main(){
    int a, b;       //declaration
    const char * word;

    printf("This Program to compare Two Values");
    printf("\nInput Value A: ");
    scanf("%d",&a);//we use & as a pointer to store input in declared variable
    printf("Input Value B: ");
    scanf("%d",&b);

    printf("\nComparing two values\n");
    //conditional statement

    if(a>b){      
        word = "greater than";
        printf("A: %d", a);
        printf(" is %s ", word);
        printf("B: %d", b);      
    }else if(a<b){
        word = "less than";
        printf("A: %d", a);
        printf(" is %s ", word);
        printf("B: %d", b);
    }else{        
        word = "equal to";
        printf("A: %d", a);
        printf(" is %s ", word);
        printf("B: %d", b);
    }
    
    return 0;
}