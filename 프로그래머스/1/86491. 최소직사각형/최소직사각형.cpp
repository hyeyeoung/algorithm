#include <bits/stdc++.h>

using namespace std;
// limit보다는 큰 수를 구해야함.

int solution(vector<vector<int>> sizes) {
    int answer = 1000000;
    int limit = 0;
    
    int h = 0, w = 0;
    
    for(int i = 0; i < sizes.size(); i++){
        int tmp = sizes[i][0] * sizes[i][1];
        if(tmp > limit) limit = tmp;
        
        tmp = sizes[i][0];
        if(sizes[i][0] < sizes[i][1]) {
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        // h[i] = sizes[i][0];
        // w[i] = sizes[i][1];
        
        if(sizes[i][0] > h) h = sizes[i][0];
        if(sizes[i][1] > w) w = sizes[i][1];
    }
    
    answer = h * w;
    return answer;
}