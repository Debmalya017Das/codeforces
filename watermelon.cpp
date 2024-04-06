#include<iostream>
using namespace std;
int main(){
    int a=0,w=0,k=0;
    // cout << "Enter the weight of watermelon: " << endl;
    cin >> w;
    for (int i=0;i<=w;i++){
        a=w-i;
        if(a%2 ==0 && i%2==0)
            k++;
    }
    if(k>0 && w!=2)
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;
}