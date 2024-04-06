#include<iostream>
using namespace std;
int main(){
    double n,k,s=0;
    double r=0.0;
    cin >> n;
    int i=n;
    while(n!=0){
        cin >> k;
        s+=k;
        n--;
    }
    r=s/i;
    cout << r;
}