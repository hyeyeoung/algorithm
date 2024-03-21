#include <iostream>
#include <queue>
using namespace std;
int r, c;
char pan[100][100] = {};
int dis[51][51] = {};
bool ok[51][51] = {};
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

queue <pair<int,int>> water;
queue <pair<int,int>> q;
queue <pair<int,int>> water_tmp;

void go(){
    int count = 0;
    while(!q.empty()){
        while(!water.empty()){
            int x = water.front().first, y = water.front().second;
            water.pop();
            for(int i = 0; i<4; i++){
                int nx = x+dx[i], ny = y+dy[i];
                if(nx>=0 && nx < r && ny>=0 && ny < c){
                    if(pan[nx][ny] == '.'||pan[nx][ny]=='S'){
                        pan[nx][ny] = '*';
                        water_tmp.push({nx,ny});
                    }
                }
            } // for
        }
        if(water.empty()){
            water = water_tmp;
            water_tmp = queue <pair<int,int>>();
        }// if
        int x = q.size();
        for(int j = 0; j<x; j++){
            int x = q.front().first, y = q.front().second;
            q.pop();
            for(int i = 0; i<4; i++){
                int nx = x+dx[i], ny = y+dy[i];
                if(nx >= 0&& nx <r && ny >= 0 && ny <c ){
                    if(pan[nx][ny] == '.' || pan[nx][ny] == 'D'){
                        q.push({nx,ny});
                        pan[nx][ny] = 'S';
                        dis[nx][ny] = dis[x][y]+1;
                    }//if
                }// if
            }// for
        }// for
    }
}

int main(){
    cin >> r >> c;
    int inex = 0, jdex = 0;
    for(int i = 0; i<r; i++){
        char tmp[100]; cin >> tmp;
        for(int j = 0; j<c; j++){
            pan[i][j] = tmp[j];
            if(pan[i][j] == 'S') { q.push({i,j}); ok[i][j] = true; }
            if(pan[i][j] == 'D') { inex = i; jdex = j; }
            if(pan[i][j] == '*') { water.push({i,j}); ok[i][j] = true;}
        }
    }

    go();

    if(dis[inex][jdex]==0) cout <<"KAKTUS";
    else cout << dis[inex][jdex];
}