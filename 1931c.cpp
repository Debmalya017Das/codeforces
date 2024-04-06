#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int eq(int n,vector<int> a){
    int m_f=1;
    int c_f=1;
    sort(a.begin(),a.end());
    for(int i=1;i<a.size();i++){
        if(a[i]==a[i-1]){
            c_f++;
            m_f=max(m_f,c_f);
        }else{
            c_f=1;
        }
    }
    return a.size()-m_f;
}

int main(){
    // vector<int>a;
    // int n = a.size();
    // while(n!=0){

    // }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >>a[i];
    cout << eq(n,a)<<endl;
    }
}