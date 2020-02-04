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

int Coins(vector<int>v, int money) {
	vector<int>aux(money+1);

	aux[0] = 0;

	for (int i = 1; i <= money; i++)
		aux[i] = INT_MAX;

	for (int i = 1; i <= money; i++)
	{
		for (int j = 0; j < v.size(); j++)
			if (v[j] <= i)
			{
				int x = aux[i - v[j]];
				if (x != INT_MAX && x + 1 < aux[i])
					aux[i] = x + 1;
			}
	}
	return aux[money];
}

int main() {
	int money;
	cin >> money;
	vector<int>v = { 1, 3, 4 };
	cout << Coins(v, money);
	return 0;
}

