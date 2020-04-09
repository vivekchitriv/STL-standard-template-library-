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
	vector<int> ar = {1,2,3,4,5,6};
	vector<int> ar1 = {10,20,30,40};
	//declaring iterator to a vector
/*	vector<int> :: iterator ptr;
	cout<<"Vector elements are::"<<endl;

	for(ptr=ar.begin();ptr<ar.end();ptr++)
		cout<<*ptr<<" ";*/
		//using advance iterator method

/*
	vector<int>::iterator ptr = ar.begin();
	advance(ptr,3);
	cout<<" the position of iterator after advancing it:"<<endl;
	cout<<*ptr<<" ";
*/

	//using next() and prev()

	/*vector<int>::iterator ptr = ar.begin();
	vector<int>::iterator ftr = ar.end();

	auto it = next(ptr,3);

	auto it1 = prev(ftr,3);

	// Displaying iterator position
	    cout << "The position of new iterator using next() is : ";
	    cout << *it << " ";
	    cout << endl;

	    // Displaying iterator position
	    cout << "The position of new iterator using prev()  is : ";
	    cout << *it1 << " ";
	    cout << endl;
*/


	//using inserter

	vector<int> :: iterator ptr = ar.begin();
	advance(ptr,4);

	copy(ar1.begin(),ar1.end(),inserter(ar,ptr));
	cout<<"The new vector after inserting elements is :"<<endl;
	for(int &x : ar)
		cout<<x<<" ";


	return 0;
}


