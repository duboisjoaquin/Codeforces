#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 
typedef long long ll;

int main(){FIN;

    //cantidad de laptops
    ll n; cin >> n;
    //precio calidad
    ll p,c;
    //auxiliar
    int aux=0;
    //vector para guardar pares
    pair<ll,ll> a[n];

    for (int i=0; i<n; i++){
        
        cin >> p >> c;
        
        a[i] = make_pair(p,c);

    }

    sort(a, a+n);

    for (int i=1; i<n; i++){
        if (a[i].second < a[i-1].second){
            aux = 1;
        }
    }
    
    if (aux == 1){
        cout << "Happy Alex" << "\n";
    }
    else{
        cout << "Poor Alex\n"; 
    }

    return 0;
}
