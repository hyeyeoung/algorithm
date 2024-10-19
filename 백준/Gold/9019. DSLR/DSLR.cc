#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;
int A, B;
void s9019(){
    vector <string> interupt(10001, ""); // 명령어 저장하는 벡터,,,
    bool visited[10001] = {}; // 방문 여부 확인
    queue <int> q;
    q.push(A);
    visited[A] = true;
    while(!q.empty()){
        int n = q.front();
        if(n == B) break;
        
        q.pop();
        int new_n = (n * 2) % 10000;
        if(!visited[new_n]){
            visited[new_n] = true;
            interupt[new_n] = interupt[n] + "D";
            q.push(new_n);
        } // D
        new_n = n - 1;
        if(new_n < 0){ 
            new_n = 9999;
            if(!visited[new_n]){
                visited[new_n] = true;
                interupt[new_n] = interupt[n] + "S";
                q.push(new_n);
            } // S1
        }
        else{
            if(!visited[new_n]){
                visited[new_n] = true;
                interupt[new_n] = interupt[n] + "S";
                q.push(new_n);
            }
        }        
        int shift[4] = {};
        shift[0] = n / 1000;
        shift[1] = (n % 1000) / 100;
        shift[2] = (n % 100) / 10;
        shift[3] = n % 10;
        new_n = shift[1] * 1000 + shift[2] * 100 + shift[3] * 10 + shift[0];
        if(!visited[new_n]){
            visited[new_n] = true;
            interupt[new_n] = interupt[n] + "L";
            q.push(new_n);
        } // L
        new_n = shift[3] * 1000 + shift[0] * 100 + shift[1] * 10 + shift[2];
        if(!visited[new_n]){
            visited[new_n] = true;
            interupt[new_n] = interupt[n] + "R";
            q.push(new_n);
        } // R
    }
    cout << interupt[B] << '\n';
}

int main(){
    int TC;
    cin >> TC;
    while(TC--){
        cin >> A >> B;
        s9019();
    }
}