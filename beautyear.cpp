#include<iostream>
using namespace std;
bool unique(int y){
    int a = y / 1000;
    int b = y / 100 % 10;
    int c = y / 10 % 10;
    int d = y % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
        return 1;
    else
        return 0;
}
int main(){
    int y;
    cin >> y;
    for(y++;;++y){
        if(unique(y)==1){
            cout << y;
            break;
        }
        else
            continue;
    }

}
