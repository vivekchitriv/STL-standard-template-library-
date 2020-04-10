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
	/*vector<long> e;
	for(int i=1;i<=5;i++)
		e.push_back(i);
	*///traversing
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
/*	cout<<"size :"<<e.size();
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
		cout<<*i<<" ";*/

	//modifiers
	vector<int > v;

	v.assign(5,10);

	cout<<"vector elements are:";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	v.push_back(15);
	int n = v.size();

	cout<<"\nthe last element is:"<<v[n-1];

	v.pop_back();
	cout<<"\nvector elements are:";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	v.insert(v.begin(),5);
	cout<<"\nthe first element is:"<<v[0];


	cout<<"\nvector elements are:";
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";

	v.erase(v.begin());
	cout << "\nThe first element is: " << v[0];
	v.emplace(v.begin(), 5);
	    cout << "\nThe first element is: " << v[0];

	    // Inserts 20 at the end
	    v.emplace_back(20);
	    n = v.size();
	    cout << "\nThe last element is: " << v[n - 1];

	    // erases the vector
	    v.clear();
	    cout << "\nVector size after erase(): " << v.size();

	    // two vector to perform swap
	    vector<int> v1, v2;
	    v1.push_back(1);
	    v1.push_back(2);
	    v2.push_back(3);
	    v2.push_back(4);

	    cout << "\n\nVector 1: ";
	    for (int i = 0; i < v1.size(); i++)
	        cout << v1[i] << " ";

	    cout << "\nVector 2: ";
	    for (int i = 0; i < v2.size(); i++)
	        cout << v2[i] << " ";

	    // Swaps v1 and v2
	    v1.swap(v2);

	    cout << "\nAfter Swap \nVector 1: ";
	    for (int i = 0; i < v1.size(); i++)
	        cout << v1[i] << " ";

	    cout << "\nVector 2: ";
	    for (int i = 0; i < v2.size(); i++)
	        cout << v2[i] << " ";


	return 0;
}



