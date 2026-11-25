#include <bits/stdc++.h>
using namespace std;
void solve(int n, int idx, string& ans, vector<string>& res, string& s){
	if(idx >= n){
		res.push_back(ans);
		return;
	}
	solve(n,idx+1, ans, res,s);
	ans.push_back(s[idx]);
	solve(n,idx+1, ans, res, s);
	ans.pop_back();
}
int main(){
	string s;
	cin >> s;
	int n = s.size();
	vector<string> res;
	string ans = "";
	solve(n, 0, ans, res, s);
	sort(res.begin(), res.end());
	for(auto x: res)
	cout << x << endl;
	return 0;
}
