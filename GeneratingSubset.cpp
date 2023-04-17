#include<bits/stdc++.h>
using namespace std;

void Gen(int k,int n,vector<int> &a){
    if( k== n+1){
        for(int i=0;i<a.size();i++)   cout<<a[i]<<" ";
        cout<<endl;
    }
    else{
        a.push_back(k);
        Gen(k+1,n,a);
        a.pop_back();
        Gen(k+1,n,a);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a;
    Gen(1,n,a);
}