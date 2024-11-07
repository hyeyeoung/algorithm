#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void s2467(vector <int> &arr, int n){
    int i = 0, j = n-1;
    int min = abs(arr[i] + arr[j]);
    pair<int, int> res = {i, j};
    
    while(i < j){
        if(abs(arr[i] + arr[j]) < min){
            min = abs(arr[i] + arr[j]);
            res.first = i;
            res.second = j;
        }
        if(arr[i] + arr[j] > 0)
            j--;
        else if(arr[i] + arr[j] < 0)
            i++;
        else
            break;

    }
    cout << arr[res.first] << " " << arr[res.second];
}

int main(){
    int n;
    cin >> n;
    vector <int> liquid(n);

    for(int i = 0; i<n; i++)
        cin >> liquid[i];
    s2467(liquid, n);
}