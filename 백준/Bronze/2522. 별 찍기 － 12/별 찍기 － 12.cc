#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= 2*n - 1; i++){
        int count = 0; int c = 0;
        if(i <= n){
            count = n - i;
            c = n - count;
        }
        else{
            count = i - n;
            c = n - count;
        }
        for(int j = 0; j < count; j++){
            cout << ' ';
        }
        for(int j = 0; j<c; j++) cout << "*";
        cout <<'\n';
        // cout << count <<"  " << c <<endl;
    }
}