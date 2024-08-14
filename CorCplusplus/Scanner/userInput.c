#include <stdio.h>
#include <conio.h>

int main(){
    //declaration
    int a, b;
    double sum, difference, product, quotient;

    //user interface / input
    printf("Input Value A: ");
    scanf("%d",&a);
    printf("Input Value B: ");
    scanf("%d",&b);
    
    //initialization
    sum         =   a + b; 
    difference  =   a - b;
    product     =   a * b;
    quotient    =   a / b;

    //display output
    printf("\nDisplay Output\nSum = %.2lf\n",sum);
    printf("Difference = %.2lf\n",difference);
    printf("Product = %.2lf\n",product);
    printf("Quotient = %.2lf\n",quotient);
}