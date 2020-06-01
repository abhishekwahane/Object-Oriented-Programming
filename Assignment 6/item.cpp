/*
 * item.cpp
 *
 *  Created on: 18-Sep-2018
 *      Author: ibm
 */

//203165
//Abhishek Wahane
//CSE-A A4

#include<iostream>
#include<string.h>
#include<list>
using namespace std;

class item
{
	int icode;
	string iname;
	double icost;
	int iquantity;

public:

	list <item> l;
	list <item> :: iterator itr;

	void accept()
	{

		cout<<"Enter Code: ";
		cin>>icode;
		cout<<"Enter Name: ";
		cin>>iname;
		cout<<"Enter Cost: ";
		cin>>icost;
		cout<<"Enter Quantity: ";
		cin>>iquantity;
	}

	void display()
	{
		cout<<"Item details: ";
		cout<<icode<<"\t " <<iname;
		cout<<"\t "<<icost<<"\t ";
		cout<<iquantity;
	}

	void show_container()
	{
		for( itr=l.begin(); itr!=l.end(); itr++)
		{
			itr -> display();
		}
	}

	void remove_item_end()
	{
		item I;
		int n;
		itr = l.end();
		itr--;
		I = *itr;
		l.pop_back();
		cout<<"Item removed from end";
	}

	void remove_item_start()
	{
		item I;
		int n;
		itr = l.begin();
		I =*itr;
		l.pop_front();
		cout<<"Item removed from start";
	}

	/*
	void sorting()
	{
		cout<<"Sorted list of items: ";
		l.sort();
		show_container();
	}

	void search()
	{
		item I;
		int c;
		cout<<"Code to be searched: ";
		cin>>c;
		I.icode=c;
		I =*itr;
		itr=find(l.begin(), l.end(), I)
				if(itr!=l.end())
					cout<<"Exists in list";
				else
					cout<<"Not in list";
	}
	*/
};


int main()
{
	int ch;

	cout<<"MENU:";
	cout<<"1) Push front ";
	cout<<"2) Push Back";
	cout<<"3) Remove from start";
	cout<<"4) Remove from beginning";
	cout<<"5) Sort";
	cout<<"6) Search";

	cin>>ch;
	item I;

	switch(ch)
	{
		case 1: I.accept();
				l.push_front(I);
				cout<<"list";
				I.show_container();
				break;

		case 2: I.accept();
				l.push_back(I);
				cout<<"list";
				I.show_container();
				break;

		case 3: I.remove_item_start();
				I.show_container();
				break;

		case 4: I.remove_item_end();
				I.show_container();
				break;

		/*
		case 5: I.sort();
				I.show_container();
				break;

		case 6: I.search()
				I.show_container();
				break;
		*/
	}
}




