#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[10001]{};
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }

    for (int i = 0; i < 10001; i++) {
        while (arr[i]--) {
            cout << i << '\n';
        }
    }

}