#include <bits/stdc++.h>
using namespace std;

int helper(int s) {
  queue <int> q;
  if (s == 1 ) return 0;
  q.push(s-1);
  for(int i = 2; i <= sqrt(s); i++) {
    if(s % i == 0) {
      q.push(s/i);
    }
  }
  int dem = 1;

  while(true) {
    queue<int> newQ;
    while(!q.empty()){
      int front = q.front(); q.pop();
      cout <<front<< " ";
      if(front == 1) return dem;
      else {
        newQ.push(front-1);
        for(int i = 2; i <= sqrt(front); i++) {
          if(front % i == 0) {
            newQ.push(front/i);
          }
        }
      }
    }
    cout << endl;
    dem++;
    swap(newQ, q);
  }
}

int main() {
  int times; cin >> times;

  while(times--) {
    int s; cin >> s ;
    cout <<  helper(s) << endl;
  }
}
