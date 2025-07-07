#include <iostream>
#include <deque>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    
    // 2초 걸리고 브루트포스라면?
    int min = 500;
    
    int front = 0, back = a.size() - 1;

    while(back < b.size()){
        int tmp = 0;
        for(int i = front; i <= back; i++){
            if(a[i - front] != b[i])
                tmp++;
        }
        // cout << tmp << endl;
        min = min > tmp ? tmp : min;
        front++;
        back++;
    }
    cout << min;
}

// aababbc
// aadaabc