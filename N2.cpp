#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, sum, schet, pomoch, d;
	cin >> n;
	schet = 0;
	pomoch = 0;
	int* arr = new int[n];
	if (n > 1) {
		for (i = 0; i < n; i++) cin >> arr[i];
		while (schet < (n - 1)) {
			schet = 0;
			for (i = 0; i < n - 1; i++) {
				if (arr[i] > arr[i + 1]) {
					pomoch = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = pomoch;
				}
				else schet++;
			}
		}
		d = arr[1] - arr[0];
		i = 1;
		schet = 0;
		while (i < n) {
			pomoch = arr[0] + d * i;
			if (arr[i] == arr[0] + d * i) {
				i++;
				schet++;
			}
			else i = n;
		}
		if (schet == n - 1) {
			sum = (arr[0] + arr[n - 1]) * n / 2;
			cout << d << " " << sum;
		}
		else cout << "Не является арифметической прогрессией";
	}
	else cout << "Неа";
	cout << endl;
	system("pause");
	return 0;
}
