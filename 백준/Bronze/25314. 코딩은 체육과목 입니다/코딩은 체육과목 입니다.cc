#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n > 4){
        n -= 4;
        cout << "long ";
    }
    cout << "long int";
}