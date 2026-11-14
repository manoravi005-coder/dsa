#include <bits/stdc++.h>
using namespace std;

int main() 
{        
    stack <string> st;
    string str;
    while(cin >> str)  st.push(str);
    while(!st.empty()){
        cout << st.top()<<" ";
        st.pop();
    }
    return 0;
}
