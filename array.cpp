#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    int a[100];
    for(int i =0; i<n; i++) cin >> a[i];
    int val, pos; cin >> val >> pos;
    for(int i= n; i>=pos; i--){
        a[i] = a[i-1];
    }
    a[pos - 1] = val;
    n++;
    for(int i = 0; i<n; i++) cout << a[i] << " ";
}
