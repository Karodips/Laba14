#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, min;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	min = arr[1];
	for (i = 3; i < n; i+=2) {
		if (min > arr[i]) min = arr[i];
	}
	cout << min;
	cout << endl;
	system("pause");
	return 0;
}
