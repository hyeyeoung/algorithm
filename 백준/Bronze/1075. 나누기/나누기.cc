#include <iostream>
using namespace std;

int main(){
    int n, f;
    cin >> n >> f;

    int i = 0;
    while(i < 100){
        int new_n = (n / 100) * 100 + i;
        
        if(new_n % f == 0)
            break;
        i++;
    }
    cout.width(2);
    cout.fill('0');
    cout << i;

}