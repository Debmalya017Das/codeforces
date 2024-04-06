#include<iostream>
using namespace std;
int c=0;
int main(){
    int n;
    cin >> n;
    while(n!=0){
        int a[3],k=0;
        for(int i=0;i<3;i++){
            cin >> a[i];
            if(a[i]==1)
                k++;
        }
        if(k>1)
            c++;
        n--;
    }
    cout << c << endl;
}