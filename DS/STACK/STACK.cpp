// Implementation stack data structure using array
#include <bits/stdc++.h>
using namespace std;

// define a stack 
#define MAX_STACK_SIZE 100
int STACK[MAX_STACK_SIZE];
int top = -1;

// all the functions of the stack are defined here
void push(int element)
{
	// push function are basically same as the queue
	// except the pop function
	//the main concept of push is add new element at the TOP of the array
	// and shift all the elements to the right
	// so the last element will be at the top of the array

	// check if the stack is full

	if (top == MAX_STACK_SIZE - 1)
	{
		cout << "Stack is full" << endl;
	}

	// push the element
	top++;
	STACK[top] = element;

}

int pop()
{
	// pop function are basically same as the queue
	// except the push function
	//the main concept of pop is remove the element at the TOP of the array
	if (top < 0)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}

	int element = STACK[top];
	top--;
	return element;

}

int peek()
{
	// peek function are basically same as the queue
	// except the push and pop function
	//the main concept of peek is to see the element at the TOP of the array

	if (top == -1)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	else
	{
		return STACK[top];
	}

	return -1;

}

void display()
{
	// display function are basically same as the queue
	// except the push and pop function
	//the main concept of display is to see all the elements of the array

	cout << "Stack is : ";

	for (int i = 0; i <= top; i++)
	{
		cout << STACK[i] << " ";
	}

	cout << endl;

}

int main()
{
	// push elements
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	cout << "TOP of the STACK : " << peek() << endl;
	// pop elements
	pop();
	push(100);
	display();
	cout << "TOP of the STACK : " << peek() << endl;

	return 0;
}
