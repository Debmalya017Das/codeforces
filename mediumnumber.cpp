#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
       vector<int> a(3,0);
        for(int i=0;i<3;i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        cout << a[1] << endl;
        t--;
    }
}