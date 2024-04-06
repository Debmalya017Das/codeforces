#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin >> k >> n >> w;
    long long int b=0,c=0;
    c=(w*(w+1)/2)*k;
    b=abs(n-c);
    if(c>=n)
        cout << b;
    else    
        cout << 0;
}