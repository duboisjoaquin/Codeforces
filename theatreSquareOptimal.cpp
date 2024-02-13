#include <bits/stdc++.h>
using namespace std; 

int main(){

    long long n,m,a,res;

    cin >> n >> m >> a;

    //utilizo division entera techo (redondea para arriba)

    res = ((n+a-1)/a) * ((m+a-1)/a);

    cout << res << "\n";

    return 0; 

}