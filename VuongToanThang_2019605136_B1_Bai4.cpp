#include <bits/stdc++.h>
#include <string> 

using namespace std;

int layTruocDauPhay(float a) {
	return (int)a;
}

float laySauDauPhay(float a) {
	return a - (int)a;
}

char convertVal(int number) {
	if (number >= 0 && number <= 9) {
		return (char)(number + '0');
	}
	return (char)(number - 10 + 'A');
}

void chiaTruocDauPhay(int a, int b) {
	char arr[100];
	int index = 0;
	while (true) {
		if (a == 0) {
			break;
		}
		arr[index] = convertVal(a % b);
		a = (int)a / b;
		index++;
	}
	for (int i = index - 1; i >= 0; i--) {
		cout << arr[i];
	}
}

void nhanSauDauPhay(float a, int b) {
	char arr[100];
	int index = 0;
	float x;
	while (true) {
		if (a == 0) {
			break;
		}
		x = a * b;
		arr[index] = convertVal(layTruocDauPhay(x));
		a = laySauDauPhay(x);
		index++;
	}
	for (int i = 0; i < index; i++) {
		cout << arr[i];
	}
}

int main() {
	float a;
	int b;
	cout << "nhap so a he co so 10: ";
	cin >> a;
	cout << "nhap he co so b: ";
	cin >> b;
	
	chiaTruocDauPhay(layTruocDauPhay(a), b);
	cout << ".";
	nhanSauDauPhay(laySauDauPhay(a), b);
}
