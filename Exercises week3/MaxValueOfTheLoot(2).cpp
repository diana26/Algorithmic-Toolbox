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
	int value, weight;
};

bool cmp(struct item a, struct item b) {    
	double aRatio = (double)a.value / a.weight;
	double bRatio = (double)b.value / b.weight;
	return aRatio > bRatio;
}

double fractionalKnapsack(int weight, item itemList[], int n) {
	sort(itemList, itemList + n, cmp);      
	int currWeight = 0;       
	double knapsackVal = 0.0;

	for (int i = 0; i < n; i++) {       
		if (currWeight + itemList[i].weight <= weight) {    
			currWeight += itemList[i].weight;
			knapsackVal += itemList[i].value;

		}
		else {       
			int remaining = weight - currWeight;
			knapsackVal += itemList[i].value * ((double)remaining / itemList[i].weight);
			break;
		}
	}
	return knapsackVal;
}

int main() {
	int n, x, y;
	double W;
	cin >> n;
	cin >> W;
	item itemList[100000];
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		itemList[i].value = x;
		itemList[i].weight = y;
	}
	cout << fixed << setprecision(4) << fractionalKnapsack(W, itemList, n);
	return 0;
}