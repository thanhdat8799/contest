#include <bits/stdc++.h>
using namespace std;

int main() {
  int times; cin >> times;
  while(times--) {
    string s; cin >> s;
    int k; cin >> k;
    int mark[300] = {0};

    //khai bao hang doi uu tien q
    priority_queue<long long, vector<long long> > q;

    //dung mang danh dau de dem so lan ky tu xuat hien
    for(int i = 0; i < s.size(); i++) {
      mark[s[i]]++;
    }

    //them so lan cac ky tu xuat hien vao hang doi
    //so lan xuat hien lon nhat se duoc xep len dau
    for(int i = 0; i< 300; i++) {
      if(mark[i] > 0) {
        q.push(mark[i]);
      }
    }

    //xoa so ky tu theo k
    while(k > 0 && !q.empty()) {
      int top = q.top();
      q.pop();
      k--;
      top--;
      q.push(top);
    }

    //tinh toan va in ra ket qua
    long long res = 0;
    while(!q.empty()) {
      int top = q.top();
      q.pop();
      res += top*top;
    }
    cout << res << endl;

  }
} 
