#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    int a[100];
    for(int i =0; i<n; i++) cin >> a[i];
    int  pos; cin >> pos;
    for(int i = pos - 1; i<n-1; i++){
        a[i] = a[i+1];
    }
    n--;
    for(int i = 0; i<n; i++) cout << a[i] << " ";
}
