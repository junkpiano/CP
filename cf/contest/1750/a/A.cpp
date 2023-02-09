#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

void solve() {
	int m;
	cin >> m;

	vector<int> a(m);
	for(int i = 0; i < m; i++) cin >> a[i];

	if(a[0] == 1) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int tt=1;
	cin>>tt;
	while(tt--) solve();
}