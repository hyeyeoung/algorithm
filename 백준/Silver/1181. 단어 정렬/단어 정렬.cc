#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
	if(a.length() != b.length()) return a.length() < b.length();
	else 
		return a < b;
}
int main(){
    int tc; cin >> tc;
    string arr[20001]= {}; 
    for(int i = 0; i<tc; i++){
        string tmp_str;
        cin >> arr[i];
    }
    sort(arr, arr+tc, compare);
    string tmp = arr[0];
    cout << arr[0] << '\n';
    for(int i = 1; i < tc; i++){
        if(arr[i] != tmp){
            tmp = arr[i];
            cout << arr[i] <<'\n';
        }
    }
}