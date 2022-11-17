#include <bits/stdc++.h>
#define N 100
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
	long arr[N];
	int i = 1;
	int index = 0;
	while(true) {
		if(checkSoNguyenTo(i)) {
			arr[index] = i;
			index++;
		}
		i++;
		if(index == N) {
			break;
		}
	}
	
	for(int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
}
