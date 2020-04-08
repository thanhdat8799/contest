#include <bits/stdc++.h>

using namespace std;

void next_combination(int arr[], int n, int k){
	int i = k;
	while(arr[i] == n - k + i ){
		i--;
	}
	
	if(i>0){
		arr[i]++;
		for(int j = i+1; j <= k; j++){
			arr[j] = arr[j-1] + 1;
		}
	}
	else {
		for(int j=1; j <=k; j++){
			arr[j] = 0;
		}
	}
}

int main(){
	int times;
	cin >> times;
	while(times--){
		int n, k, count1 = 0, count2= 0;
		cin >> n >> k;
		int arr1[k+ 1], arr2[k +1];
		for(int i = 1; i <= k; i++){
			cin >> arr1[i];
			arr2[i] = arr1[i];
		}
		next_combination(arr1, n, k);
		
		for(int i = 1; i <= k; i++){
			count1 = 0;
			for(int j = 1; j <= k; j++){
			if(arr1[j] != arr2[i])
				count1++;
			}
			if(count1 == k) count2++;
		}
		cout << count2 << endl;
	}
	
	return 0;
}
