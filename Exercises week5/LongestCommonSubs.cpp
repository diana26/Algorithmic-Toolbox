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
typedef pair<int, int> pii;


int dp[10000][10000];
//LCS with bottom up
int LCS(vector<int>s1, vector<int>s2) {
	
	//vector<vector<int>>dp(x);
	for (int i = 0; i <= s1.size(); i++) {
		for (int j = 0; j <= s2.size(); j++) {
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (s1[i-1] == s2[j-1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
		}
	}

	return dp[s1.size()][s2.size()];
}

int main() {
	int n, m;
	int x, y;
	cin >> n;
	vector<int>s1, s2;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s1.push_back(x);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> y;
		s2.push_back(y);
	}
	cout << LCS(s1, s2);
	return 0;
}

