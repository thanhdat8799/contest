#include <bits/stdc++.h>
using namespace std;

int main() {
  int times; cin >> times;
  cin.ignore();

  while(times--) {
    stack<char> s;
    string str;
    getline(cin, str);
    for(int i = 0; i < str.size(); i++) {
      while(str[i] != ' ' && i < str.size()) {
        s.push(str[i]);
        i++;
      }
      while(s.size()) {
        cout << s.top();
        s.pop();
      }
      if(str[i] == ' ') cout << str[i];
    }
    cout << endl;
  }
}
