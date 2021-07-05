#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	long long es=0,os=0,ec=0,oc=0,itr=1;//es = even sum, ec = even count same for os and oc
	while(ec <N || oc <N){
	    if(ec <N || itr%2==0){
	        es = es + itr;
	        ec++;
	        itr++;
	    }
	    if(oc <N || itr%2!=0){
	        os =os + itr;
	        oc++;
	        itr++;
	    }
	}
	cout<<es<<" "<<os<<endl;
	
	return 0;
}
