#include <stdio.h>
#include<string.h>
char input[100];
int i=0;
int error =0;
void E();
void Eprime();
void T();
void Tprime();
void F();

void match(char c){
    if(input[i] == c)
    i++;
    else{
        error = 1;
        return;
    }
}
//E-->TE'
void E(){
 T();
 Eprime();
}

void Eprime(){
    if(input[i] == '+'){
    match('+');
    T();
    Eprime();
    }
}

void T(){
    F();
    Tprime();
}

void Tprime(){
    if(input[i] == '*'){
        match('*');
        F();
        Tprime();
    }
    
}

void F(){
    if(input[i] == '('){
        match('(');
        E();
        match(')');
    }
    else if(input[i] == 'i' && input[i+1] == 'd'){
        match('i');
        match('d');
    }
    else{
        error = 1;
        return;
        
    }
}


int main() {
    printf("Enter input string:");
    scanf("%s",input);
    E();
    
    if(error==0 && input[i] == '\0'){
        printf("successfully parsed\n");
    }
    else{
        printf("error in parsing\n");
    }
    
return 0;
}
