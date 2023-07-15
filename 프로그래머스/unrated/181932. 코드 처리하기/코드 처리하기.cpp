#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    bool mode = 0;
    string answer = "";
    for(int i = 0 ;i<code.length(); i++){
        if(code[i] == '1') mode = mode ? 0:1;
        else{
            if(mode && i % 2 != 0) answer += code[i];
            else if(!mode && (i % 2 == 0) || (i == 0)) answer += code[i];
        }
    }
    return (answer.length() == 0) ? "EMPTY": answer;
}