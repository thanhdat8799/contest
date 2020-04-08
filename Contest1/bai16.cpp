#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n][n], b[n];
	vector<int> res;
	for(int i = 0;  i < n; i++){
		b[i]= i;
	}	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j ++){
			cin >> arr[i][j];
		}
	}
	
	do {
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += arr[i][b[i]];
		}
		if (sum == k){
			for(int i = 0; i < n; i++){
				res.push_back(b[i]);	
			}
		}
	} while(next_permutation(b, b+n));
	cout << res.size()/n << endl;
	for(int i = 0; i < res.size() ; i++){
		cout << res[i] + 1 << " ";
		if(i%n == (n-1))
			cout << endl;
	}
	
	return 0;
}
