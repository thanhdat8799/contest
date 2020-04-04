#include<iostream>
#include<math.h>

using namespace std;
 
void gen(int A[], int n) {
    ++A[n - 1];
    for (int i = n - 1; i > 0; --i) {
        if (A[i] > 1) {
            ++A[i - 1];
            A[i] -= 2;
        }
    }
}
 
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++){
    	if(A[i] == 0) 
    		cout << 'A';
    	else
    		cout <<'B';
	}
        
    cout << " ";
}
 
int main(){
	int times;
	cin >> times;
	while(times--){
	    int n;
	    cin >> n;
	    //khoi tao mang
	    int *A = new int[n];
	    //xay dung cau hinh dau tien
	    for (int i = 0; i < n; i++) A[i] = 0;
	    
	    //in cau hinh dau tien va xay dung cau hinh tiep theo
	    for (int i = 0; i < pow(2, n); i++) {
	        xuat(A, n);
	        gen(A, n);
	    }
	    cout << endl;
	}
    return 0;
}
