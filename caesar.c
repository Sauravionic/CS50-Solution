#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc , string argv[]) {
    
    

if(argc != 2){
    
    printf("Usage: ./caesar key\n");
    return 1;
}
        
else{

int count = 0;

    // Checking if user entered string or number
    for(int i = 0; i < strlen(argv[1]); i++){
        
        if(isdigit(argv[1][i]) == 0){
            count++;    // If user enters string then count = +1 otherwise if statement doesn't work
        }
    }
    
    if((count <= strlen(argv[1]) && count > 0)) { // If user entered more than one string like ./caesar hello hello then it works(1st condition)
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    else {
         
         int key = atoi(argv[1]);
         if(key<0){
        
         }
         else{
        string text = get_string("plaintext: ");
        
        printf("ciphertext: ");
        for(int i = 0;i<strlen(text);i++){
            
            int charnum = 0;
        
               if(text[i] >= 'A' && text[i] <= 'Z'){
                
                charnum = text[i]+key;
                while(charnum > 90){
                    charnum = 64+(charnum-90);
                }
                printf("%c",charnum);
            
           }
                
                else if(text[i] >= 'a' && text[i] <= 'z'){
                charnum = text[i]+key;
                while(charnum > 122){
                    charnum = 97+(charnum-123);
                }
                printf("%c",charnum);
           }
           else if(!isalpha(text[i])){
               printf("%c",text[i]);
           }
        }
    printf("\n");
    return 0;
    }
    }
}


       
}