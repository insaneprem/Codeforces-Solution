#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve() {
	string str;
	cin>>str;
 
	int n=str.size();
	string ans = "";
	bool something=0;
	for(int i=0; i<n;) {
		if(str.substr(i,3) == "WUB") {
			i+=3;
			if(something) {
				ans+=" ";
				something =false;
			}
		}
		else {
			ans+=str[i];
			something = true;
			i++;
		}
	}
 
	cout<<ans;
}
signed main() {
	// Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	int t=1;
	// cin>>t;
	while(t--) {
		solve();
		cout<<"
";
	}
}