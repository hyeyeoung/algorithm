#include <iostream>
#include <vector>
using namespace std;

int k = 1000000000 + 7;

int main(){
    int n; 
    cin >> n;
    vector <long long> arr[n];
    long long sum = 0;
    for(int i = 0; i<n-1; i++) {
        long long a; cin >> a;
        arr[i].push_back(a);
        sum += (a % k);
        if(i == 0) continue;
        else{
            for (int j = 0; j < arr[i-1].size(); j++){
                long long tmp = (arr[i-1][j] * a) % k;
                sum+= (tmp % k);
                arr[i].push_back(tmp);
            }
        }
    }
    cout << sum % k;

}