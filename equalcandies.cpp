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
        for(int i=0;i<n;i++)
            s+=(a[i]-a[0]);
        cout << s << endl;
        t--;
    }
}