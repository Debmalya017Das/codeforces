#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    if(a[n-1]==0)
        cout << "easy" << "";
    else
        cout << "hard" << "";

}