#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n>0){
        int a,b;
        cin >> a>> b;
        if(a%b==0)
            cout << 0 << endl;
        else{
            int w=a%b;
            cout << b-w << endl;
        }
        n--;
    }
}