/*
 * file.cpp
 *
 *  Created on: 30-Aug-2018
 *      Author: ibm
 */

//203165
//Abhishek Wahane
//CSE-A A4
//Program to count number of lines which don't start with 'A'

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string str;
	int count = 0;

	ifstream fin;
	fin.open("story.txt");
	if(!fin.is_open())
	{
		cout<<"Error opening file."<<endl;
	}
	while(!fin.eof())
	{
		getline(fin,str);
		if(str[0]!='A')
		{
			count++;
		}

	}
	fin.close();
	cout<<"No. of lines not starting with 'A' are "<<count;
}

/*
OUTPUT:

No. of lines not starting with 'A' are 3

*/
