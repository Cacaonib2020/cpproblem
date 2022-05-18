#include<iostream>
using namespace std;
long long n, ans = 0;

int main() {
	cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		ans += i;
	}
	cout << ans;
}
