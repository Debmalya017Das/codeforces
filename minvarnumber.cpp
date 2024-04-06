#include<iostream>
using namespace std;
int check(int n){
    int k=0;
    while(n!=0){
        int s=0;
        s+=n%10;
        n/=10;
        int k=s;
    }return k;
}
int main(){
    int t;
    cin >> t;
    while(t!=0){
        int s;
        cin >> s;
        for(int i=0;i<123456790;i++)
            if(s==check(i))
                cout << i << endl;
        t--;
    }
}