#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0;
    int sq = 1;
    
    for(int i = 0;i<num_list.size(); i++){
        sum += num_list[i];
        sq = sq * num_list[i]; 
    }
    return (sum * sum > sq) ? 1:0;
}