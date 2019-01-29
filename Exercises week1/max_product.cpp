﻿#include <cmath>
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

#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif

using namespace std;

//                                          //AUTHOR: Hugo Garcia

//======================================================================================================================

#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define ROF(i, a, b) for(ll i=ll(a); i>=ll(b); i--)
#define pb push_back
#define mp make_pair
#define lld I64d
#define all(a) (a).begin(), (a).end()
#define ifile(a) freopen((a), "r", stdin)
#define ofile(a) freopen((a), "w", stdout)
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI 3.1415926535897932384626433832795
#define mem(x, val) memset((x), (val), sizeof(x))
#define sz(x) (ll)(x).size()
#define endl '\n'
#define clockon int t = 1; while (t--) { clock_t z = clock();
#define clockoff debug("Elapsed Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC); }
#define oo 2000000000000000000LL
#define EPS 1e-6

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

#define MOD 1000000007
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
long long twoNumbers(vector<long long> myV) {
	long long maxi = INT_MIN;
	long long max2 = INT_MIN;
	vector<long long> ans;
		for (int i = 0; i < myV.size(); i++) {
			if (maxi < myV[i]) {
				maxi = myV[i];
			}
			
		}
		for (int i = 0; i < myV.size(); i++) {
			if (myV[i] < maxi) {
				max2 = max(max2, myV[i]);
				//max2 = min(max2, maxi);
			}
		}
		
		return maxi * max2;
}

int main() {
	
	long long n, x;
	cin >> n;
	vector<long long> ans(n);
	for (int i = 0; i < n; i++) {
		cin >> x;
		ans[i] = x;
	}
	cout << twoNumbers(ans);
	return 0;
}


//======================================================================================================================