#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    queue <int> arr1; // 사용하는 큐
    queue <int> arr2; // 출력할 때 사용하는 큐
    int i = 1;
    int check = 1;

    for(int i = 1; i<=n; i++){ arr1.push(i); }
    int cnt = 1;
    while(arr1.size() != 0){
        if(cnt == k){
            arr2.push(arr1.front());
            arr1.pop();
            cnt = 1;
        }
        else{
            int tmp = arr1.front();
            arr1.pop();
            arr1.push(tmp);
            cnt++;
        }
    }
    cout <<"<";
    while(!arr2.empty()){
        if(arr2.size() == 1) { cout << arr2.front()<<">"; arr2.pop();}
        else{
        cout << arr2.front() <<", "; arr2.pop();
        }
    }
}