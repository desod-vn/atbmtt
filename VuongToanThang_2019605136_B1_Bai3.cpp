#include <bits/stdc++.h>

using namespace std;

bool checkSoNguyenTo(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	int i = 1;
	int index = 0;
	cout << "nhap so nguyen n: ";
	cin >> n;
	long arr[n];
	while(true) {
		if(checkSoNguyenTo(i)) {
			arr[index] = i;
			index++;
			
		}
		i++;
		if(index == n) {
			break;
		}
	}
	
	for(int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
}
