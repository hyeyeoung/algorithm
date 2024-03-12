#include <iostream>
using namespace std;
int arr[21] = {};
void swap(int a, int b){
    int left = a, right = b;
    while(left <= right){
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++; right--;
    }
}

int main(){
    for(int i = 1; i<=20; i++) arr[i] = i;
    for(int i = 1; i<=10; i++){
        int a, b; cin >> a >> b;
        swap(a, b);
    }
    for(int i = 1; i<=20; i++) cout << arr[i] <<" ";
}