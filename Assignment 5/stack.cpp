/*
 * stack.cpp

 *
 *  Created on: 11-Sep-2018
 *      Author: ibm
 */

//Abhishek Wahane
//203165
//A4
//Class Template to implement Stack

#include<iostream>
#include<stack>
#define max 15
using namespace std;

template <class T>

class Stack
{
	int top;
	T S[max];

public:

	Stack()
	{
		top = -1;
		for(int i=0;i<max;i++)
		{
			S[i] = NULL;
		}
	}
	void push()
	{
		T x;

		if(top > max)
		{
			cout<<"Stack is full. \n";
		}
		else
		{   cout<<"Enter value: \n";
			cin>>x;
			top++;
			S[top] = x;
		}
	}
	void pop()
	{
		T y;

		if(top == -1)
		{
			cout<<"Stack is empty. \n";
		}
		else
		{
			y = S[top];
			cout<<"Popped value is: "<<y<<"\n";
			top--;
		}
	}
	void display()
	{
		cout<<"Stack: \n";
		for(int i=top;i!=-1;i--)
		{
			cout<<S[i]<<"\n";
		}
	}
};

int main()
{
	Stack <int> S1;

	int c1;


	cout<<"Stack operations Menu: \n";
	cout<<"1) Push \n";
	cout<<"2) Pop \n";
	cout<<"3) Display \n";
	cin>>c1;
	switch(c1)
		{
			case 1:
			{
				S1.push();
				S1.push();
				S1.push();
				S1.display();
				break;
			}
			case 2:
			{
				S1.pop();
				S1.display();
				break;
			}
			case 3:
			{
				S1.display();
				break;
			}
		}
return 0;
}

/*
OUTPUT:

Stack operations Menu:
1) Push
2) Pop
3) Display

1
Enter value:
10
Enter value:
20
Enter value:
30
Stack:
30
20
10
 */



