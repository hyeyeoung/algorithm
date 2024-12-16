#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector <long long> arr(n);
    long long maxi = 0;
    for(long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = maxi < arr[i] ? arr[i] : maxi; // 최대값
    }
    long long left = 1, right = maxi; // 이분탐색을 위한 왼 오 설정
    long long result = 0;
    while(left <= right)
    {
        long long mid = (left+right) / 2;
        long long sum = 0; // 길이 비교를 위한 sum 변수
        for(long long i = 0; i < n; i++)
        {
            if(arr[i] - mid >= 0)   
                sum += (arr[i] - mid);
        }
        if(sum >= m)
        {
            left = mid + 1;
            result = mid;
        }
        else
            right = mid - 1;
    }
    cout << result;
}