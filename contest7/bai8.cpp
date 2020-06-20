#include <bits/stdc++.h>
using namespace std;

int main() {
  int times; cin >> times;
  cin.ignore();

  while(times--) {
    stack<char> st;
    string str;
    getline(cin, str);
    int res= 0;
    for(int i = 0; i < str.size(); i++) {
      if(str[i] == '(') st.push(i);
      else if(str[i] == ')') {
        if(st.size()) {
          if(str[st.top()-1] == '-') {
            for(int j = st.top()+1; j < i; j++) {
              if(str[j] == '+') str[j] = '-';
              if(str[j] == '-') str[j] = '+';
            }
            st.pop();
          } else {
            st.pop();
            continue;
          }
        }
      }
    }

    for(int i = 0; i < str.size(); i++) {
      if(str[i] != '(' && str[i] != ')') {
        cout << str[i];
      }
    }
    cout << endl;
  }
}
