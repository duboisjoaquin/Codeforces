#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std; 

// C => cantidad        V => valor      T => tipo

int main(){FIN;
    int Cpiedras, Cpreguntas, Tpregunta, i,j;

    cin >> Cpiedras;

    long long  Vpiedras[Cpiedras+1], Vpiedrassorted[Cpiedras+1], aux;

    Vpiedras[0] = 0; 
    Vpiedrassorted[0] = 0;

    for (int i=1; i<=Cpiedras; i++){

        cin >> aux;
        //arreglo que se va a ordenar luego 
        Vpiedrassorted[i] = aux;
        //arreglo de sumas parciales
        Vpiedras[i] = Vpiedras[i-1] + aux;

    }

    /*ordenacion de arreglo*/
    sort(Vpiedrassorted, Vpiedrassorted + Cpiedras +1);
    
    //sumas parciales del arreglo ordenado
    for (int i=1; i<=Cpiedras; i++){
        
        Vpiedrassorted[i] = Vpiedrassorted[i] + Vpiedrassorted[i-1]; 
    }

    cin >> Cpreguntas;

    while (Cpreguntas--){
        
        cin >> Tpregunta >> i >> j;
 
        if (Tpregunta == 1){
            long long res = Vpiedras[j] - Vpiedras[i-1];
            cout << res << "\n";
        }
        else{
            long long res = Vpiedrassorted[j] - Vpiedrassorted[i-1];
            cout << res << "\n";
        }
    }
    return 0;
}
