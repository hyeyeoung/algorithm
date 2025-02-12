#include <iostream>
#include <vector>
using namespace std;
vector<int> lis(1001); // 가장 긴 수열의 길이를 찾는 벡터
int BinarySearch(int left, int right, int target)
{
    while(left < right)
    {
        int mid = (left + right) / 2;

        if(lis[mid] < target){
            left = mid+1;
        }
        else {
            right = mid;
        }
    }
    return right;
}
int main() {
    // 앞에 주어진 상자의 크기가 뒤 상자의 크보다 작으면 
    // 뒷 상자에 앞 상자를 넣을 수 있음

    // 즉 각 상자를 선택할지 말지를 결정해야함
    // 이 때, 최대 선택 가능한 상자의 수

    int n; // 총 상자의 개수
    cin >> n; 
    vector<int> arr(n); // 각 상자의 크기 입력
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // LIS (Longest Increasing Subsequence)
    lis[0] = arr[0];
    int j = 0, i = 1;
    while(i < n)
    {
        if(lis[j] < arr[i]) {
            lis[j+1] = arr[i];
            j++;
        }
        else{
            int pos = BinarySearch(0, j, arr[i]); 
            lis[pos] = arr[i];
        }
        i++;
    }
    cout << j+1;
}