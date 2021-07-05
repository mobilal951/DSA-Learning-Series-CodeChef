#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int inp,count=0;
	cin>>inp;
	string str1 = "";
	//int factors[];
	for(int i=1; i<=inp;i++){
	    if(inp%i==0){
	        count++;
	        str1.append(to_string(i));
	        str1.append(" ");
	    }
	}
	cout<<count<<endl;
	cout<<str1;
	return 0;
}
