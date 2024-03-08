#include <iostream>
#include <vector>
using namespace std;
int arr[12] = {};
int gmin = 1000000001, gmax = -1000000001;
int n; 
void go(int index, int sum, int plus, int minus, int multi, int divid){
    if (index == n - 1){
        if(sum > gmax) gmax = sum;
        if(sum < gmin) gmin = sum;
        return;
    }
    if(plus > 0) go(index+1, sum + arr[index+1], plus - 1, minus, multi, divid);
    if(minus > 0) go(index+1, sum - arr[index+1], plus, minus-1, multi, divid);
    if(multi > 0)go(index+1, sum * arr[index+1], plus, minus, multi-1, divid);
    if(divid > 0)go(index+1, sum / arr[index+1], plus, minus, multi, divid-1);
}

int main(){
    cin >> n;
    for(int i = 0; i<n; i++) cin >> arr[i];
    int plus = 0, mius = 0, multi = 0, divid = 0;
    cin >> plus >> mius >> multi >> divid;
    go(0, arr[0], plus, mius, multi, divid);
    
    cout << gmax << '\n' << gmin;
}