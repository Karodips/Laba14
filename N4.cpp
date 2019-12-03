#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, max;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	if (arr[0] > arr[1]) max = arr[0];
	for (i = 1; i < n - 1; i++) {
		if (arr[i] > arr[i + 1] && arr[i] > arr[i-1]) max = arr[i];
	}
	if (max < arr[n - 1]) max = arr[n - 1];
	cout << max;
	cout << endl;
	system("pause");
	return 0;
}
