#include<bits/stdc++.h>
//put endl after every output otherwise answer is not accepted.
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,k=0;
        cin >> a >> b;
        if(a==b)
            cout << k;
        else if(b>a){
            k=b-a;
            if(k%2==0)
                cout << 2;
            else
                cout << 1;
        }else{
            k=a-b;
            if(k%2==0)
                cout << 1;
            else
                cout << 2;
        }
    }
}
