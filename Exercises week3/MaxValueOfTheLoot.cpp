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

bool sortinrev(const pair<int, int> &a,
	const pair<int, int> &b)
{
	return (a.first / a.second > b.first / b.second);
}

double knapsack(int n, double W, vector<pair<double, double>> v) {
	double value = 0.0000, a, currW = 0;
	/*if (n == 1 && W >= v[0].first)
		return v[0].second;*/

	sort(v.begin(), v.end(), sortinrev);
	for (int i = 0; i < n; i++) {
		if (currW + v[i].second <= W) {
			currW = currW + v[i].second;
			value = value + v[i].first;
			//W = W - a;
		}
		else {
			a = W - currW;
			value = value + (v[i].first * (a / v[i].second));
			break;
			//v[i].first = v[i].first - a;
		}
	}

	return value;
}

int main() {
	int n, x, y;
	double W;
	cin >> n;
	cin >> W;
	vector<pair<double, double>> v;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	cout << fixed << setprecision(4) << knapsack(n, W, v);
	return 0;
}