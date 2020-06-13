#include <bits/stdc++.h>
using namespace std;

int main() {
  int times;
  cin >> times;
  while(times--) {
    int money, cashes = 0;
    cin >> money;
    while(money) {
      cashes++;
      //1, 2, 5, 10, 20, 50, 100, 200, 500, 1000
      if(money >= 1000) money -= 1000;
      else if(money >= 500) money -= 500;
      else if(money >= 200) money -= 200;
      else if(money >= 100) money -= 100;
      else if(money >= 50) money -= 50;
      else if(money >= 20) money -= 20;
      else if(money >= 10) money -= 10;
      else if(money >= 5) money -= 5;
      else if(money >= 2) money -= 2;
      else if(money >= 1) money -= 1;

    }
    cout << cashes << endl;
  }
}
