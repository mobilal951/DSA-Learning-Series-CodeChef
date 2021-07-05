#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	if(1 <= N <=200)
	{
	    int count=0;
	    int arr1[5]={1, 2, 3, 4, 5};
	    int arr2[5]={10, 9, 8, 7, 6};
	    int multiple=0;
	    while(count<N)
	    {
	        for(int i=0;i<5;i++){
	            cout<<arr1[i]+ (10*multiple)<<" ";
	        }
	        count++;
	        cout<<endl;
	        if(count>=N)
	        goto end;
	        for(int i=0;i<5;i++){
	            cout<<arr2[i]+ (10*multiple)<<" ";
	        }
	        count++;
	        cout<<endl;
	        multiple++;
	   }
	   end:;
	}
	return 0;
}
