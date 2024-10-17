#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void clrscr(){
    system("cls");
}

int birthMonthInput(){
    int birthMonth, birthDate, birthYear;
    const char* convertMonthNumberToWord;
    bool repeatBirthMonthInput =  false;
    
    do{
        printf("\n\nBirth Month: ");
        scanf("%d",&birthMonth);
        
        if(birthMonth >= 1 && birthMonth <= 12){
            repeatBirthMonthInput = false;
        }else{
            repeatBirthMonthInput = true;
        }

    switch (birthMonth)
    {
    case 1:
        convertMonthNumberToWord = "January";
        break;
    case 2:
        convertMonthNumberToWord = "February";
        break;
    case 3:
        convertMonthNumberToWord = "March";
        break;
    case 4:
        convertMonthNumberToWord = "April";
        break;
    case 5:
        convertMonthNumberToWord = "May";
        break;
    case 6:
        convertMonthNumberToWord = "June";
        break;
    case 7:
        convertMonthNumberToWord = "July";
        break;
    case 8:
        convertMonthNumberToWord = "August";
        break;
    case 9:
        convertMonthNumberToWord = "September";
        break;
    case 10:
        convertMonthNumberToWord = "October";
        break;
    case 11:
        convertMonthNumberToWord = "November";
        break;
    case 12:
        convertMonthNumberToWord = "December";
        break;
    default:
            repeatBirthMonthInput = true;
        break;
    }
    }while(repeatBirthMonthInput == true);
    
    printf("\n\nBirth Date: ");
    scanf("%d",&birthDate);

    
    printf("\n\nBirth Year: ");
    scanf("%d",&birthYear);

    return 0;
}

int form(){
    char firstName[50], middleName[50], lastName[50], contactNumber[50];
    int age;

    printf("==========[ Fill Up Form ]==========\n \n");
    printf("First Name: ");
    scanf("%s",&firstName);
    printf("Middle Name: ");
    scanf("%s",&middleName);
    printf("Last Name: ");
    scanf("%s",&lastName);

    printf("Age: ");
    scanf("%d",&age);

    printf("Contact Number: ");
    scanf("%s",&contactNumber);

    printf("===================================\n \nPress any key to proceed to next page.....");
    getch();

    clrscr();

    birthMonthInput();
    
}


int main(){ 
    clrscr();   


    form();

    return 0;
}