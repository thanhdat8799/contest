#include <bits/stdc++.h>
using namespace std;

int main() {
  int times; cin >> times;
  cin.ignore();

  while(times--) {
    stack<int> st;
    string str, compare;
    getline(cin, str);
    getline(cin, compare);
    for(int i = 0; i < str.size(); i++) {
      if(str[i] == '(') st.push(i);
      else if(str[i] == ')') {
        if(st.size()) {
          if(str[st.top()-1] == '-') {
            for(int j = st.top()+1; j < i; j++) {
              if(str[j] == '+') str[j] = '-';
              else if(str[j] == '-') str[j] = '+';
            }
            st.pop();
          } else {
            st.pop();
            continue;
          }
        }
      }
    }

    string after;
    for(int i = 0; i < str.size(); i++) {
      if(str[i] != '(' && str[i] != ')') {
        after += str[i];
      }
    }
    string res = (after == compare) ? "YES" : "NO";
    cout << res <<endl;
  }
}
