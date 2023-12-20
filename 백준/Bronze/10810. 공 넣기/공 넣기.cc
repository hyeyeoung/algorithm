#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arr[101] ={};

    for(int i = 1; i<=m;i++){
        int a,b,c;
        cin>> a>>b>>c;
        for(int j = a; j<=b; j++){
            arr[j] = c;
        }
    }

    for(int i = 1; i<=n; i++) cout << arr[i]<<" ";
}