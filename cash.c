#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    int count = 0;
    float dollars = 0.0;
    int cents = 0;
    do {
    dollars = get_float("Change Owed: ");
    
      cents = round(dollars * 100);
    }
    while(cents < 0);
    
    while(cents !=0){
        
        if(cents >= 25) {
            count++;
            cents -= 25;
        }
        else if(cents >= 10){
            count++;
            cents -= 10;
        }
        else if(cents >= 5) {
            count++;
            cents -= 5;
        }
        else {
            count++;
            cents -= 1;
        }
    }
    printf("%i\n",count);
}