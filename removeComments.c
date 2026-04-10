#include<stdio.h>
#include<string.h>

int main(){
    char code[1000];
    int i=0;
    printf("enter source code, end with ~\n");
    
    while((code[i] = getchar()) != '~'){
        i++;
    }
    int j=0;
    while(j<i){
    if(code[j] == '/' && code[j+1]=='/'){
        j+=2;
        while(code[j] != '\n'){
            j++;
        }
    }
    
    else if(code[j]=='/' && code[j+1] == '*'){
        j+=2;
        while(j<i-1 && !(code[j]=='*' && code[j+1]=='/')){
            j++;
        }
        j+=2;
    }
    
    else{
        printf("%c",code[j]);
        j++;
        
    }
        
    }
    
    return 0;
}
