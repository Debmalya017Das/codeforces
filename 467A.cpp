#include<bits/stdc++.h>
using namespace std;
int k=0;
int main(){
    int n;
    cin >> n;
    while(n--){
        int p,q;
        cin >> p >> q;
        if(p<q && q-p>1)
            k++;
    }
    cout << k << endl;
}