/*
 * main.cpp
 *
 *  Created on: 09-Apr-2020
 *      Author: sunbam
 */
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<long> e;
	for(int i=1;i<=5;i++)
		e.push_back(i);
	//traversing
	/*cout<<"output begin and end :";
	for(auto i=e.begin();i!=e.end();i++)
		cout<<*i<<" ";
	cout<<endl;
	cout<<"output of cbegin and cend ::";
	for(auto i=e.cbegin();i!=e.cend();i++)
		cout<<*i<<" ";
	cout<<endl;
	cout<<"output of rbegin and rend::";
	for(auto i=e.rbegin();i!=e.rend();i++)
		cout<<*i<<" ";
	cout<<endl;
	cout<<"output of crbegin and crend ";
	for(auto i=e.crbegin();i!=e.crend();i++)
		cout<<*i<<" ";
*/

	//capacity
	cout<<"size :"<<e.size();
	cout<<"\ncapacity	:"<<e.capacity();
	cout<<"\nmax_size	:"<<e.max_size();

	e.resize(4);
	cout<<"\nsize :"<<e.size();

	if(e.empty()==false)
		cout<<"\n Vector is not empty!";
	else
		cout<<"\n vector is empty!";
	e.shrink_to_fit();
	cout<<"\nvector elements are";
	for (auto i=e.begin();i!=e.end();++i)
		cout<<*i<<" ";
	return 0;
}



