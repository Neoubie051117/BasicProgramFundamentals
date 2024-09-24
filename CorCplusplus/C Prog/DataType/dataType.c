#include <stdio.h>
#include <stdbool.h>

int main(){
/*Data types:
*An attribute associated with a piece of data 
*that tells a computer system how to interpret its value.
*
*  |Data Type        |   Variable   |  Value/Data    |  Details             |
*/

    char                    a;                          //single character %c
    char                    b[] = "Character(s)";       //array of character(s) %s

    float                   c = 3.141592;               //4 bytes (32 bits of precision) 6-7 digits %f
    double                  d = 3.141592653589793;      //8 bytes (64 bits of precision) 15-16 digits %lf

    bool                    e = true;                   //1 byte true of false
    char                    f = 100;                    //1 byte (-128 to +127) %d or %c
    unsigned char           g = 255;                    //1 byte (0 to +255) %d or %c
    short int               h = 32767;                  //2 bytes (-32,768 to +32,767) %d
    unsigned short int      i = 65535;                  //2 bytes (0 to +65,535) %d
    
    int                     j = 2147483647;             //4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int            k = 4294967295L;            //4 bytes (0 to +4,294,967,295) %u
    long long int           l = 9223372036854775807;    //8 bytes (-9 quintillion to +9 quintillion)
    unsigned long long int  m = 18446744073709551615U;  //8 bytles (0 to +18 quintillion)

    //Display Output

    printf("%c      \n",a); //character
    printf("%s      \n",b); //character array
    printf("%f      \n",c); //float
    printf("%lf     \n",d); //double: means long float (precise)
    printf("%d      \n",e); //bool
    printf("%d      \n",f); //character as numeric value
    printf("%d      \n",g); //unsigned character as numeric value
    printf("%d      \n",h); //short
    printf("%d      \n",i); //unsigned short
    printf("%lld    \n",l); //int
    printf("%llu    \n",m); //unsigned int
    

    return 0;
}