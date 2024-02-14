#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 
typedef long long ll;
int main(){FIN;

    //largo string
    int l; cin >> l;
    //cantidad de preguntas
    int p; cin >> p;
    //string s
    string s; cin>>s;
    //indices
    int i,j;
    //resultado a imprimir
    int res;

    //vector de sumas parciales
    
    vector <int> v;

    //primer valor = 0;
    v.push_back(0);


    int aux;
    //llenamos vector
    for (int k=0; k<l;k++){
        aux = v[k]+s[k] - 'a' + 1;
        v.push_back(aux); 
    }


    while (p--){
        
        cin >> i >> j;

        res = v[j] - v[i-1];

        cout << res << "\n";  
    }

    return 0;
}
