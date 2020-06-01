/*
 * filewrite.cpp
 *
 *  Created on: 30-Aug-2018
 *      Author: ibm
 */

//203165
//Abhishek Wahane
//CSE-A A4
//Program to accept user data and write to file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	//Accepting User Data
	string name;
	int rollno, marks;
	cout<<"Enter Roll No:";
	cin>>rollno;
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Marks:";
	cin>>marks;

	ofstream fout;
	//Creating new file
	fout.open("data.txt", ios::app);
	//Write to file
	fout<<"Student Data: "<<endl;
	fout<<"Roll No: "<<rollno<<endl;
	fout<<"Name: "<<name<<endl;
	fout<<"Marks: "<<marks<<endl;
	//Closing file
	fout.close();
}



