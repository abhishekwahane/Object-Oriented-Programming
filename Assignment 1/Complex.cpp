/*
 * 1_Complex.cpp
 *
 *  Created on: 26-Jul-2018
 *      Author: wpu
 */

//Abhishek Wahane
//203165
//A4


#include <iostream>
using namespace std;


class complex
{
    double real,img;
public:
    complex operator +(complex c);
    complex operator -(complex c);
    complex operator *(complex c);
    complex operator /(complex c);
    friend istream& operator >>(istream &in, complex &c);       // friend function for extraction declared
    friend ostream& operator <<(ostream &out, complex &c);      // friend function for insertion declared

    complex()                                                   // default constructor
    {
        real = 0;
        img = 0;

    }
    complex(double x, double y)                                       // parameterized constructor
    {
        x = 5;
        y = 5;
    }
};

complex complex::operator +(complex c)                          // operator overloading of "+"
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

complex complex::operator -(complex c)                          // operator overloading of "-"
{
    complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}

complex complex::operator *(complex c)                          // operator overloading of "*"
{
    complex temp;
    temp.real = (real*(c.real)) - (img*(c.img));
    temp.img = (real*(c.img)) - (img*(c.real));
    return temp;
}

complex complex::operator /(complex c)                          // operator overloading of "/"
{
    complex temp;
    temp.real = ((real*(c.real)))/((c.real)*(c.real) + (c.img)*(c.img));
    temp.img = ((real*(c.img))) + (img*(c.real))/((c.real)*(c.real) + (c.img)*(c.img));
    return temp;
}

istream& operator>>(istream &in, complex &c)                    // operator overloading of ">>"
{
    cout<<"Real part : ";
    in>>c.real;
    cout<<"Imaginary part : ";
    in>>c.img;
    return in;
}

ostream& operator<<(ostream &out, complex &c)                   // operator overloading of "<<"
{
    if(c.img >= 0)
        out<<c.real<<"+"<<c.img<<"i";
    else
        out<<c.real<<c.img<<"i";
    return out;
}

int main()
{
    int choice;
    complex c1, c2, c3;
    cout<<"Enter 1st Complex no : "<<endl;
    cin>>c1;
    cout<<c1;
    cout<<" "<<endl;

    cout<<"Enter 2nd Complex no : "<<endl;
    cin>>c2;
    cout<<c2;
    cout<<" "<<endl;

    cout<<"MENU:"<<endl;
    cout<<"1) Addition"<<endl;
    cout<<"2) Subtraction"<<endl;
    cout<<"3) Multiplication"<<endl;
    cout<<"4) Division"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:

            c3 = c1 + c2;
            cout<<"The addition of the two complex numbers is :";
            cout<<c3;
            break;

        case 2:
            c3 = c1 - c2;
            cout<<"The subtraction of the two complex numbers is :";
            cout<<c3;
            break;

        case 3:
            c3  = c1 * c2;
            cout<<"The multiplication of the two complex numbers is :";
            cout<<c3;
            break;

        case 4:
            c3  = c1 / c2;
            cout<<"The division of the two complex numbers is : ";
            cout<<c3;
            break;

        default:
            cout<<"Invalid input";
    }

    return 0;
}

/*
OUTPUT:

Addition:

	Enter 1st Complex no :
	Real part : 5
	Imaginary part : 4
	5+4i
	Enter 2nd Complex no :
	Real part : 3
	Imaginary part : 2
	3+2i
	MENU:
	1) Addition
	2) Subtraction
	3) Multiplication
	4) Division
	1
	The addition of the two complex numbers is :8+6i

Subtraction:

	Enter 1st Complex no :
	Real part : 5
	Imaginary part : 5
	5+5i
	Enter 2nd Complex no :
	Real part : 2
	Imaginary part : 2
	2+2i
	MENU:
	1) Addition
	2) Subtraction
	3) Multiplication
	4) Division
	2
	The subtraction of the two complex numbers is :3+3i

Multiplication:

	Enter 1st Complex no :
	Real part : 5
	Imaginary part : 4
	5+4i
	Enter 2nd Complex no :
	Real part : 5
	Imaginary part : 4
	5+4i
	MENU:
	1) Addition
	2) Subtraction
	3) Multiplication
	4) Division
	3
	The multiplication of the two complex numbers is :9+0i

Division:

	Enter 1st Complex no :
	Real part : 5
	Imaginary part : 4
	5+4i
	Enter 2nd Complex no :
	Real part : 5
	Imaginary part : 4
	5+4i
	MENU:
	1) Addition
	2) Subtraction
	3) Multiplication
	4) Division
	4
	The division of the two complex numbers is : 0.609756+20.4878i
*/
