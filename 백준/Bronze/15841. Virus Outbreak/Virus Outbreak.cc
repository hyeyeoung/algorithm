#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector <string> arr;
void solution(){
    arr.push_back("1"); arr.push_back("1"); arr.push_back("1"); 
    for(int i = 3; i <= 490; i++) {
        string a = arr[i-1], b = arr[i-2];
        reverse(a.begin(), a.end()), reverse(b.begin(), b.end());
        string tmp;
        int carry = 0; int len = a.size() >= b.size() ? a.size() : b.size();
        for(int j = 0; j<len; j++){
            int sum = a[j] - '0' + b[j] - '0' + carry;
            if(sum < 0) sum += '0';
            if(sum > 9) carry = 1;
            if(sum >= 0 && sum <= 9) carry = 0;
            tmp.push_back((sum%10)+'0');
        }
        if(carry ==1 ) tmp.push_back('1');
        reverse(tmp.begin(), tmp.end());
        arr.push_back(tmp);
    }
}

int main(){
    solution();
    while(true){
        int n; cin >> n;
        if(n == -1) break;
        cout << "Hour "<< n<<": "<< arr[n]<<" cow(s) affected\n";
    }
}