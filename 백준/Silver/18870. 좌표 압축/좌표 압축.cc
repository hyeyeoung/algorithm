#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> a;
vector <int> b;
int main(){
    int n; cin >> n;
    for(int i= 0; i<n; i++){ 
        int tmp; cin >> tmp;
        a.push_back(tmp);
        b.push_back(tmp);
    }
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    int k = b[0];
    for(int i = 0; i < n; i++ ){
        int tmp = a[i]; 
        cout << upper_bound(b.begin(), b.end(), tmp-1) - lower_bound(b.begin(), b.end(),k)<< " ";
    }
	return 0;
}