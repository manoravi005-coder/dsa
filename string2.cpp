#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int k; cin >> k;
	int n = s.size();int count= 0;
	for(int i = 0; i<=n-k; i++){
		int distinct = 0; 
		int freq[26] = {0};
		for(int j = i; j< i+k; j++){
			if(freq[s[j]-'a'] == 0) distinct++;
			freq[s[j]-'a']++;
			
		}
		if(distinct == k) count++;
	}
	cout << count;
}
