#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int tt=1;
	cin>>tt;
	while(tt--) {
		int m, cur = 1;
		ll ans = 0;
		int a[2000100];

		cin >> m;
		for(int i = 0; i < m; i++) cin >> a[i];

		sort(a, a+m);

		for(int j = 0; j < m; j++) {
			cur = min(cur, a[j]);
			ans += a[j] - cur;
			cur++;
		}

		cout << ans << endl;
	}
}