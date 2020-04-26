#include <bits/stdc++.h>

using namespace std;

string a, b;

int min(string a, string b){
	int minNum;
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '6'){
			a[i] = '5';
		}
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == '6'){
			b[i] = '5';
		}
	}
	int c,d;
	stringstream geek(a);
	stringstream geeks(b);
	geek >> c;
	geeks >> d;
	return c+d;
	
}

int max(string a, string b){
	for(int i = 0; i< a.size(); i++){
		if(a[i] == '5'){
			a[i] = '6';
		}
	}
	for(int i = 0; i< b.size(); i++){
		if(b[i] == '5'){
			b[i] = '6';
		}
	}
	int c,d;
	stringstream geek(a);
	stringstream geeks(b);
	geek >> c;
	geeks >> d;
	return c+d;
	
}

int main(){
	cin >> a >> b;
	cout << min(a,b) << " " << max(a,b);
}
