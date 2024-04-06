#include<iostream>
using namespace std;
int main(){
    int b,bb;
    cin >> b >> bb;
    int k=0;
    while(b<=bb){
        b*=3;
        bb*=2;
        k++;
    }
    cout << k;
}