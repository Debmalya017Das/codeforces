#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k=0;
        cin >> n;
        vector<int> a(n,0);
        for(auto i: a)
            cin >> i;
        // unordered_map<int,int >b;
        // for(auto i:a)
        //     b[i] = i%2;
        // for(auto j:b) 
        //     cout << j.first << endl;  
        int o=0,e=0;
        for(int i=0;i<n;i++){
            if(i%2!=a[i]%2){
                if(a[i]%2==1)
                    o++;
                else
                    e++;   
        }
        }
        if(o!=e)
            cout << -1 << endl;
        else
            cout << e<< endl;
    
}
}