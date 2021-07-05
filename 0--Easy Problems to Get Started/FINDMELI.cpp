/*
Submitted Solution link :https://www.codechef.com/viewsolution/47883815
*/

#include <algorithm>
#include <vector>
#include<iostream>

using namespace std;

int main() {
	// your code goes here
	int N,x;
	cin>>N>>x;
	int input;
	vector<int> nums(N);
	for(int i =0;i<N;i++){
	    cin>>input;
	    nums[i]=input;
	}
	for(int i=0;i<nums.size();i++)
	{
	    if(nums[i]==x)
	    {
	        cout<<"1";
	        return 0;
	    }
	}
	 
	    cout<<"-1";
	
	
	return 0;
}
