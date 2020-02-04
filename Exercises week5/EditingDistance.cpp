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
int LCS(string s1, string s2) {

	//vector<vector<int>>dp(x);
	for (int i = 0; i <= s1.length(); i++) {
		for (int j = 0; j <= s2.length(); j++) {
			if (i == 0)
				dp[i][j] = j;  

			else if (j == 0)
				dp[i][j] = i; 

			else if (s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			else
				dp[i][j] = 1 + min(dp[i][j - 1], min(
					dp[i - 1][j],
					dp[i - 1][j - 1]));
		}
	}

	return dp[s1.length()][s2.length()];
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	/*for (int i = 0; i < s1.length(); i++) {
		dp[0][i] = i;
	}
	for (int i = 0; i < s2.length(); i++) {
		dp[i][0] = i;
	}*/
	cout << LCS(s1, s2);
	return 0;
}

