#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int arr[1200] = {};
vector <int> res[11];
int k;
void s9934(int num, int left, int right){
    if(num == k+1) return;
    int mid = (left + right) / 2;
    res[num].push_back(arr[mid]);
    s9934(num+1, left, mid-1);
    s9934(num+1, mid + 1, right);
}
int main(){
    cin >> k;
    int term = pow(2, k) - 1;
    for(int i = 0; i < term; i++) cin >> arr[i];
    s9934(1, 0, term);
    for(int i = 1; i<=k; i++){
        for(int j = 0; j<res[i].size(); j++) cout << res[i][j] << ' ';
        cout << '\n';
    }
}