#include <stdio.h>
#include <cs50.h>

int main(void) {
      
      
     int height = 0 ;
     
      do {
       height = get_int("Height : ");
       
      }
      while (height < 1 || height > 8);
      for(int row = height; row >0 ; row--){

              for( int space = row-1 ; space > 0 ; space--) {

                      printf(" ");

               }

              for( int hash = height; hash>=row ; hash-- ){

                      printf("#");

               }
               
               printf("  ");
               
               for(int hashrght = height; hashrght>=row; hashrght--) {
                
                printf("#");
                
               }
               
               

                printf("\n");


         }
         
  }