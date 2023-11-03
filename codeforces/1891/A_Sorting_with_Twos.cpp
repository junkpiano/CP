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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(0,i,n) cin >> a[i];

    rep(0, i, n - 1) {
        if(i & (i + 1)) {
            if(a[i + 1] - a[i] < 0) {
                println("NO");
                return;
            }
        }
    }

    println("YES");
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