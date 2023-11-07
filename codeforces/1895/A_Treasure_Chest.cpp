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
    int x, y, k;
    cin>>x>>y>>k;

    int ans = 0;
    if(abs(x - y) <= k) {
        ans = max(x, y);
    } else {
        if(x >= y) {
            ans = x;
        } else {
            ans += y + y - x - k;
        }
    }

    println(ans);
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
    return 0;
}