#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
} // 값 변환 

void Heap(vector <int> &arr, int l, int cur)
{
    int largest = cur;
    int right = cur * 2 + 1, left = cur * 2;

    if(right <= l && arr[right] > arr[largest]) largest = right;
    if(left <= l && arr[left] > arr[largest]) largest = left;

    // 최대힙이 아닐때 수행
    if(largest != cur)
    {
        swap(arr[cur], arr[largest]);
        Heap(arr, l ,largest);
    }
}

void HeapSort(vector <int> &arr, int l)
{
    for(int i = l/2; i >= 1; i--){
        Heap(arr,l, i);
    }

    for(int i = l; i>= 2; i--)
    {
        swap(arr[1], arr[i]);
        Heap(arr,i-1, 1); // 1부터 다시 힙을 만듦
    }
} // HeapSort 다시 공부
int bns(int l, int n, vector<int> &arr){
    int idx = 0;
    for(int i = 1; i <= l; i++){
        if(arr[i] == n) return 0; // 반복 종료
        if(arr[i-1] < n && n < arr[i]) 
        {
            idx = i;
            break;
        } // 사이에 들어가는 값을 찾는다..
    }
    int before = (n - (arr[idx-1]+1));
    int after = ((arr[idx]-1) - n);
    return before * after + (before + after);
}
int main(){
    int l, n;
    cin >> l;
    vector <int> arr(l+1); // 정렬해야하는 배열
    for(int i = 1; i <= l; i++)
    {
        cin >> arr[i];
    }
    cin >> n;
    HeapSort(arr, l); // 정렬 수행
    cout << bns(l, n, arr); // 정답
}