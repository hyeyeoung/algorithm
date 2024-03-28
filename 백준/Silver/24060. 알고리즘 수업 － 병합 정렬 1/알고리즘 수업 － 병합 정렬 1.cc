#include <iostream>
using namespace std;
const int Max = 500001;
int arr[Max] = {};
int *arr2;
int n, k;
int cnt = 0, result = -1;
void mmsort(int left, int right){ // 정렬 부분

    int mid = (left + right) / 2;
    int i = left, j = mid+1, t = left;
    while(i<=mid && j <= right){
        if(arr[i] < arr[j]) arr2[t++] = arr[i++];
        else arr2[t++] = arr[j++];
    }

    int tmp = i > mid ? j : i;
    
    while(t<=right) arr2[t++] = arr[tmp++];

    for(int i = left; i <= right; i++) {
        arr[i] = arr2[i];
        cnt++;
        if(cnt == k) result = arr[i];
    }

}
void mergesort(int first, int last){ // 합병부분
    int mid = (first+last) / 2;
    if(first < last){
        mergesort(first, mid);
        mergesort(mid+1, last);
        mmsort(first, last);
    }
}


int main(){
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> arr[i];
    arr2 = new int[n];

    mergesort(0, n-1);
    
    cout << result;
    delete[] arr2;
}