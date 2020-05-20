#include<iostream>
#include<string.h>
using namespace std;
#define MAX 20

char stack[MAX];
int top=-1;

char pop( );
void push(char);
int prcd(char);
int isoperator(char);
void convertip(char[],char[]);

void push(char item)
{
	top++;
	stack[top]=item;
}

char pop()
{
	char a;
	a=stack[top];
	top--;
	return a;
}

int prcd(char symbol)
{
	switch(symbol)
	{
		case '+': case '-': 
			return 2;
		break;
		case '*': case '/': 
			return 4;
		break;
		case '(': case ')':
			return 1;
		break;
	}
}

int isoperator(char symbol)
{
	switch(symbol)
	{
		case '+': case '-': case '*': case '/': case '%': case '(': case ')':
			return 1;
		break;
		default:
			return 0;
	}
}

void convertip(char infix[],char postfix[])
{
	int i,symbol,j=0;
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		if(isoperator(symbol)==0)
		{
			postfix[j]=symbol;
			j++;
		}
		else
		{
			if(symbol=='(')
				push(symbol);
			else if(symbol==')')
			{
				while(stack[top]!='(')
				{
					postfix[j]=pop();
					j++;
				}
				pop();
			}
			else{
			if(prcd(symbol)>prcd(stack[top])) 
				push(symbol);
			else
			{
				while(prcd(symbol)<=prcd(stack[top]))
				{
					postfix[j]=pop();
					j++;
				}
				push(symbol);
			}
			}
		}
	}
	
	while(top!=-1)
	{
		postfix[j]=pop();
		j++;
	}
	postfix[j]='\0';
}


int main(){
	char infix[20],postfix[20];
	cout<<"Enter your infix expression: ";
	gets(infix);
	convertip(infix, postfix);
	cout<<"postfix: "<<postfix;
}
