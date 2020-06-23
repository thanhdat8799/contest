#include <bits/stdc++.h>
using namespace std;

int toDecimal(string bi){
  int res = 0;
  for(int i = bi.size() - 1 ; i >= 0; i--) {
    res += (bi[i] - '0')*pow(2, bi.size() - i -1);
  }
  return res;
}

string findBdnMax(string n) {
  for(int i = 0; i < n.size(); i++) {
    if(n[i] != '0' && n[i] != '1') {
      for(int j = i; j < n.size(); j++) {
        n[j] = '1';
      }
      return n;
    }
  }
  return n;
}

int main() {
  int times; cin >> times;

  while(times--) {
    string n; cin >> n;
    cout <<  toDecimal(findBdnMax(n)) << endl;
  }
}
