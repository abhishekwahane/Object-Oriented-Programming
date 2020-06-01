/*
 * employee.cpp
 *
 *  Created on: 20-Sep-2018
 *      Author: ibm
 */

//Assignment 2
//203165
//Abhishek Wahane
//CSE-A A4

#include<iostream>
using namespace std;

class employee
{
	protected:
		int id;
		string name;

	public:
		void accept()
		{
			cout<<"Enter Employee ID: ";
			cin>>id;
			cout<<"Enter Employee Name: ";
			cin>>name;
		}
		void display()
		{
			cout<<"ID:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
		}
};


class salariedemployee : public employee
{
	protected:
		double wsal;

	public:

		void accept()
		{
			cout<<"Enter weekly salary: ";
			cin>>wsal;
		}
		void display()
		{
			cout<<"Total Weekly Salary:"<<"₹"<<wsal<<endl;
		}
};

class hourlyemployee : public employee
{

	protected:
		int hr;
		double wage;
		double hsal;

	public:

		void accept()
		{
			cout<<"Enter wage per hour: ";
			cin>>wage;
			cout<<"Enter hours worked: ";
			cin>>hr;
		}
		void calculate()
		{
			if(hr<40)
			{
				hsal=hr*wage;
			}
			else
			{
				hsal=1.5*hr*wage;
			}
		}
		void display()
		{
			cout<<"Total Hourly Salary:"<<"₹"<<hsal<<endl;
		}
};

class commissionemployee : public employee
{
	protected:
		int sale;
		double rate;
		double csal;

	public:

		void accept()
		{
			cout<<"Enter rate: ";
			cin>>rate;
			cout<<"Enter sales: ";
			cin>>sale;
		}
		void calculate()
		{
			csal=rate*sale;
		}
		void display()
		{
			cout<<"Total Commission Salary:"<<"₹"<<csal<<endl;
		}
};

class salariedcommision: public commissionemployee
{
	int basesalary;
	double scsal;

public:

	void accept()
	{
		cout<<"Enter base salary: ";
		cin>>basesalary;
		cout<<"Enter rate: ";
		cin>>rate;
		cout<<"Enter sales: ";
		cin>>sale;
	}
	void calculate()
	{
		csal=rate*sale;
		scsal=basesalary + csal;
	}
	void display()
	{
		cout<<"Total Salaried commision salary:"<<"₹"<<scsal<<endl;
	}
};

int main()
{
	int ch;
	cout<<"EMPLOYEE SALARY MENU:"<<endl;
	cout<<"1) Salaried Employee"<<endl;
	cout<<"2) Hourly Employee"<<endl;
	cout<<"3) Commission Employee"<<endl;
	cout<<"4) Salaried commision Employee"<<endl;
	cin>>ch;

	switch(ch)
	{
		case 1:
			{
			salariedemployee se;
			se.employee::accept();
			se.accept();
			se.employee::display();
			se.display();
			}
			break;

		case 2:
			{
			hourlyemployee he;
			he.employee::accept();
			he.accept();
			he.calculate();
			he.employee::display();
			he.display();
			}
			break;

		case 3:
			{
			commissionemployee ce;
			ce.employee::accept();
			ce.accept();
			ce.calculate();
			ce.employee::display();
			ce.display();
			}
			break;

		case 4:
			{
			salariedcommision sce;
			sce.employee::accept();
			sce.accept();
			sce.calculate();
			sce.employee::display();
			sce.display();
			}
			break;
	}
}

/*
OUTPUT:

1
Enter Employee ID: 123
Enter Employee Name: Abhishek
Enter weekly salary: 10000
ID:123
Name:Abhishek
Total Weekly Salary:₹10000


2
Enter Employee ID: 123
Enter Employee Name: Abhishek
Enter wage per hour: 50
Enter hours worked: 150
ID:123
Name:Abhishek
Total Hourly Salary:₹11250


3
Enter Employee ID: 123
Enter Employee Name: Abhishek
Enter rate: 50
Enter sales: 100
ID:123
Name:Abhishek
Total Commissioned Salary:₹5000


4
Enter Employee ID: 123
Enter Employee Name: Abhishek
Enter base salary: 25000
Enter rate: 100
Enter sales: 100
ID:123
Name:Abhishek
Total Base plus commisioned Salary:₹35000

*/


