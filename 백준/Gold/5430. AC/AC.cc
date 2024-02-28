#include <iostream>
#include <sstream>
#include <deque>
using namespace std;
void R(deque <int> &tmp, int n){ // reverse
    int front = 0, back = n-1;
    while(front <= back){
        int a = tmp[front];
        tmp[front] = tmp[back];
        tmp[back] = a;
        front ++; back--;
    }
}
int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int tc; cin >> tc;
    while(tc--){
        string p; cin >> p;
        int n; cin >> n;
        string x; cin >> x;
        x = x.substr(1);
        x = x.substr(0,x.find(']'));
        deque <int> arr;
        istringstream tmp(x);
        string buffer; bool error = true;
        while(getline(tmp, buffer, ',')){
            arr.push_back(stoi(buffer));
        }
        int Rev = 0, Del = 0;
        for(int i = 0; i<p.size(); i++){
            if(p[i] == 'R') Rev++; 
            else{
                if(Rev % 2 == 0 && n > 0) { arr.pop_front(); n--;}
                else if(Rev % 2 != 0 && n > 0) { arr.pop_back(); n--;}
                else if(n <= 0) { error = false; break;}
            }
        }
        if(Rev%2 != 0) R(arr, n);


        if(!error) cout << "error\n";
        else {
            cout <<"[";
            for(int i = 0; i<n; i++){
                if(i == n-1) cout << arr[i];
                else cout << arr[i] << ",";
            }
            cout <<"]\n";
        }
    }
}