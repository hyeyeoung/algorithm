#include <iostream>
using namespace std;
class stack {
private:
	int Stack[1000001];
	int top = 0;
public:
	void push(int num);
	int pop();
	int size();
	int isEmpty();
	int Top();
};

void stack::push(int num) {
	Stack[top] = num;
	top++;
}
int stack::pop() {
	int tmp;
	if (top) tmp = Stack[--top];
	else tmp = -1;
	return tmp;
}
int stack::size() {
	return top;
}
int stack::isEmpty() {
	if (top) return 0;
	else return 1;
}
int stack::Top() {
	if (top) return Stack[top-1];
	else return -1;
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	stack stack;
	int n;
	cin >> n;

	while (n--) {
		int i1;
		cin >> i1;
		if (i1 == 1) {
			int i2;
			cin >> i2;
			stack.push(i2);
		}
		else if (i1 == 2) cout<<stack.pop()<<"\n";
		else if (i1 == 3) cout << stack.size() << "\n";
		else if (i1 == 4) cout << stack.isEmpty() << "\n";
		else if (i1 == 5) cout << stack.Top() << "\n";
	}
}