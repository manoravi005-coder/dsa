#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) cin >> a[i];
	int xr = 0;
	for(int i = 0; i<n; i++){
		xr ^= a[i];
	}
	for(int i= 1; i<=n; i++){
		xr ^= i;
	}
	int first = 0, second = 0;
	int rightmost = xr & -xr;
	for(int i = 0; i<n; i++){
		if(rightmost & a[i]) first ^= a[i];
		else second ^= a[i];
	}
	int miss, dup ;
	for(int i = 1; i<=n; i++){
		if(i & rightmost)  first ^= i;
		else second ^= i;
	}
	bool found = false;
	for(int i = 0; i<n; i++){
		if(a[i] == first){
			found = true; break;
		}
	}
	
	if(found){
		dup = first; miss = second;
	}
	else{
		dup = second;
		miss = first;
	}
	cout << "The missing jersey number is " << miss << " and the duplicate number is " << dup << endl;
}
