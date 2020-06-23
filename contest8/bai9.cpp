#include <bits/stdc++.h>
using namespace std;

int helper(int s, int t) {
  queue <int> q;
  if (s == t ) return 0;
  q.push(s-1);
  q.push(s*2);
  int dem = 1;
  int loop = 2;
  while(true) {
    for(int i = 1; i <= loop; i++) {
      int front = q.front(); q.pop();
      if(front == t) return dem;
      else {
        q.push(front-1);
        q.push(front*2);
      }
    }
    dem++;
    loop *= 2;
  }
}

int main() {
  int times; cin >> times;

  while(times--) {
    int s,t; cin >> s >> t;
    cout <<  helper(s, t) << endl;
  }
}
