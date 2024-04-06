#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int n,m,a;
    cin >> n >> m >> a;
    long long val=ceil((double)m/a)*ceil((double)n/a);
    cout << val;
}