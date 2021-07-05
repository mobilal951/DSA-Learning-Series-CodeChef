/*
Submitted Solution link : https://www.codechef.com/viewsolution/47861188
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	int maxele = max({a, b, c});
	int minele = min({a, b, c});
	int mid =(a+b+c) - (maxele+minele);
	cout<<mid;
	
	return 0;
}

