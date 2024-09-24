#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int limit, counter = 0;
    
    printf("Enter a number: ");
    scanf("%d",&limit);
    
    while(counter < limit){
        
        if(counter % 2 == 0){
            continue;
            printf("%d ",counter);
            counter++;
        }
    }
    
    return 0;
}
