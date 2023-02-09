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

void solve() {
    int m;
    cin >> m;

    vector<int> a(m);
    rep(i, m) {
        cin >> a[i];
    }

    int j = m - 2;
    while(a[j] < a[j + 1])
        j--;
    
    int k = m - 1;
    while(a[j] < a[k])
        k--;
    
    swap(a[j], a[k]);
    reverse(a.begin() + j + 1, a.end());

    rep(i, m) {
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl; 

}

int main(){
    solve();
}
