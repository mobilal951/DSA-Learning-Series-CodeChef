/*
Problem Link :
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b >c && b+c >a && c+a > b){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}
