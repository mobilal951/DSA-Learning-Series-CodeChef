#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int space=0;space <(N-i-1);space++){
            cout<<" ";
        }
        for(int dot = N-i;dot<=N;dot++){
            cout<<"*";
        }
        cout<<endl;
    }
}
