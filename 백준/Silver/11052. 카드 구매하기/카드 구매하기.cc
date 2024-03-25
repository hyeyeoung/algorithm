#include <iostream>
#include <algorithm>
using namespace std;

int n; 
int arr[1001] = {}; 
int dis[1001] = {}; // value
 
int main(){
    cin >> n; 
    for(int i = 1; i<=n ; i++) cin >> arr[i];
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++)
        {
            dis[i] = max(dis[i], arr[j]+ dis[i-j]);
        }
    }
    cout << dis[n];
}