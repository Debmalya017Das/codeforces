#include<iostream>
using namespace std;
/*bool check(int n){
    while(n!=0)

}*/

int main(){
    long long int n;
    cin >> n;
    long int k=0;
    while(n!=0)
    {
        long int d=0;
        d=n%10;
        if(d==7 || d==4)
            k++;
        n/=10;
    }
    if(k==4 || k==7 )
    cout << "YES" << endl;
    else    
        cout << "NO" << endl;
}