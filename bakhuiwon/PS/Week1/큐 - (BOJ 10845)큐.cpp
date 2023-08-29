#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, x;
	queue<int> Q;
	string op;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> op;
		if (op == "push") {
			cin >> x;
			Q.push(x);
		}
		else if (op == "pop") {
			if (Q.empty()) cout << -1 << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (op == "size") {
			cout << Q.size() << '\n';
		}
		else if (op == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (op == "front") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}
		else if (op == "back") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}
	}

	return 0;
}