#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	string result = (((a+b+c)==180)&& a != 0 && b != 0 && c != 0)?"YES":"NO";
	cout<<result;

