#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;   
}
void Heapfity(vector <int> &arr, int n, int i){
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;

    if(left <= n && arr[largest] < arr[left]) largest = left;
    if(right <= n && arr[largest] < arr[right]) largest = right;

    if(i != largest){
        swap(arr[i], arr[largest]);
        Heapfity(arr, n, largest);
    }
}
void Heapsort(vector <int> &arr, int n){
    for(int i = n/2; i>= 1; i--) Heapfity(arr, n, i);
    for(int i = n; i>=2; i--){
        swap(arr[1], arr[i]);
        Heapfity(arr, i-1, 1);
    }
}

pair <int, int> sol(vector<int> & arr, int n){
    int i = 1;
    int j = n;
    int min =  2000000001;
    int rememberi = -1, rememberj = -1;
    while(i < j){
        if(abs(arr[i]+arr[j]) < min) {
            min = abs(arr[i]+arr[j]);
            rememberi = i;
            rememberj = j;
        }
        if(arr[i]+arr[j] < 0) i++;
        else j --;
    } 
    return {rememberi, rememberj};
}
int main(){
    int n;
    cin >> n;
    vector <int> arr(n+1);

    for(int i = 1; i<=n; i++) cin >> arr[i];
    Heapsort(arr, n);
    pair<int, int> res = sol(arr, n);
    cout << arr[res.first] << " " << arr[res.second];
}