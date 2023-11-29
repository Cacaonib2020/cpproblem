#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 31; i++){
		if (i % 3 == 0)
		{
			cout << "Guttari";
		}
		if (i % 5 == 0)
		{
			cout << "Gessori";
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			cout << i;
		}
		cout << endl;
	}
}
