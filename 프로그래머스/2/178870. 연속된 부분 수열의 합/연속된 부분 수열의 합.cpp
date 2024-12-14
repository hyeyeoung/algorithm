#include <bits/stdc++.h>
using namespace std;
// 1 3 6 10 15
vector<int> solution(vector<int> sequence, int k) {
    for(int i = 1; i<sequence.size();i++)
        sequence[i] = (sequence[i] + sequence[i-1]);
    sequence.insert(sequence.begin(),0);
    
    vector<int> answer(2);
    int i = 1, j = 1;
    int short_len = 1000001;
    
    // for (auto x:sequence) cout << x << " ";
    while(i <= j){
        if(1 <= i && i < sequence.size() &&1 <= j && j < sequence.size()){
        if((sequence[j] - sequence[i-1]) == k){
            if((j - i) < short_len){
                short_len = (j - i);
                answer[0] = i, answer[1] = j; // 인덱스 새로 저장
            }
            j++;
        }
        else if((sequence[j] - sequence[i-1]) > k){
            i++;
        }
        else if((sequence[j] - sequence[i-1]) < k){
            j++;
        }            
        }
        else break;
    }
    answer[0]--;
    answer[1]--;
    return answer;
}