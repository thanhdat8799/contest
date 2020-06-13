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

    // clone mang
    int b[SPT];
    for(int i = 0; i< SPT; i++) {
      b[i] = a[i];
    }

    //sap xep mang tang dan
    sort(a, a + SPT);

    //so sanh tung phan tu b[] vs a[]
    // neu khac nhau thi so o vi tri doi xung phai giong nhau

    for(int i = 0; i< SPT; i++) {
      cout  << a[i] << " ";
    }

    string res = "Yes";

    for(int i = 0; i < SPT; i ++) {
      if( a[i] != b[i] && a[i] != b[SPT-i-1]) {
        res = "No";
      }
    }


    cout << res;
  }
}
