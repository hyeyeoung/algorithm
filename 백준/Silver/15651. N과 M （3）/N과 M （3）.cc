#include <iostream>
int arr[10]={0};
bool b[10] = {0};
void go(int index, int n, int m){
    if(index == m+1) {
        for(int i = 1; i <= m; i++) std:: cout << arr[i] <<" ";
        std::cout <<'\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        arr[index] = i;
        go(index+1, n, m);
    }
}

int main(){
    int n, m; std::cin >> n >> m;
    go(1, n, m);
}