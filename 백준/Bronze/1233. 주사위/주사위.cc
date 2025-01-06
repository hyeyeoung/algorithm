#include <bits/stdc++.h>
using namespace std;


int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int arr[100] = {}; // 합의 최대는 80,, 넉넉하게 100으로 잡고 풀기

    for(int i = 1; i <= s1; i++)
    {
        for(int j = 1; j <= s2; j++)
        {
            for(int k = 1; k <= s3; k++)
            {
                arr[i+j+k]++;
            }
        }
    }
    int idx = 0;
    int max = 0;
    for(int i = 3; i <= (s1+s2+s3); i++)
    {
        if(arr[i] > max)
        {
            idx = i;
            max = arr[i];
        }
    }
    cout << idx;
}