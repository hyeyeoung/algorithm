#include <iostream>
using namespace std;

int main(){
    int x,y,w,h;
    cin >> x >> y >> w >> h;

    int tmp1 = x > (w-x) ? (w-x) : x;
    int tmp2 = y > (h-y) ? (h-y) : y;

    int tmp = tmp1 > tmp2 ? tmp2 : tmp1;

    cout << tmp;
}