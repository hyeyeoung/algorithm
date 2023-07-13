#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string tmp1 = to_string(a) + to_string(b);
    string tmp2 = to_string(b) + to_string(a);
    answer = (stoi(tmp1) > stoi(tmp2)) ? stoi(tmp1) : stoi(tmp2);
    return answer;
}