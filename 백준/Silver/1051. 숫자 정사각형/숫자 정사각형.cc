#include <iostream>
using namespace std;
int n, m;
char arr[51][51];
int main(){
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        char tmp[51];
        cin >> tmp;
        for(int j = 0; j<m; j++) 
            arr[i][j] = (char) tmp[j];
    }
    int len = n > m ? m : n;
    if(len == 1) {
        cout << 1;
        return 0;
    }
    while(len > 1){
        for(int i = 0; i+len <= n; i++){
            for(int j = 0; j+len <= m;j++){
                char a = arr[i][j];
                char b = arr[i+len-1][j];
                char c = arr[i][j+len-1];
                char d = arr[i+len-1][j+len-1];
                if(a == b && b == c && c == d) {
                    cout << (len) * (len);
                    return 0;
                }
            }
        }
        len --;
    }
    cout << 1;
}