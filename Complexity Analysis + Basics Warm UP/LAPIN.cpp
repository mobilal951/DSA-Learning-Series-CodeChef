#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;//number of test cases
	if(1<= N <= 100){//constraint : 1
	for(int i=0;i<N;i++){
	    string str,left,right;
	    cin>>str;
	    
	    if(2<= str.size() <= 1000){//constraint : 2
	    int mid = (str.size()%2==0)?str.size()/2:(str.size()/2)+1;//finding mid of string
	    //dividing string into two equal parts
	    if(str.size()%2==0){//if length is even
	        left = str.substr(0,mid);
	        right= str.substr(mid,str.size()-1);
	    }
	    else{left = str.substr(0,mid-1);//if string length is odd
	    right= str.substr(mid,str.size()-1);}
        //sorting both halves of string
	    sort(left.begin(), left.end());
	    sort(right.begin(), right.end() );
	    
	    string ans = (left == right)?"YES":"NO";//comparing them and printing relative answer
	    
	    cout<<ans<<endl;
	        
	    }
	    
	}
	}
	
	return 0;
}
