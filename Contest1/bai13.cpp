#include <bits/stdc++.h>

using namespace std;

char convert(char c){
	return ( c == '0' ) ? 'A' : 'B';
}

void next_binary(char arr[], int n){
	for(int i = n-1; i >= 0; i--){
		if(arr[i] == '1') 
			arr[i] = '0';
		else {
			arr[i] = '1';
			break;
		}
	}
}

bool check(char arr[], int n, int k){
	int appearance = 0;
	int count = 0;
	
	for(int i = n-1; i >= 0; i--){
		if(arr[i] == '0'){
			count++;
		}
		else{
			if(count == k){
				appearance++;
				count = 0;
			}
			else if(count > k)
				return false;
			else 
				count = 0;	
		}
	}
	
	if(count == k)
		appearance++;
	if(appearance == 1){
		return true;
	} 
	else return false;
}

int main(){
		int n , k;
		cin >> n >> k;
		char arr[n];
		vector<char> res;
		for(int i = 0; i < n; i++){
			arr[i] = '0';
		}
		
		for(int i = 0; i < pow(2, n); i++){
			if(check(arr, n, k)){
				for(int i = 0; i < n; i++)
					res.push_back(arr[i]);
			}
			next_binary(arr, n);
		} 
		
		int total = res.size() / n;
		cout << total << endl;
		for(int i = 0; i < total; i++){
			for(int i = 0; i < n; i++){
				cout << convert(res.front());
				res.erase(res.begin());
			}
			cout << endl;
		}
	
	
	return 0;
}
