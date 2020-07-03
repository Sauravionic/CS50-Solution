#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    
    int noofletters = 0;
    int noofpunct = 0;
    int noofwords = 1;
    int noofsentences = 0;
    double st,l,index;
    string s = get_string("Text: ");
 
    for(int i =0, n = strlen(s); i<n; i++){
        
        if(s[i] == ' ' || s[i] == '!' || s[i] == '?' || s[i] == '.' || s[i] == ',' || s[i] == '-' || s[i] == '\'' || s[i] == '\"') {
            noofpunct++;
        }
        if(s[i] == '.' || s[i] == '!' || s[i] == '?'){
            noofsentences++;
        }
        if(s[i] == ' '){
            noofwords++;
        }
    }
    noofletters = strlen(s) - noofpunct;
    
    l = ((double)noofletters/(double)noofwords)*100;
    st = ((double)noofsentences/(double)noofwords)*100;
    
    index = (0.0588*l) - (0.296*st) - 15.8;
    
    if(index > 16) {
        printf("Grade 16+\n");
    }
    else if(index < 1){
        printf("Before Grade 1\n");
    }
    else{
    printf("Grade %.0f\n",index);
    }
    
}