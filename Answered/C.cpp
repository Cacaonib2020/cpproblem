#include<iostream>

using namespace std;

int main() {
	int f[10] = { 0 };
	int ans = 0;
	char s[12];
	cin >> s;

	f[s[0] - 'a'] = 1;
	f[s[1] - 'a'] = 1;
	f[s[2] - 'a'] = 1;
	f[s[3] - 'a'] = 1;
	f[s[4] - 'a'] = 1;
	f[s[5] - 'a'] = 1;
	f[s[6] - 'a'] = 1;
	f[s[7] - 'a'] = 1;
	f[s[8] - 'a'] = 1;
	f[s[9] - 'a'] = 1;
	f[s[10] - 'a'] = 1;
	f[s[11] - 'a'] = 1;

	ans += f[0];
	ans += f[1];
	ans += f[2];
	ans += f[3];
	ans += f[4];
	ans += f[5];
	ans += f[6];
	ans += f[7];
	ans += f[8];
	ans += f[9];

	//for (int i = 0; i < 10; i++)	if (f[i])	cout << char(i + 'a') << ",";
	cout << endl << ans << endl;

	return 0;
}