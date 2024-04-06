/// not working
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t ;
    while(t>0){
        int n,s=0;
        cin >> n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i])
                s++;
            else
                continue;
        }
        if(s!=0)
            cout << "NO" << endl;
        else    
            cout << "YES" << endl;
        t--;
    }
}