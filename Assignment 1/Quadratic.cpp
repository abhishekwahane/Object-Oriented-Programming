/*
 * 1_Quadratic.cpp
 *
 *  Created on: 26-Jul-2018
 *      Author: wpu
 *
 */

//Abhishek Wahane
//203165
//CES-A A4


#include <iostream>
using namespace std;

class quadratic
{
	int a,b,c;
public:
	quadratic operator + (quadratic q);
	quadratic operator - (quadratic q);
	friend istream& operator >>(istream &in, quadratic &q);         // friend function for extraction declared
	friend ostream& operator <<(ostream &out, quadratic &q);        // friend function for insertion declared
	quadratic()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	quadratic(int x, int y, int z)
	{
		x = 3;
		y = 2;
		z = 1;
	}
};

quadratic quadratic::operator +(quadratic q)                        // operator overloading of "+"
{
	quadratic q3;
	q3.a = a + q.a;
	q3.b = b + q.b;
	q3.c = c + q.c;
	return q3;
}

quadratic quadratic::operator -(quadratic q)                        // operator overloading of "-"
{
	quadratic q3;
	q3.a = a - q.a;
	q3.b = b - q.b;
	q3.c = c - q.c;
	return q3;
}

istream& operator>>(istream &in, quadratic &q)                    // operator overloading of ">>"
{
	cout<<"Enter 1st coefficient :"<<endl;
	cin>>q.a;
	cout<<"Enter 2nd coefficient :"<<endl;
	cin>>q.b;
	cout<<"Enter 3rd coefficient :"<<endl;
	cin>>q.c;
    return in;
}

ostream& operator<<(ostream &out, quadratic &q)                   // operator overloading of "<<"
{
    cout<<"The Quadratic equation is : ";
    cout<<q.a<<"x^2+"<<q.b<<"x+"<<q.c<<endl;
    return out;
}

int main()
{
	int choice;
	quadratic q1,q2,q3;
	cout<<"Enter coefficients for 1st equation: "<<endl;
	cin>>q1;
	cout<<q1;
	cout<<"Enter coefficients for 2nd equation: "<<endl;
	cin>>q2;
	cout<<q2;

	cout<<"MENU:"<<endl;
	cout<<"1) Addition"<<endl;
	cout<<"2) Subtraction"<<endl;
	cin>>choice;

	switch(choice)
	{
		case 1:

			q3 = q1 + q2;
			cout<<"Addition of two equations is: "<<endl;
			cout<<q3;
			break;

		case 2:

			q3 = q1 - q2;
			cout<<"Subtraction of two equations is: "<<endl;
			cout<<q3;
			break;

		default:
		    cout<<"Invalid input";
	}
	return 0;

}

/*
OUTPUT:

Addition:

	Enter coefficients for 1st equation:
	Enter 1st coefficient :
	5
	Enter 2nd coefficient :
	4
	Enter 3rd coefficient :
	3
	The Quadratic equation is : 5x^2+4x+3
	Enter coefficients for 2nd equation:
	Enter 1st coefficient :
	3
	Enter 2nd coefficient :
	2
	Enter 3rd coefficient :
	1
	The Quadratic equation is : 3x^2+2x+1
	MENU:
	1) Addition
	2) Subtraction
	1
	Addition of two equations is:
	The Quadratic equation is : 8x^2+6x+4

Subtraction:

	Enter coefficients for 1st equation:
	Enter 1st coefficient :
	5
	Enter 2nd coefficient :
	5
	Enter 3rd coefficient :
	5
	The Quadratic equation is : 5x^2+5x+5
	Enter coefficients for 2nd equation:
	Enter 1st coefficient :
	2
	Enter 2nd coefficient :
	2
	Enter 3rd coefficient :
	2
	The Quadratic equation is : 2x^2+2x+2
	MENU:
	1) Addition
	2) Subtraction
	2
	Subtraction of two equations is:
	The Quadratic equation is : 3x^2+3x+3

 */






