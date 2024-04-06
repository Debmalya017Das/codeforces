#include<iostream>
using namespace std;
int main(){
    int m,n,k=0;
    cin >> m >> n;
    int p=m*n;
    if(p%2==0)
        cout << p/2;
    else{
        while(p!=1){
            p-=2;
            k++;
        }
        cout << k;
    }
}