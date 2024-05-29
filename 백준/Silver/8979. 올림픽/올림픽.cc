#include <iostream>
#include <algorithm>
using namespace std;
struct nation
{
    int nation, gold, silver, bronze;
};

bool compare(nation &a, nation &b){
    if(a.gold == b.gold){
        if(a.silver == b.silver){
            return a.bronze > b.bronze;
        }
        else return a.silver > b.silver;
    }
    else return a.gold > b.gold;
}


int main(){
    // n = 국가 수, k는 등수가 궁금한 국가
    int n, k;
    cin >> n >> k;

    nation arr[1001] = {};

    for (int i = 0; i<n; i++) 
        cin >> arr[i].nation >> arr[i].gold >> arr[i].silver >> arr[i].bronze;
    
    sort(arr, arr+n, compare);
    int prize = 0;
    int cnt = 1;
    for(int i = 0; i<n; i++){
        if(i != 0 && arr[i].gold == arr[i-1].gold && arr[i].silver == arr[i-1].silver && arr[i].bronze == arr[i-1].bronze) cnt++;
        else { prize += cnt; cnt = 1;}

        if(arr[i].nation == k){
            cout << prize; 
            return 0;
        }
    }
}