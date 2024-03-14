#include <iostream>
#include <vector>
using namespace std;
pair<int, bool> arr[51][51] = {};
int w, h;
void go(int x, int y){
    arr[x][y].second = true;
    // 세로
    if(x-1>=0 && !arr[x-1][y].second && arr[x-1][y].first == 1) go(x-1, y);
    if(x+1 <h && !arr[x+1][y].second && arr[x+1][y].first == 1) go(x+1, y);
    // 가로
    if(y-1 >=0 && !arr[x][y-1].second && arr[x][y-1].first == 1) go(x, y-1);
    if(y+1 <w && !arr[x][y+1].second && arr[x][y+1].first == 1) go(x, y+1);
    // 대각선
    if(x-1>=0 && y-1>=0 && !arr[x-1][y-1].second && arr[x-1][y-1].first == 1) go(x-1, y-1);
    if(x-1>=0 && y+1 <w && !arr[x-1][y+1].second && arr[x-1][y+1].first == 1) go(x-1, y+1);
    if(x+1 <h && y-1>=0 && !arr[x+1][y-1].second && arr[x+1][y-1].first == 1) go(x+1, y-1);
    if(x+1 <h && y+1 <w && !arr[x+1][y+1].second && arr[x+1][y+1].first == 1) go(x+1, y+1);
}
int main(){
    while(true){
        cin >> w >> h; // 3 2
        if(w == 0 && h==0) break;
        for(int i = 0; i<h; i++) {
            for(int j = 0; j<w; j++) {
                arr[i][j].first = 0; arr[i][j].second = false;
                cin >> arr[i][j].first;
            }
        }
        int count = 0;
        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                if(arr[i][j].second == false && arr[i][j].first == 1){
                    count++;
                    go(i, j);
                }
            }
        }
        cout << count<<'\n';
    }
    return 0;
}