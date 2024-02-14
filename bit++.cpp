#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 

int main(){FIN;

    int n;
    int res = 0; 
    string op;

    cin >> n;


    while (n--){
        cin >> op;
                
        if (op[1] == '+'){
            res++;
        }
        else{
            res--;
        }
    }

    cout << res << "\n";

}
