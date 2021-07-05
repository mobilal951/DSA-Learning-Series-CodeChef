#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	start :;
	cin>>N;
	if(N > 99){
	    goto end;
	}
	if(N != 42){
	    cout<<N<<endl;
	    goto start;
	}
	end:;
	return 0;
}
