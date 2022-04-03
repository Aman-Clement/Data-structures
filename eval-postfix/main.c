//evaluation of postfix

#include <stdio.h>
#include<math.h>
#include<string.h>
int stack[100];
int top=-1;

void push(int d){
    stack[++top]=d;
}

double pop(){
    return stack[top--];
}

int isdigit(char c){
    if(c>='0'&&c<='9')
        return 1;
    else
        return 0;
}

double calc(double op1,double op2,char s){
    switch(s) {
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op2*op1;
        case '/':
            return op1/op2;
        case '^':
        case '$':
            return pow(op1,op2);
    }
}

int main(){
    char postfix[100],sym;
     double res,op2,op1;
    printf("Enter the valid postfix expresion:");
    scanf("%s",postfix);
    for(int i=0;i<strlen(postfix);i++){
        sym=postfix[i];
        if(isdigit(sym)==1){
            push(sym-'0');
        }
        else{
            op2=pop();
            op1=pop();
            res= calc(op1,op2,sym);
            push(res);
        }
    }
    res=pop();
    printf("The value of the given expression is:%lf",res);
    return 0;
}
