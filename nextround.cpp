#include<iostream>
using namespace std;
int main(){
    int n,k,w=0;
    cin >> n >> k;
    int a[50];
    for(int i=0;i<n;i++){
        cin >> a[i];        
    }
    for(int i=0;i<n;i++){
    if(k<=a[k])
       if(a[i]>=a[k]){
            w++;
        }       
    }
    cout << w;
}
