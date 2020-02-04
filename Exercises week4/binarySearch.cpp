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
#include <complex>
#include <utility>

using namespace std;

vector<int>IndexOfBS;

int binarySearch(vector<int>v, int x, int l, int r) {
	int aux;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (x == v[mid]) {
			aux = mid;
			return aux;
		}
		else if (x > v[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}

void fillArray(int x) {
	IndexOfBS.push_back(x);
}

void printArray() {
	for (int i = 0; i < IndexOfBS.size(); i++) {
		cout << IndexOfBS[i] << " ";
	}
}

int main() {
	int n, k, x;
	vector<int>a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> x;
		b.push_back(x);
	}
	for (int i = 0; i < k; i++) {
		int ans = binarySearch(a, b[i], 0, a.size() - 1);
		fillArray(ans);
	}
	printArray();
	return 0;
}
