#include <bits/stdc++.h>
using namespace std;

long long helper(int n) {
  queue <string> q;
  q.push("9");
  while(!q.empty()) {
    string front  = q.front();
    q.pop();

    long long temp = 0;
    for(int i = 0; i < front.size(); i++) {
      temp = temp*10 + (int)(front[i] - '0');
    }

    if(temp % n == 0) {
      return temp;
    } else {
      q.push(front + "0");
      q.push(front + "9");
    }
  }
}

int main() {
  int times; cin >> times;

  while(times--) {
    int n; cin >> n;
    cout <<  helper(n) << endl;
  }
}
