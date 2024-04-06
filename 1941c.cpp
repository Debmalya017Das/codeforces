#include <bits/stdc++.h>
using namespace std;

int beaut(int n, string s) {
    string a = "map", b = "pie";
    int c = 0;
    for (int i = 0; i < n - 2; i++) {
        if (s.substr(i, 3) == a || s.substr(i, 3) == b) { 
            c++; 
            i += 2; 
        }
    }
    return c;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << beaut(n, s) << endl;
    }
    return 0;
}
