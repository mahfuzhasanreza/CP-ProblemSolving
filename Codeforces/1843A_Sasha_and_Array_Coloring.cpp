#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(arr, arr+n);
        long long int sum=0;

        for(int i=0; i<(n/2); i++){
            sum+=(arr[n-i-1]-arr[i]);
        }
        cout<<sum<<endl;

    }
    
    return 0;
}