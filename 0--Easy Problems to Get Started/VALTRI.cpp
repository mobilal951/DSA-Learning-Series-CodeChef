/*
Submitted Solution link : 
https://www.codechef.com/viewsolution/47879195
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int S;
	cin>>S;
	string result = (S%5==0 || S%6==0)?"YES":"NO";
	cout<<result;
	return 0;
}
