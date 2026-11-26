#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	vector<int> freq(256, 0);
	int n = s.size();
	int left = 0, maxi = 0;
	for(int right = 0; right<n; right++){
		freq[s[right]]++;
		while(freq[s[right]] > 1){
			freq[s[left]]--;
			left++;
		}
		maxi = max(maxi, right - left +1);
	}
	cout << maxi << endl;
}
