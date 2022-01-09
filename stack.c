#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;


int Empty(){
	
	if(top == -1){
		printf("비었음\n");
		return 1; 
		
	} else {
		return 0;
	} 
}


int Full(){
	
	if(top >= MAX-1){
		printf("꽉참\n");
		return 1;
		
	} else {
		return 0;
	}
}


int Push(int data){
	
	if(Full()) {
		return 0;
	} else {
		stack[++top] = data;
	}
	
}


int Pop(){
	
	if(Empty()){
		return 0;
	} else {
		printf("%d\n", stack[top--]);
	}
	
}


int main(void){
	
	Push(1);
	Push(2);
	Push(3);
	Push(4);
	Push(5);
	Push(6);
	Pop();
	Pop();
	Pop();
	Pop();
	Pop();
}
