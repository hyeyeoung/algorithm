#include <iostream>
#include <string>
using namespace std;

// 큐의 각 요소를 나타내는 노드 구조체 정의
struct Node {
	int data; 
	struct Node* next;
};
// 큐 클래스 정의
class Que {
private:
	struct Node* front;
	struct Node* back;
	int count = 0;
public:
	Que() :front(nullptr), back(nullptr) {};
	void Push(int data) { // Push 함수
		struct Node* newNode = new Node;  // 값을 저장할 새로운 노드 생성
		newNode->data = data;
		newNode->next = NULL;
		if (!count) front = back = newNode;
		else {
			back->next = newNode;
			back = newNode;
		}
		count++;
	}
	int Pop() {
		if (!count) return -1;
		int Front = front->data;
		struct Node* tmp = front;
		front = front->next;
		delete tmp;
		count--;
		return Front;
	}
	int Size() { return count; }
	int Empty() {
		if (count) return 0;
		else return 1;
	}
	int Front() {
		if (!count) return -1;
	return front->data; 
	}
	int Back() { 
		if (!count) return -1;
		return back->data; 
	}
};


int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(NULL);
	int N;
	cin >> N;
	Que Q;
	while (N--) {
		string str;
		cin >> str;
		if (str == "push") {
			int data;
			cin >> data;
			Q.Push(data);
		}
		if (str == "pop") cout<< Q.Pop()<<'\n';
		if (str == "size") cout << Q.Size() << '\n';
		if (str == "empty") cout << Q.Empty() << '\n';
		if (str == "front") cout << Q.Front() << '\n';
		if (str == "back") cout << Q.Back() << '\n';
	}
}