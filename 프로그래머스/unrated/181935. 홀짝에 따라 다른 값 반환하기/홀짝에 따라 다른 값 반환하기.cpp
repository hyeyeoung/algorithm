#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 1;i<=n;i++){
        if(n % 2 == 0 && i % 2 == 0){
            answer += i * i;
        }
        else if(n % 2 != 0 && i %2 != 0){
            answer += i;
        }
    }
    return answer;
}