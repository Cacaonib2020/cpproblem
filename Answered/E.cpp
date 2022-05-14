#include<iostream>
#include<vector>
using namespace std;

int n, q, iti = 0, ans = 0;

int main() {
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)	cin >> a[i];
	cin >> q;
	vector<int> b(q);
	for (int i = 0; i < q; i++)	cin >> b[i];
	
	int j = 0;
	while (iti < n && j < q) {
		ans += a[iti];
		iti += b[j++];
	}

	cout << ans;

	return 0;
}