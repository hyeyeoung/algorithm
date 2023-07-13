#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string tmp = to_string(a) + to_string(b);
    answer = (stoi(tmp)> (2*a*b)) ? stoi(tmp): (2*a*b);
    return answer;
}