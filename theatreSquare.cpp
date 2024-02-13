#include <bits/stdc++.h>
using namespace std; 

int main(){
    long long n,m,a,res;

    cin >> n >> m >> a;
    
    if (n%a != 0 && m%a != 0){
        res = (n/a + 1) * (m/a + 1);
    }
    else if (n%a == 0 && m%a == 0){
        res = (n/a) * (m/a); 
    }
    else{
        if (n%a == 0){
            res = (n/a) * (m/a + 1);
        }
        else {
            res = (m/a) * (n/a + 1);
        }
    }

    cout << res << "\n";

    return 0;
}