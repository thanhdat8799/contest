#include <bits/stdc++.h>

using namespace std;

bool stop = false; //bien stop de kiem tra xem da ra cau hinh cuoi cung chua

//tim cau hinh tiep theo
void gen(int arr[], int n, int k){
	int i = k;
	while(arr[i] == n - k + i){
		i--;
	}
	if(i>0){
		arr[i]++;
		for(int j = i + 1; j <= k; j++){
			arr[j] = arr[j-1] + 1;
		}
	}
	else stop = true;
}

//in ra cau hinh hien tai
void out(int arr[], int k){ 
	for(int i = 1; i <= k; i++){
		cout << arr[i];
	}
	cout << " ";
}

//tao cau hinh dau tien
void init(int arr[], int k){
	for(int i = 1; i <= k; i++){
		arr[i] = i ;
	}
}

int main(){
	int times;
	cin >>times;
	while(times--){
		int n, k;
		cin >> n >> k;
		int arr[k+1];
		init(arr, k);
		while(!stop){
		out(arr, k);
		gen(arr, n, k);
		}
		cout << endl;
		stop = false;
	}
		
	return 0;
}
