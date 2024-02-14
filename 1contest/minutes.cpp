#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 

int main(){FIN;

    int t; cin >> t;
    int h,m,res;

    while (t--){
        cin >> h >> m;

        res = 1440 - ((h*60) + m);

        cout << res << "\n";
    }

    return 0;
}
