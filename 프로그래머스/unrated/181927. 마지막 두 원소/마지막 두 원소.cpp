#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    if(num_list[num_list.size()-1] > num_list[num_list.size()-2])
        num_list.push_back(num_list[num_list.size()-1] - num_list[num_list.size()-2]);
    else
        num_list.push_back(num_list[num_list.size()-1]*2);
    return num_list;
}