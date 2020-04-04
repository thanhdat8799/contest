#include <bits/stdc++.h>

using namespace std;

void thkt(int arr[], int n, int k){
	int i = k;
	while(arr[i] == n - k + i){
		i--;
	}
	if(i>0){
	arr[i]++;
	for(int j=i+1; j <= k; j++){
		arr[j] = arr[j-1] + 1;
	}
	for(int i = 1; i <= k; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	else{
		for(int m = 1; m <= k; m++){
			cout << m << " ";
		}
		cout << endl;
	}
} 

int main(){
	int times;
	cin >> times;
	
	while(times--){
		int n, k;
		cin >> n >> k;
		int arr[k+1];
		for(int i = 1; i <= k; i++){
			cin >> arr[i];
		}
		
		thkt(arr, n, k);
	}
	
	return 0;
}
