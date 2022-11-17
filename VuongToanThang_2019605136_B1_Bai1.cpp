#include <bits/stdc++.h>

using namespace stdx;

bool checkSoNguyenTo(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int x;
	cout << "nhap vao so nguyen can kiem tra: ";
	cin >> x;
	cout << (checkSoNguyenTo(x) ? "co" : "khong") << " la so nguyen to";
	return 0;
}
