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

		stack<char> stk_left; // 왼쪽 괄호를 스택에 넣고, 오른쪽 괄호 만날때마다 하나씩 pop하기. 다 끝났는데 스택에 왼쪽 괄호 남아있으면 틀린거

		for (int i = 0; i < input.size(); i++) {
			// 처음 괄호가 오른쪽 괄호면 안됨
			if (i == 0 && input[0] == ')') {
				answer = "NO";
				break;
			}
			if (input[i] == '(') stk_left.push('('); // 왼쪽 괄호 스택에 넣기
			else if (input[i] == ')' && !stk_left.empty()) stk_left.pop(); // 오른쪽 괄호 만나면 pop
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