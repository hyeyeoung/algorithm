#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i = 0; i<photo.size(); i++){
        int result = 0;
        for(int j = 0;j<photo[i].size(); j++){
            for(int k = 0;k<name.size(); k++){
                if(name[k] == photo[i][j])
                    result += yearning[k];
            }
        }
        answer.push_back(result);
    }
    return answer;
}