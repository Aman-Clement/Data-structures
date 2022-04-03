//infiox to postfix


 #include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

char infix[100],postfix[100],stack[100];
int top=-1;

void push(char c){
    stack[++top]=c;
}

char pop(){
    return stack[top--];
}

int priority(char c){
    switch(c){
        case '#':return 0;
        case '(':return 1;
        case '+':
        case '-':return 2;
        case '*':
        case '/':return 3;
        case '$':
        case '^':return 4;
    }
}

void itop(){
    int i,j;
    j=0;
    i=0;
    char sym;
    push('#');
    while((sym=infix[i++])!='\0'){
        if(sym=='('){
            push(sym);
        }
        else if(isalnum(sym)){
            postfix[j++]=sym;
        }
        else if(sym==')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();
        }
        else{
            while(priority(stack[top])>=priority(sym)){
                postfix[j++]=pop();
            }
            push(sym);
        }

    }
    while(stack[top]!='#'){
        postfix[j++]=pop();
    }
}

void main(){
    printf("Enter the infix expression\n");
    scanf("%s",infix);
    itop();
    printf("The postfix expression is %s",postfix);
}