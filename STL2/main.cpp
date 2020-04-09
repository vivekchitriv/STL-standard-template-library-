/*
 * main.cpp
 *
 *  Created on: 09-Apr-2020
 *      Author: sunbam
 */

//c++ code to demonstrate the the working  of iterator begin() and end();

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	vector<int> ar={1,2,3,4,5,6};
	//declaring iterator to a vector
/*	vector<int> :: iterator ptr;
	cout<<"Vector elements are::"<<endl;

	for(ptr=ar.begin();ptr<ar.end();ptr++)
		cout<<*ptr<<" ";*/
		//using advance iterator method

	vector<int>::iterator ptr = ar.begin();
	advance(ptr,3);
	cout<<" the position of iterator after advancing it:"<<endl;
	cout<<*ptr<<" ";


	return 0;
}


