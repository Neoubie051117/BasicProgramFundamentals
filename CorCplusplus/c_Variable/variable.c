#include <stdio.h>

int main(){

    /*variable =    Allocated space in memory to store data/value
     *              We refer to a variable's name to acess the stored value
     *              That variable behaves as if it was the value it holds/containsw
     *              We need to declare what type of data we're storing
     */

    int a;          //declaration    
    a = 123;        //initialization
    int b = 456;    //declaration + initialization

    //More examples:

    int age = 21;       //integer
    float gpa = 2.75;    //floating point number
    char grade = 'B';    //singe character
    char name[] = "Robert";

    //display output
    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your GPA is %.2f\n",gpa); /
    printf("Your Grade is %c\n",grade);

    return 0;
}