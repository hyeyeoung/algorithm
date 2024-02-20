#include <iostream>
#include <string>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    int n5 = n / 5;
    int n25 = n / 25;
    int n125 = n / 125;

    cout << n5+n25+n125;
}