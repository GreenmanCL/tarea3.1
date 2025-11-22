#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n; // declaramos n
    cin >> n;// leemos n
    int ans = 0, t; // declaramos la variable t y la bandera
    for( int i = 0; i < n; i++ ) { // hacemos el for
        cin >> t; // leemos t
        ans = (t == 8) ? 1 : ans; // comprobamos
    }
    cout << ans; // imprimimos la respuesta

    return 0;
}
