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

using namespace std;

struct item {
	int clicks;
	int prices;
};

int Renevue(int n, struct item Item[]) {
	vector<int>v1, v2;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		v1.push_back(Item[i].clicks);
		v2.push_back(Item[i].prices);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	reverse(v1.begin(), v1.end());
	reverse(v2.begin(), v2.end());

	for (int i = 0; i < n; i++) {
		ans += v1[i] * v2[i];
	}
	return ans;
}

int main() {
	int n, x, y;
	cin >> n;
	item item[100000];
	for (int i = 0; i < n; i++) {
		cin >> x;
		item[i].clicks = x;
	}
	for (int i = 0; i < n; i++) {
		cin >> y;
		item[i].prices = y;
	}
	cout << Renevue(n, item);
	return 0;
}