//203165
//Abhishek Wahane
//A4
//Assignment 3 : Exception

#include <iostream>
using namespace std;

class employee                                     //Class 'employee' declaration
{
	int eid,eage,eincome ;
	string ename,ecity;
	char efourwheeler;

public:
	employee(int i, int ag, int in, string nm, string ct, char fw)     //Parameterised Constructor
	{
		eid=i;
		eage=ag;
		eincome=in;
		ename=nm;
		ecity=ct;
		efourwheeler=fw;
	}

	void display()                                  //Display FUnction
	{
		cout<<"ID:"<<eid<<endl;
		cout<<"Name:"<<ename<<endl;
		cout<<"Age:"<<eage<<endl;
		cout<<"Income:"<<eincome<<endl;
		cout<<"City:"<<ecity<<endl;
		cout<<"Fourwheeler:"<<efourwheeler<<endl;
	}

};

int main()
{
	int id = 0,age = 0,income = 0;
	string name,city;
	char fourwheeler;
	int count = 0;

	cout<<"Enter ID: ";
	cin>>id;
	cout<<"Enter Name: ";
	cin>>name;

	//Try Age
	try
	{
		cout<<"Enter age: ";
		cin>>age;
		if (age<18 || age>55)
			throw age;
		else
			count++;
	}
	catch(int a)
		{
			cout<<"Exception: Incorrect Age"<<endl;
		}

	//Try Income
	try
	{
		cout<<"Enter Income: ";
		cin>>income;
		if (income<50000 || income>100000)
			throw income;
		else
			count++;
	}
	catch(int a)
	{
		cout<<"Exception: Incorrect Income"<<endl;
	}

	//Try City
	try
	{
		cout<<"Enter City: ";
		cin>>city;
		if (city=="Mumbai" || city=="Pune" || city=="Banglore" || city=="Chennai")
			count++;
		else
			throw city;
	}
	catch(string a)
	{
		cout<<"Exception: Incorrect City"<<endl;
	}

	//Try Fourwheeler
	try
	{
		cout<<"Whether having Fourwheeler ?";
		cin>>fourwheeler;
		if (fourwheeler=='Y')
			count++;
		else
			throw fourwheeler;
	}
	catch(char a)
	{
		cout<<"Exception: Fourwheeler"<<endl;
	}

	if(count==4)
	{
	employee e1(id,age,income,name,city,fourwheeler);         //Object created
	e1.display();                                             //Display function called
	}
	else
	{
		cout<<"Exception !"<<endl;
	}
}


/*
OUTPUT:

___Output with Exception___

Enter ID: 123
Enter Name: Abhishek
Enter age: 15
Exception: Incorrect Age
Enter Income: 5000
Exception: Incorrect Income
Enter City: Delhi
Exception: Incorrect City
Whether having Fourwheeler ?N
Exception: Fourwheeler
Exception !


____Output without Exception___

Enter ID: 123
Enter Name: Abhishek
Enter age: 20
Enter Income: 50001
Enter City: Pune
Whether having Fourwheeler ?Y
ID:123
Name:Abhishek
Age:20
Income:50001
City:Pune
Fourwheeler:Y


 */

