#include <iostream>
#include <cstring>
using namespace std;
int arr[27][27] = {};
int main(){
    int n; 
    cin >> n;

    for(int i = 0; i<=n; i++){
        char tmp[10]; 
        cin.getline(tmp, 7,'\n');
        int a = int(tmp[0])-97;
        int b = int(tmp[5])-97;
        if(a>=0&& b>=0) arr[a][b] = 1;
    }
    for(int k = 0; k<27; k++){
        for(int i = 0; i<27; i++){
            for(int j = 0; j<27; j++){
                if(arr[i][k] && arr[k][j]) arr[i][j] = 1;
            }
        }
    }
    int m; cin >> m;
    for(int i = 0; i<=m;i++){
        char tmp[10]; 
        cin.getline(tmp, 7,'\n');
        int a = int(tmp[0])-97;
        int b = int(tmp[5])-97;
        if(a>=0&& b>=0){
            if(arr[a][b]) cout << "T\n";
            else cout << "F\n";
        }
    }
}