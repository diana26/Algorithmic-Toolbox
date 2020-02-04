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

map<int, int>Majority;

int MajorityElem(vector<int>v) {
	int x = (v.size() / 2) + 1;
	for (int i = 0; i < v.size(); i++) {
		Majority[v[i]]++;
	}
	for (auto it : Majority) {
		if (it.second >= x)
			return 1;
	}
	return 0;
}

int main() {
	int n, x;
	cin >> n;
	vector<int>aux;
	for (int i = 0; i < n; i++) {
		cin >> x;
		aux.push_back(x);
	}
	cout << MajorityElem(aux);
	return 0;
}
