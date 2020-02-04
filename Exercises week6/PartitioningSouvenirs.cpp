#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string.h>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <numeric>
#include <complex>
#include <utility>

using namespace std;
typedef pair<int, int> pii;


bool auxiliar(int arr2[], int n, int x, int y, int z) {
	if (x == 0 && y == 0 && z == 0)
		return true;

	if (n < 0)
		return false;

	bool x1 = false, y1 = false, z1 = false;
	if (x - arr2[n] >= 0)
		x1 = auxiliar(arr2, n - 1, x - arr2[n], y, z);

	if (!x1 && (y - arr2[n] >= 0))
		y1 = auxiliar(arr2, n - 1, x, y - arr2[n], z);

	if ((!x1 && !y1) && (z - arr2[n] >= 0))
		z1 = auxiliar(arr2, n - 1, x, y, z - arr2[n]);

	return x1 || y1 || z1;
}

bool divide(int arr3[], int n) {
	if (n < 3)
		return false;

	int sum = accumulate(arr3, arr3 + n, 0);

	return !(sum % 3) && auxiliar(arr3, n - 1, sum / 3, sum / 3, sum / 3);
}

int main() {
	int n, x;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> x;
		arr[i] = x;
	}

	if (divide(arr, n))
		cout << 1;
	else
		cout << 0;

	return 0;
}

