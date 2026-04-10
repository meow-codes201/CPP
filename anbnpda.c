#include<stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top = -1;

void push(char c){
    stack[++top] = c;
}
void pop(){
    if(top >= 0){
        top--;
    }
}
char peek(){
    if(top >= 0){
        return stack[top];
    }
    else{
        return 'E';
    }
}

int main(){
    char input[MAX];
    int i=0;
    printf("enter string in a and b: ");
    scanf("%s",input);
    push('Z');
    while(input[i] != '\0'){
        if(input[i] == 'a'){
            push('A'); }
        else if(input[i] == 'b'){
            if(peek() == 'A'){
                pop();
            }else{
                printf("Rejected\n");
                return 0;
            } }
            else{
                printf("Rejected\n");
                return 0;
            }
            i++;
    }
    if(peek() == 'Z')
    printf("Accepted\n");
    else
    printf("Rejected\n");
}
