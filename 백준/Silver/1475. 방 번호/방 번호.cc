#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string n;
    cin >> n;
    // 6이랑 9는 통합 사용 가능
    int arr[10] = {};
    int max = 1; // 세트 수

    // 한 글자씩 수행
    for(int i = 0; i < n.size(); i++)
    {
        int x = n[i] - '0';
        
        if(x != 6 && x != 9)
        {

            if(arr[x] == max)
            {
                max++;
            }
            arr[x]++;
        }
        else
        {
            if(arr[6] == max && arr[9] == max)
            {
                max++;
                arr[x]++;
            }
            else if(arr[6] == max && arr[9] != max)
                arr[9]++;
            else
                arr[6]++;
        }
    }
    cout << max;
}