#include <iostream>
using namespace std;

int main(){
    int sum1 = 0, sum2 = 0;
    int a,b,c,d;
    int e,f,g,h;
    cin >> a >> b>> c >> d;
    cin >> e >> f>>g>> h;
    
    sum1 = a+b+c+d;
    sum2 = e+f+g+h;
    if (sum1 >= sum2) cout << sum1;
    else cout << sum2;
}