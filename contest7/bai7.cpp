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
      if(str[i] == '(') {
        st.push(str[i]);
      } else {
        if(st.size() == 0) {
          st.push(str[i]);
        }
        else if(st.top() == '(') {
          st.pop();
        } else {
          st.push(str[i]);
        }
      }
    }
    int dongNgoac = 0, moNgoac = 0;
    while(st.size()) {
      if(st.top() == '(') moNgoac++;
      else dongNgoac++;
      st.pop();
    }
    res = dongNgoac/2 + moNgoac/2 + dongNgoac%2 + moNgoac%2;
    cout << res << endl;
  }
}
