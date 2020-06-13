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
    //tinh ket qua
    long long sum = 0, mod = 1e9+7;
    for(int i = 0; i< SPT; i++) {
      sum+= a[i]*i;
    }
    //in ra ket qua
    cout << sum%mod << endl;
  }
}
