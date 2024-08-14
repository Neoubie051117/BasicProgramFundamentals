#include <stdio.h>
#include <stdlib.h> //(some IDE's doesn't need this they use clrsr(); to clear screen)
#include <conio.h>

int main(){
    /*This program will compute the volume of the cylinder
     *the formula is v = pi r^2 h
     *The formula in program should be approach in these way
     *v = pi * (r * r) * h 
     */


    //declaration + initialization
    double pi = 3.14159265359, volume;
    int r, h; //r = radius, h = height
    system("cls"); //clear screen/terminal/console

    //displays user interface and input
    printf("\nCompute the volume of the cylinder\n");

    printf("Input Radius: ");
    scanf("%d",&r);
    printf("Input Height: ");
    scanf("%d",&h);

    //formula to compute the volume of cylinder
    volume = pi * (r * r) * h;
    printf("\nThe Volume of the cylinder is: %.2lf",volume);


    return 0;
}