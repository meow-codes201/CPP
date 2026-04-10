#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int state = 0;
    printf("Enter a string: ");
    scanf("%s",str);
    
    for(int i =0;i<strlen(str);i++){
        char ch = str[i];
        if(state == 0){
            if(ch == 'a')
            state = 1;
            else if (ch == 'b')
            state = 0;
        }
    else if(state == 1){
        if(ch == 'a')
        state = 1;
        else if(ch == 'b')
        state = 2;
    }        
    else if(state == 2){
        if(ch == 'a')
        state = 1;
        else if(ch == 'b')
        state = 0;
        
    }
    
        
    }
    if(state == 2)
    printf("string %s is accepted\n",str);
    else
    printf("string %s is rejected\n",str);
    
    
    
    return 0;
}
