#include <iostream>
#include <queue>
using namespace std;

int main(){
    int k, n;
    cin >> n >> k; 
    queue <int> q;

    for(int i =0; i<n; i++) q.push(i+1);
    int count = 0; int num = 0;
    cout << "<";
    while(count != n){
        int tmp = q.front();
        q.pop(); num++;
        if(num == k && count != n-1){ cout << tmp << ", "; count++; num = 0;}
        else if(num == k && count == n-1){ cout << tmp; count++; num = 0;}
        else if(num != k) { q.push(tmp); }
    }
    cout <<">";
}