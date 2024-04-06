#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n,a=0,b=0,k=0;
        cin >> n;
        for(long long int i=1;i<n;i++){
            b=i;
            a=n-b;
            if(a>b)
                k++;
            else
                break;
        }
        cout << k << endl;
    }
}