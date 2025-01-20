#include <bits/stdc++.h>
using namespace std;

bool primeN(int max)
{
    for(int i = 2; i <= max / 2; i++)
    {
        if(max % i == 0)
            return false;
    }
    return true;
}


int solution(string numbers) {
    int answer = 0;
    
    vector <int> arr(numbers.size()); 
    set <int> num;
    
    for(int i = 0; i < numbers.size(); i++)
        arr[i] = (numbers[i] - '0');
    sort(arr.begin(), arr.end());
    for(int i = 1; i <= numbers.size(); i++)
    {
        vector <int> x(numbers.size(), 0);
        for(int j = 0; j < i; j++) x[j] = 1;
        sort(x.begin(), x.end());
        
        do {
            do{
                int s = 0;
                int flag = 1;
                for(int j = numbers.size() - 1; j >= 0; j--){
                    if(x[j] == 1)
                    {
                        s += (flag * arr[j]);
                        flag *= 10;
                    }
                }
                num.insert(s);
            }while(next_permutation(arr.begin(), arr.end()));
        }while(next_permutation(x.begin(), x.end()));
    }
    for(auto k : num)
    {
        if(k >= 2 && primeN(k))
        {
            answer++;
        }
    }
    return answer;
}