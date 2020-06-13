#include <bits/stdc++.h>
using namespace std;

int main() {
  int times;
  cin >> times;

  while(times--) {
    //nhap so phan tu cua mang;
    int SPT; cin >> SPT;

    //nhap so k
    int k; cin >> k;
    //nhap cac phan tu cua mang
    int a[SPT];
    for(int i = 0; i< SPT; i++) {
      cin >> a[i];
    }
    //sap xep mang tang dan
    sort(a, a + SPT);

    //chia mang
    int x = 0;
    for(int i = 0; i < k; i++){
      x += a[i];
    }
    int y = 0;
    for(int i = k; i < SPT; i++ ){
      y+= a[i];
    }

    //in ra ket qua
    cout << abs(x-y);
  }
}
