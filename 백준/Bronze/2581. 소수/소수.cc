#include <iostream>
using namespace std;
bool arr[10001] = {0};
void a(int m){
    arr[0] = arr[1] = true;
    for(int i = 2; i <= m; i++){
        if (!arr[i]){
            for(int j = i*i; j <= m; j+=i){
                arr[j] = true;
            }
        }
    }
}
int main(){
    int m, n;
    cin >> m >> n;
    int tmp = n > m ? n : m;
    a(tmp);
    int result1 = 10000000;
    int result2 = 0;
    bool flag = true;
    for(int i = m; i<=n;i++){
        if(!arr[i]){
            result1 = result1 > i ? i : result1;
            flag = false;
            result2 += i;
        }
    }
    if(flag) { cout << -1;}
    else {
        cout << result2 <<'\n' << result1;
    }
}