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

int dp[10005][10005];
int maxAmountOfGold(vector<int>wt, int W, int n) {
	
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= W; j++)
		{
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (wt[i - 1] <= j)
				dp[i][j] = max(wt[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	return dp[n][W];
}



int main() {
	int W, n, w;
	vector<int>v;
	cin >> W >> n;
	for (int i = 0; i < n; i++) {
		cin >> w;
		v.push_back(w);
	}
	cout << maxAmountOfGold(v, W, n);
	return 0;
}

