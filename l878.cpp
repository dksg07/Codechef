#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, X;
        cin >> A >> B >> X; 
      
        int years = (B - A) / X;
        cout << years << endl;
    }
    return 0;
}



