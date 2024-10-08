#include <iostream>
#include <stack>
using namespace std;
struct Node{
    int num;
    Node * left = NULL;
    Node * right = NULL;
    Node(int n): num(n), left(nullptr), right(nullptr) {}
};
class BST{
    public:
    Node *root = NULL;
    BST(Node *r = nullptr){ 
        root = r;
    } // creator
    void plusNode(int s){
        Node *node = root;
        while(true){
            if(node -> num > s){
                if(node -> left) node = node -> left;
                else{
                    node -> left = new Node(s);
                    break;
                }
            }
            else{
                if(node -> right) node = node -> right;
                else{
                    node -> right = new Node(s);
                    break;
                }
            }
        }
    }// 노드 추가 함수!
    void postorder(){
        stack <Node *> s;
        stack <Node *> res;
        s.push(root);
        while(!s.empty()){
            Node *n = s.top();
            s.pop();
            if(n){
                res.push(n);
                if(n->left) s.push(n -> left);
                if(n->right) s.push(n -> right);
            }
        }
        while(!res.empty()){
            cout << res.top() -> num << '\n';
            res.pop();
        }
    }
};

int main(){
    // 전위 순회로 주어짐!
    int r;
    cin >> r;
    Node *root = new Node(r); // root라는 포인터에 새로운 노드 생성 기입
    BST tree; // BST 생성
    tree.root = root;
    int tmp;

    while(cin >> tmp){
        if(tmp == EOF) break;
        tree.plusNode(tmp);
    }
    tree.postorder();
}