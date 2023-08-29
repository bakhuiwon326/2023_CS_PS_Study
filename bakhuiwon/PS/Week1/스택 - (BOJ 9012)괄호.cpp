#include<iostream>
#include<string>
#include<stack>

using namespace std;

int t;
string input;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> t;

	while (t--) {

		string answer = "YES";

		cin >> input;

		stack<char> stk_left; // ���� ��ȣ�� ���ÿ� �ְ�, ������ ��ȣ ���������� �ϳ��� pop�ϱ�. �� �����µ� ���ÿ� ���� ��ȣ ���������� Ʋ����

		for (int i = 0; i < input.size(); i++) {
			// ó�� ��ȣ�� ������ ��ȣ�� �ȵ�
			if (i == 0 && input[0] == ')') {
				answer = "NO";
				break;
			}
			if (input[i] == '(') stk_left.push('('); // ���� ��ȣ ���ÿ� �ֱ�
			else if (input[i] == ')' && !stk_left.empty()) stk_left.pop(); // ������ ��ȣ ������ pop
			else {
				answer = "NO";
				break;
			}
		}
		if (!stk_left.empty()) answer = "NO";
		cout << answer << endl;
	}


	return 0;
}