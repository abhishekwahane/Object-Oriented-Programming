/*
 * inventory.cpp
 *
 *  Created on: 06-Sep-2018
 *      Author: student
 */


#include <iostream>
#include<fstream>
using namespace std;

class items
{

public:

	int code;
		char name[30];
		int quantity;
		int cost;


	void accept()
	{
		cout<<"Enter Item Code:";
		cin>>code;
		cout<<"Enter Item Name:";
		cin>>name;
		cout<<"Enter Item Quantity:";
		cin>>quantity;
		cout<<"Enter Item Cost:";
		cin>>cost;
	}

	void display()
	{
		cout<<"\n"<<code;
		cout<<"\t"<<name;
		cout<<"\t"<<quantity;
		cout<<"\t"<<cost;
	}
};

int main()
{
	items i1,i2,i3;
	int c;

	cout<<"MENU: ";
	cout<<"\n 1) Add Item";
	cout<<"\n 2) Display Items";
	cout<<"\n 3) Search Item";
	cin>>c;

	fstream file;

	switch(c)
	{
		case 1:
		{
			i1.accept();
			file.open ("inventory.txt", ios::in | ios::app | ios::binary);
			file.write ((char*)&i1, sizeof(i1));
			file.seekg(ios::beg);
			file.close();
			break;
		}
		case 2:
		{
			file.open ("inventory.txt", ios::in | ios::app | ios::binary);
			cout<<"Code \t Name \t Quantity \t Code";
			while(!file.eof())
			{
				file.read((char*)&i2, sizeof(i2));
				i2.display();
			}
			file.close();
			break;
		}
		case 3:
		{
			int s;
			cout<<"Enter Item Code:";
			cin>>s;
			file.open ("inventory.txt", ios::in | ios::app | ios::binary);
			file.read((char*)&i3, sizeof(i3));
			if(s==i3.code)
			{
				cout<<"Code \t Name \t Quantity \t Code";
				cout<<"Item found: ";
				i3.display();
			}
			else
			{
				cout<<"\n Item not found";
			}
			file.close();
			break;
		}
	}
}

