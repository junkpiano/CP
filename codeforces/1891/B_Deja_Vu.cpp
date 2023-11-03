#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

#define TESTCASE_INPUT

void solve() {
    int n, q;
    cin>>n>>q;
    int val = INT_MAX;
    vector<ll> a(n);
    rep(0,i,n) cin>>a[i];
    rep(0,i,q) {   
        int x;
        cin>>x;
        if(val > x) {
            val = x;
            rep(0,j,n) {
                if(a[j] % (1 << x) == 0) a[j] |= 1 << (x - 1);
            }
        }
        
    }

    rep(0,i,n) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    voila

#ifdef TESTCASE_INPUT
    int tt=1;
    cin>>tt;
    while(tt--) solve();
#else
    solve();
#endif
}