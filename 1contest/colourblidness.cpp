#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 

int main(){FIN;

    int t,n; cin >> t;
    string s1,s2;
    int aux;


    while (t--){

        cin >> n >> s1 >> s2;

        aux = 0;

        for (int i=0; i<n; i++){

            if (s1[i] == 'R' && (s2[i] == 'G' || s2[i] == 'B')){
                aux = 1;
                break;
            }
            if (s2[i] == 'R' && (s1[i] == 'G' || s1[i] == 'B')){
                aux = 1;
                break;
            }
        }

        if (aux == 0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }   
    return 0;
}
