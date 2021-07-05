/*
Submitted Solution link : 
https://www.codechef.com/viewsolution/47855796
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int size;
	cin>>size;
	int arr[size];
	for(int i =0; i<size;i++)
	{
	    cin>>arr[i];
	}
	int arr_rev[size];
	int iterator=0;
	for(int i =size-1; i>=0;i--)
	{
	    arr_rev[iterator]=arr[i];
	    iterator++;
	}
	for(int i =0; i<size; i++)
	{
	    cout<<arr_rev[i]<<" ";
	}
	return 0;
}
