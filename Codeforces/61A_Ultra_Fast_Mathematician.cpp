#include<bits/stdc++.h>
using namespace std;

int main(){
    string st1, st2;
    cin>>st1>>st2;

    for(int i=0; i<st1.length(); i++){
        if(st1[i]==st2[i]){
            cout<<0;
        } else{
            cout<<1;
        }
    } cout<<endl;

    return 0;
}