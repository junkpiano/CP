#include<bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

// mint
using mint = static_modint<1000000007>;
// ll int
ll INF = numeric_limits<ll>::max() / 2;

#define rep(i, n) for(ll i = 0; i < (ll)n; i++)

int main(){
    int n = 1;
    cin >> n;

    vector<int> a(n);

    rep(i, n) {
        cin >> a[i];
    }

    ll ans = 0;

    ll g = a[0];
    rep(i, n){
        g = gcd(g, a[i]);
    }

    bool cancel = false;
    rep(i, n) {
        a[i] /= g;

        while(a[i] > 1) {
            if(a[i] % 3 == 0) {
                a[i] /= 3;
            } else if (a[i] % 2 == 0) {
                a[i] /= 2;
            } else {
                cancel = true;
                break;
            }
            ans++;
        }

        if(cancel) break;
    }

    cout << (cancel ? -1: ans) << endl;
    return 0;
}
