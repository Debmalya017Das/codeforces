#include<iostream>
#include<vector>
using namespace std;
vector<int> a,b,c;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >>z;
        a.push_back(x);
        b.push_back(y);
        c.push_back(z);
    }
    int sx=0,sy=0,sz=0,kx=a.size(),ky=b.size(),kz=c.size();
    for(int i=0,j=0,k=0;i<kx,j<ky,k<kz;i++,j++,k++){
        sx+=a[i];
        sy+=b[j];
        sz+=c[k];
    }
    if(sx==0 && sy==0 && sz==0 )
        cout << "YES" << endl;
    else
        cout << "NO" ;
}