#include"Stack.h"
#include "Stack.cpp"

int main() {
	int n;
	cout << "Enter the num of task: ";
	cin >> n;
	switch (n) {

	case 1: {
		Stack <int> s;
		s.push(3);
		s.push(5);

		cout << s.top() << endl;
		s.pop();
		cout << s.top() << endl;
		s.pop();
		cout << s.empty() << endl;
	}break;

	case 2: {
		Stack <int> s;
		s.push(3);
		s.push(5);
		while (!s.empty()) {
			cout << s.top() << endl;
			s.pop();
		}
	}break;
	}
	system("pause");
	return 0;
}