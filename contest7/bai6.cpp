#include <bits/stdc++.h>
using namespace std;

int main() {
  int times; cin >> times;
  cin.ignore();

  while(times--) {
    stack<char> st;
    st.push(-1);
    string str;
    getline(cin, str);
    bool isRedundant =  true;
    for(int i = 0; i < str.size(); i++) {
      if(str[i] == ')') {
        isRedundant = true;
        char top = st.top();
        st.pop();
        while(top != '(') {
          if(top == '+' || top == '-'|| top == '*'|| top == '/') {
            isRedundant = false;
          }

          top = st.top();
          st.pop();
        }
        if(isRedundant) {
          break;
        }
      } else {
        st.push(str[i]);
      }
    }
    string res = isRedundant ? "YES" : "NO";
    cout << res << endl;
  }
}
