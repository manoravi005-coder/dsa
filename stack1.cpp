#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i<s.length() ; i++){
        char ch = s[i];
        if(ch == '(' || ch== '[' || ch== '{' ){
            st.push(ch);  
        }
        
        else{
            if(st.empty()){cout << "false" << endl; return 0;}
            char top = st.top();
            if(ch== ')'&& top != '('|| ch==']' && top != '[' || ch=='}' && top != '{') {
                cout << "false" << endl; return 0;
            }
            st.pop();
        }
    }
    if(st.empty()) cout << "true" << endl;
    else cout << "false" << endl;
}
