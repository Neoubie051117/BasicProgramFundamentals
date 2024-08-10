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

    int age = 21;           //integer
    float gpa = 2.75;       //floating point number
    char grade = 'B';       //singe character
    char name[] = "Robert"; //array of character

    //display output
    printf("Hello %s\nYou are %d years old\nYour GPA is %.2f\nYour Grade is %c\n",name,age,gpa,grade);

    return 0;
}