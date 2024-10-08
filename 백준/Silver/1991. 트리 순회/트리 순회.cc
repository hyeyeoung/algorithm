#include <iostream>
#include <stack>
using namespace std;
struct Node
{
    char c;
    Node *left = NULL;
    Node *right = NULL;
    Node(char s) : c(s), left(nullptr), right(nullptr) {}
};

class BinarySearchTree
{ // 이진 트리
    public:
    Node *root; // 이진 트리 멤버 변수 -> 루트 포인터

    BinarySearchTree(Node *n = nullptr){ // 생성자
        root = n;
    }

    void preorder(){
        stack <Node *> s;
        s.push(root);
        while(!s.empty()){
            Node* node = s.top();
            s.pop();
            cout << node -> c;
            if(node -> right) s.push(node -> right);
            if(node -> left) s.push(node -> left);
        }
    }
    void inorder(){
        stack <Node *> s;
        Node *node = root;

        while(!s.empty() || node){
            while(node){
                s.push(node);
                node = node -> left;
            }
            node = s.top();
            s.pop();
            cout << node -> c;
            node = node -> right;
        }
    }

    void postorder(){
        stack <Node *> s;
        stack <char> res;
        s.push(root);
        while(!s.empty()){
            Node * node = s.top();
            s.pop();
            if(node){
                res.push(node -> c);
                if(node -> left) s.push(node -> left);
                if(node -> right) s.push(node -> right);
            }
        }
        while(!res.empty()){
            cout << res.top();
            res.pop();
        }
    }
};

int n;
Node *arr[27] = {};
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) arr[i] = new Node(65+i);

    for(int i = 0; i<n; i++){
        char a, b, c;
        cin >> a >> b >> c;
        if(b != '.') arr[a-'A'] -> left = arr[b-'A'];
        if(c != '.') arr[a-'A'] -> right = arr[c-'A'];
    }
    BinarySearchTree tree;
    tree.root = arr[0];
    tree.preorder();
    cout << '\n';
    tree.inorder();
    cout << '\n';
    tree.postorder();
}