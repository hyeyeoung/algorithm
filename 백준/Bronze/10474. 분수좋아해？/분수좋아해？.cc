#include <iostream>
using namespace std;
int main(){
    while (1)
    {
        int a, b;
        cin >> a >> b;
        if(a == 0 && b== 0) return 0;
        // 2 3 / 12
        cout << a / b << " " << a % b << " / " << b << '\n';
    }
    
}