/*
Submitted Solution link : 
https://www.codechef.com/viewsolution/47869719
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int start,end;
	cin>>start>>end;
	for(int i =start;i<=end;i++){
	    if(i%2 != 0){
	        cout<<i<<" ";
	    }
	}
	return 0;
}
