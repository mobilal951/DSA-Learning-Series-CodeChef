/*
Submitted Solution link : https://www.codechef.com/viewsolution/47860032
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	string result = (N%5==0 || N%11==0)? "ONE" : "NONE";
	if(N%5==0 && N%11==0){
	    result = "BOTH";
	}
	cout<<result;
	
	return 0;
}
