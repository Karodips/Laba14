#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, k, l;
	float sum;
	sum = 0;
	cin >> n >> k >> l;
	float* arr = new float[n];
	if (k >= 1 && k <= l && l <= n) {
		for (i = 0; i < n; i++) cin >> arr[i];
		n = l - k + 1;
		k = k - 1;
		for (k ; k < l; k++) sum = sum + arr[k];

	}
	cout << sum / n << endl;
	system("pause");
	return 0;
}
