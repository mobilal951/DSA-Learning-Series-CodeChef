#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N; //number of test cases
	cin>>N;
	if(1<= N <= 1000)//constaraint : 1
	{
	for(int i=0;i<N;i++){
	    long long num,rev=0;
	    cin>>num;
	   if(1<= num <= 1000000)//constaraint : 2
	    {
	    while(num != 0){
	        rev= rev*10 + (num%10);
	        num = num/10;
	    }
	    cout<<rev<<endl;}
	}
	
	return 0;}
}
