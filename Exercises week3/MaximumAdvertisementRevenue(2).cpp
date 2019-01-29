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

struct {
	bool operator()(int x, int y) {
		string one = to_string(x) + to_string(y);
		string two = to_string(y) + to_string(x);
		return one > two;
	}
} compareOne;

string largestElement(vector<int>v) {
	string ans = "";
	sort(begin(v), end(v), compareOne);
	for (const auto& elem : v) {
		ans += to_string(elem);
	}
	return ans;
}

int main() {
	int n, x;
	cin >> n;
	vector<int>ans;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ans.push_back(x);
	}
	cout << largestElement(ans);
	return 0;
}