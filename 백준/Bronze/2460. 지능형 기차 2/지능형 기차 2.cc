#include <iostream>

using namespace std;

int main() {
    int result = 0;
    int n = 10;
    int people = 0;
    while (n--) {
        int minus;
        int plus;
        int tmp_result = people;
        cin >> minus >> plus;

        tmp_result -= minus;
        tmp_result += plus;

        result = tmp_result > result ? tmp_result : result;
        people = tmp_result;
    }
    cout << result;
}