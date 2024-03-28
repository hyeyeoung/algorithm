#include <iostream>
using namespace std;
int main(){
    int h,w,n,m;
    cin >> h >> w >> n >> m;
    int count1 = 0, count2 = 0;
    int i = 1;
    while(i <= h){
        i += (n+1);
        count1++;
    }
    i = 1; 
    while(i <= w){
        i += (m+1);
        count2++;
    }
    cout << count1 * count2;
}