#include <bits/stdc++.h>
using namespace std;

int main() {
  int times; cin >> times;
  cin.ignore();

  while(times--) {
    stack<char> st;
    string str;
    cin >> str;
    string res = "YES";
    for(int i = 0; i < str.size(); i++) {
      if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
        st.push(str[i]);
      }
      else if(str[i] == ')') {
        if(st.size() == 0 || st.top() != '(') {
          res = "NO";
          break;
        } else st.pop();
      }
      else if(st.size() == 0 || str[i] == ']') {
        if(st.top() != '[') {
          res = "NO";
          break;
        } else st.pop();
      }
      else if(st.size() == 0 || str[i] == '}') {
        if(st.top() != '{') {
          res = "NO";
          break;
        } else st.pop();
      }
    }
    cout << res << endl;
  }
}
