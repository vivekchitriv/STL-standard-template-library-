/*
 * main.cpp
 *
 *  Created on: 09-Apr-2020
 *      Author: sunbam
 */
#include<bits/stdc++.h>
using namespace std;
int increment(int x)
{
	return (x+1);
}
int main()
{
	//without using transform function
	/*int arr1[]={1,2,3};
	int arr2[]={4,5,6};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int res[n];
	for(int i=0;i<n;i++)
		res[i]=arr1[i]+arr2[i];
	for(int i=0;i<3;i++)
		cout<<res[i]<<" ";*/


/*
//using binary transform
		int arr1[]={1,2,3};
		int arr2[]={4,5,6};
		int n = sizeof(arr1)/sizeof(arr1[0]);
		int res[n];
		transform(arr1, arr1+n, arr2, res,plus<int>());
		for(int i=0;i<3;i++)
				cout<<res[i]<<" ";
*/
	int arr1[]={1,2,3,4,5};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	transform(arr1,arr1+n,arr1,increment);
	for(int i=0;i<5;i++)
				cout<<arr1[i]<<" ";

	printf("hello and welcome to my code");
	printf("this is develoer 2");

	printf("this addedd by dev1");
	printf("this is my code :4416");

	printf("this my code : abcd");

	return 0;
}



