#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

map<char, int> cpos;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto n = static_cast<int>(s.length());
	for (auto i = 0; i < n; ++i) {
		cpos[s[i]] = i + 1;
	}

	string pw;
	cin >> pw;

	auto ans = 0;
	for (auto i = 0; i < pw.length(); ++i) {
		ans *= n;
		ans += cpos[pw[i]];
		ans %= 900528;
	}

	cout << ans;

	return 0;
}