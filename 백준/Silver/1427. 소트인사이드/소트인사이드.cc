#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool compare(char a, char b){
    return a > b;
}
int main(){
    char a[12]; cin >> a;
    sort(a,a+strlen(a),compare);
    cout << a;
}
