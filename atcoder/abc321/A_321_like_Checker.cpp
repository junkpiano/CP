#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

// #define TESTCASE_INPUT

void solve() {
	int n;
	cin >> n;

	int b = -1;
	int a = 0;
	while(n) {
		a = n % 10;
		if(a > b) {
			b = a;
		} else {
			println("No");
			return;
		}
		n /= 10;
	}

	println("Yes");
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