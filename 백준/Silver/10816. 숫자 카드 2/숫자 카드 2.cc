#include <iostream>
#include <algorithm>
using namespace std;
void init(){cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);}
int main(){
    init();
    int n,m;
    int narr[500000] = {0};

    cin >> n;
    for(int i = 0 ; i < n;i++) cin>>narr[i];
    sort (narr, narr+n);
    cin >> m;
    for(int i = 0; i< m; i++) {
        int tmp;
        cin >> tmp;
        int *up, *low;
        low = lower_bound(narr, narr+n, tmp);
        up = upper_bound(narr, narr+n, tmp);
        cout << up-low << ' ';
    }

}