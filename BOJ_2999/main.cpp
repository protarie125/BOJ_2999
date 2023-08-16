#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

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

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	const auto n = static_cast<int>(s.length());

	auto r = int{ 1 };
	for (auto d = 1; d < n; ++d) {
		if (0 != n % d) {
			continue;
		}

		auto c = n / d;
		if (c < d) {
			break;
		}

		if (r < d) {
			r = d;
		}
	}
	auto c = n / r;

	for (auto i = 0; i < r; ++i) {
		for (auto j = 0; j < c; ++j) {
			cout << s[(j * r) + i];
		}
	}

	return 0;
}