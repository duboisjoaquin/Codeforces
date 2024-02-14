#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 

int main(){FIN;

    int n; cin >> n;
    string res = "I hate";;

    string it = " it";
    string love = " that I love";
    string hate = " that I hate";



    for (int i=0; i<n;i++){ 

        if (i == n-1){
            res = res + it;
        }
        else{
            if (i%2 == 0){
                res = res + love; 
            }
            else{
                res = res + hate;
            }
        }
    }
    cout << res << "\n";
    return 0;
}
