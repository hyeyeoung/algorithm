#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector <int> arr(n);
    int right = 0, left = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        right = right > arr[i] ? right : arr[i];
    }
    int res = 0;
    while(left <= right)
    {
        int mid = (right + left) / 2;
        int sum = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] >= mid)
                sum += (arr[i] / mid);
        }

        if(sum >= m){
            res = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << res;
}