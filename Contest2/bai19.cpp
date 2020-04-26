#include <bits/stdc++.h>

using namespace std;

void helper(int arr[], int n){
	int res[n-1];
	for(int i = 0; i < n-1; i++){
		res[i] = arr[i] + arr[i+1];
	}
	cout << "[";
	for(int i = 0; i< n-1; i++){
		if(i < n-2)
			cout << res[i] << " ";
		else cout << res[i] << "]" << endl;
	}
	
	if(n>2){
		helper(res, n-1);
	}
}

int main(){
	int times;
	cin >> times;
	while(times--){
		int n;
		cin >>n;
		int arr[100];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		//print the first result
		cout << "[";
		for(int i = 0; i< n; i++){
			if(i < n-1)
				cout << arr[i] << " ";
			else cout << arr[i] << "]" << endl;
		}
		if(n>1)
		helper(arr, n);
	}
	return 0;
}
