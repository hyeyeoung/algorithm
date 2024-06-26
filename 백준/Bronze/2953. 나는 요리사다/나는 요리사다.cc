#include <iostream>
using namespace std;

int main(){
    int maxp = -1, sc = -1;
    for(int i = 0; i<5; i++){
        int tmp = 0;
        for(int j = 0; j<4; j++){
            int c;
            cin >> c;
            tmp += c;
        }
        if(sc < tmp){
            maxp = i;
            sc = tmp;
        }
    }
    cout << maxp+1 << " " << sc;
}