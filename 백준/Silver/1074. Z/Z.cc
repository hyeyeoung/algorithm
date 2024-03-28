#include <iostream>
#include <cmath> //pow 제곱근 사용

using namespace std;
int n, r, c;
int cnt= 0;
void ans(int x, int y, int size){
    if(x == c && y == r) { cout << cnt; return;}
    else if(c < x + size  && r < y + size && c >= x && r >= y){
        ans(x,y, size/2);
        ans(x+size/2, y, size/2);
        ans(x, y+size/2, size/2);
        ans(x+size/2, y+size/2, size/2);
    }
    else cnt += (size*size);
}

int main(){
    cin >> n >> r >> c;
    ans(0,0,pow(2,n));
}