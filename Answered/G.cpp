#include <iostream>
using namespace std;

int main() {
	char ques[100];
	int n,m;
	cin >> n >> ques >> m;
	m %= 26;
	for (int j = 0; j < n; j++) {
		if (ques[j] <= 'Z') {//�啶������������
			ques[j] = char(int(ques[j]) + m);
			if (ques[j] > 'Z')  ques[j] = char(int(ques[j]) - 26);
		}else {
			int z = int(ques[j])+m;//�I�[�o�[�t���[�΍�̂��߁A�ꎞ�I��int�^�ɒ����B
			if (z > 'z')	z  -= 26;
			ques[j] = char(z);
		}
		cout << ques[j];
	}
	return 0;
}