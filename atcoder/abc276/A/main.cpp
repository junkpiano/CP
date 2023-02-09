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

int main(){
    cin.tie(0);
	ios::sync_with_stdio(false);
    
    string s;
    cin >> s;

    int ans = -1;
    int n = s.length();
    for(int i =0; i < n; i++){
        if(s[i] == 'a') {
            ans = i + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
