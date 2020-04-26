#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//var
ll times, sum, soChuSo, res;


//func
void setup(){
	cin >> sum >> soChuSo;
}

ll startNum(ll a){
	return 10 * (a - 1);
}

ll endNum(ll a){
	ll num = 9;
	for(ll i = 1; i < a; i++){
		num = num*10 + 9;
	}
	return num;
}

ll sumerize(ll a){
	ll tong = 0;
	while(a){
		tong += a%10;
		a /= 10;
	}
	return tong;
}
void solution(){
	int currentSum = 0;
	for(ll i = startNum(soChuSo); i <= endNum(soChuSo); i++ ){
		if(sum == sumerize(i)){
			res = i;
			return;
		}
	}
}

int main(){
	cin >> times;
	while(times--){
		res = -1;
		setup();
		solution();
		cout << res << endl;
	}
}
