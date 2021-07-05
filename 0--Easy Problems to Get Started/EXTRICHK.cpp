#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	/*if(a+b+c==180){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}*/
	string result;
	if(a+b >c && b+c >a && c+a > b){
	     result = (a ==b && b==c && c==a)?"1":(a==b || b==c|| c==a)?"2":(a!=b && b!=c && c!=a)?"3":"-1";
	    //cout<<"YES";
	}
	else{
	     result = "-1";
	}
	cout<<result;
}
