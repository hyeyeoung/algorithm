#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    stack<int> st;
    int expected = 1;  // 기대되는 다음 숫자
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (num == expected) {
            expected++;
            while (!st.empty() && st.top() == expected) {
                st.pop();
                expected++;
            }
        } else {
            st.push(num);
        }
    }
    
    if (st.empty()) {
        cout << "Nice";
    } else {
        cout << "Sad";
    }
    
    return 0;
}
