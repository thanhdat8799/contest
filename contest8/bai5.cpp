#include <bits/stdc++.h>
using namespace std;
long long binary[10001] = {0};

long long toBinary(int n) {
  vector<int> vec;
  while(n) {
    vec.push_back(n%2);
    n /= 2;
  }
  long long res = 0;
  for(int i = vec.size() -1 ; i >= 0; i-- ) {
    res = res*10 + vec[i];
  }

  return res;
}

void init() {
  binary[1] = 1;
  for(int i = 2; i <= 10000; i++ ) {
    binary[i] = toBinary(i);
  }
}

int main() {
  int times; cin >> times;
  init();
  while(times--) {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
      cout << binary[i] << " ";
    }
    cout << endl;

  }
}
