#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n; // 도시 개수
    vector <long long> cost(n-1);
    vector <long long> charge(n);
    for(int i = 0; i < n-1; i++)
        cin >> cost[i];
    for(int i = 0; i < n; i++)
        cin >> charge[i];

    long long cur = charge[0];
    int tmp = cost[0];
    long long min = 0;
    for(int i = 1; i<n-1; i++){
        if(cur > charge[i]){
            min += cur * tmp;
            tmp = cost[i];
            cur = charge[i];;
        }
        else{
            tmp += cost[i];
        }
    }
    cout << min + (tmp*cur);
}