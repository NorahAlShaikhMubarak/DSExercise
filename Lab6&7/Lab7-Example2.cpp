#include<iostream>
#include <ctype.h>
#include<stdlib.h>
using namespace std;
#define SIZE 20

int stack[SIZE];
int top=-1;

void push(int);
int pop();
int evaluate(int,int,char);
int evaluate_postfix(char[]);

void push(int n)
{
	top++;
	stack[top]=n;
}

int pop()
{
	int n;
	n=stack[top];
    top--;
    return n;
}

int evaluate(int op1, int op2,char ch)
{
	switch(ch)
	{
		case '+':
			return op1+op2;
		break;
		case '-':
			return op1-op2;
		break;
		case '*':
			return op1*op2;
		break;
		case '/':
			return op1/op2;
		break;
		case '%':
			return op1%op2;
		break;
	}
}

int evaluate_postfix(char s[])
{
	int i=0,n,op1,op2, result;
	char ch, ch1;
	ch=s[i];
    while(ch!='\0')
    {
        if(isdigit(ch)) 
		{
        	n=ch-'0'; 
        	push(n);
        }
        else
        {
        	op2=pop(); 
            op1=pop(); 
            n=evaluate(op1,op2,ch);
            push(n);
        }
        ch=s[++i];
    }
    result = pop();
    return result;
}

int main(){
	char postfix[20];
	int n;
	cout<<"Entar postfix expression: ";
    cin>>postfix;
    n=evaluate_postfix(postfix);
	cout<<"postfix evaluation: "<< n;
}

