#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
char arr[26][26] = {};
bool check[26][26] = {};
vector <int> result;
int n, Count = 0; 
void go(int x, int y){
    Count++;
    check[x][y] = true;
    if(x-1 >= 0 && !check[x-1][y] && arr[x-1][y] == '1') go(x-1, y);
    if(x+1 < n && !check[x+1][y] && arr[x+1][y] == '1') go(x+1, y); 
    if(y-1 >= 0 && !check[x][y-1] && arr[x][y-1] == '1') go(x, y-1);
    if(y+1 < n && !check[x][y+1] && arr[x][y+1] == '1') go(x, y+1);
}

int main(){
    cin >> n;
    for(int i = 0; i<n; i++){
        char tmp[30] = {}; cin >> tmp;
        for(int j = 0; j<n; j++) arr[i][j] = tmp[j];
    }
    int total = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            if(!check[i][j] && arr[i][j] != '0'){
                total++;
                Count = 0;
                go(i, j);
                result.push_back(Count);
            }
        }
    }
    sort(result.begin(), result.end());
    cout << total<<'\n';
    for(int i = 0; i<result.size(); i++) cout << result[i]<<'\n';
}