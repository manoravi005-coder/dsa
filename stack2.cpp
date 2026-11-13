#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    stack<char> s;
    cin >> str;
    for(int i = 0; i<str.size();i++){
        char ch = str[i];
        if(!s.empty() && ch == s.top()){
            s.pop();
        }
        else{
            s.push(ch);
        }
    }
    string ans="";
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

}
