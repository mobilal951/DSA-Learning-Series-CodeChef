//This approach got 6/14 casses passed and 
//caused TLE(time limit excede) in the last 8 casses due to nested loop i.e O(N^2)  :/

#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long N;
	cin>>N;
	if(1 <= N <= 5*10^5) {
    	long long arr[N];
    	for(int i=0;i<N;i++){
    	 cin>>arr[i];   
    	 if(not(1 <= arr[i] <= 10^8)){
    	     goto end;
    	 }
    	}
    	long long revenue[N]= {0};
    	for(int i=0;i<N;i++){
    	    for(int j=0;j<N;j++){
    	        if(arr[j] >= arr[i]){
    	            revenue[i] += arr[i];
    	        }
    	    }
    	}
    	long long max_revenue = *max_element(revenue, revenue+N);
    	cout<<max_revenue;
    	return 0;}
    	end:;
}

//This one got AC in all casses
#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long N;
	cin>>N;
	if(1 <= N <= 5*10^5) {
    	long long arr[N];
    	for(int i=0;i<N;i++){
    	 cin>>arr[i];   
    	 if(not(1 <= arr[i] <= 10^8)){
    	     goto end;
    	 }
    	}
    	long long revenue[N]= {0};
    	sort(arr, arr+N);
    	for(int i=0;i<N;i++){
    	    revenue[i] = arr[i]* (N-i);
    	}
    	long long max_revenue = *max_element(revenue, revenue+N);
    	cout<<max_revenue;
    	return 0;}
    	end:;
}   
