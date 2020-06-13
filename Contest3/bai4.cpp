#include <bits/stdc++.h>
using namespace std;

int main() {
  int times;
  cin >> times;

  while(times--) {
    //nhap so phan tu cua mang;
    int SPT; cin >> SPT;
    //nhap cac phan tu cua mang
    int a[SPT];
    for(int i = 0; i< SPT; i++) {
      cin >> a[i];
    }
    //sap xep mang tang dan
    sort(a, a + SPT);
    //chon x la cac so o vi tri chan
    long long x = 0;
    for(int i = 0; i < SPT; i+=2) {
      x= x*10+a[i];
    }

    //chon y la cac so o vi tri le
    long long y = 0;
    for(int i = 1; i < SPT; i+=2) {
      y= y*10+a[i];
    }

    //in ra ket qua la tong x, y
    cout << x+y;
  }
}
