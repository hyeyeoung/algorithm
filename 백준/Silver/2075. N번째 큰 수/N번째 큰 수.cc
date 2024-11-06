#include <iostream>
#include <vector>
using namespace std;

struct Q{
    vector <int> arr;

    void resize(int n){ arr.resize((n*n)+1); }
    void input(int index, int x){ arr[index] = x; }
    void swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    void heapfty(int cur, int n){
        int largest = cur;
        int left = cur * 2;
        int right = cur * 2 + 1;

        if(left <= n && this -> arr[largest] > this -> arr[left]) largest = left;
        if(right <= n && this-> arr[largest] > this -> arr[right]) largest = right;

        if(largest != cur){
            swap(this -> arr[largest], this -> arr[cur]);
            heapfty(largest, n);
        }
    } // 최대힙

    void sort(int n){
        for(int i = n; i>= 1; i--){
            heapfty(i, n);
        }
        for(int i = n; i>= 2; i--){
            swap(this -> arr[i], this -> arr[1]);
            heapfty(1, i-1);
        }
    }
    void print(int n) {
        cout << this -> arr[n];
    }
};

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n;
    cin >> n;
    Q q;
    q.resize(n);

    for(int i = 1; i<= n*n; i++){
        int tmp;
        cin >> tmp;
        q.input(i, tmp);
    }
    q.sort(n*n);
    q.print(n);
}