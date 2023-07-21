#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for (int i =1 ;i< numLog.size(); i++){
        if(numLog[i] - numLog[i-1] == 1) answer += "w";
        if(numLog[i] - numLog[i-1] == -1) answer += "s";
        if(numLog[i] - numLog[i-1] == 10) answer += "d";
        if(numLog[i] - numLog[i-1] == -10) answer += "a";
    }
    return answer;
}