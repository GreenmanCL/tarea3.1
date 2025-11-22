#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    int ans = 0, t;
    for( int i = 0; i < n; i++ ) {
        cin >> t;
        ans = (t == 8) ? 1 : ans;
    }
    cout << ans;

    return 0;
}
