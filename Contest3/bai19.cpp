#include <bits/stdc++.h>
using namespace std;

//variables
int times, tu, mau;

//functions
void solution(int tu, int mau){
	if(tu == 1){
		cout << 1 << "/" << mau << endl;
	}
	else if(mau%tu == 0){
		cout << 1 << "/" << mau/tu << endl;
	}
	else{
		int temp = mau/tu + 1;
		cout << 1 << "/" << temp << " + ";
		//quy dong
		tu = tu*temp - mau;
		mau = mau*temp;
		solution(tu, mau);
	}
}


int main(){
	cin >>times;
	while(times--){
		cin >> tu >> mau;
		solution(tu, mau);
	}
}
