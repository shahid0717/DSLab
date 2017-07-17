#include<stdio.h>
#include<stdlib.h>
int MAX_SIZE 10;

int stack[MAX_SIZE],top=-1;

int isFull()
{
	
	
	return (top==MAX_SIZE-1)?1:-1;

}
int isEmpty()
{

return(top==-1)?1:-1;
}

int peek()
{
//return element at the top of stack
}

void push(int e){
//inserts an element into stack
	if()
	{
		e++;
		printf("%d",);
		PRINTF("ENTER NO IS SUCCESSFULLY INSERTED INSTACK");
	}
	else{
		printf("stack is full");
	}
}

void pop(){
//deletes an element from top of stack
	int d;
	if(whether the stack is not empty)
	{
		//d=top of stack
		//decrement the top
		//msg element d successfully deleted
	}
	else{
		//msg stack underflow
	}
}

int main(){
	int choice,e;
	do
	{
		//display menu 1.peek 2.push 3.pop 4.exit
		printf("enter your choice");
		scanf("%d"&choice);
		//take input in choice variable
		switch(choice){
			case 1:
				peek=peek(e);
				break;
			case 2:
				push=push(e);
				break;
			case 3:
				pop=pop(e);
				break;
			case 4:
				
				break;
			default:
				//invalid choice				
		}
	}while(1);
	return 0;
}
