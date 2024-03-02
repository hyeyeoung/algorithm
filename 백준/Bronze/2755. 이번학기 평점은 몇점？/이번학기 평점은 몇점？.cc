#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    double total = 0; double avg = 0;
    for(int i = 0; i<n; i++){
        char name[10001]; cin >> name;
        double t; cin >> t; total += t;
        string str; 
        cin >> str;
        if(str == "A+") avg += (double)(t * 4.3);
        else if(str == "A0") avg += (double)(t * 4.0);
        else if(str == "A-") avg += (double)(t * 3.7);
        else if(str == "B+") avg += (double)(t * 3.3);
        else if(str == "B0") avg += (double)(t * 3.0);
        else if(str == "B-") avg += (double)(t * 2.7);
        else if(str == "C+") avg += (double)(t * 2.3);
        else if(str == "C0") avg += (double)(t * 2.0);
        else if(str == "C-") avg += (double)(t * 1.7);
        else if(str == "D+") avg += (double)(t * 1.3);
        else if(str == "D0") avg += (double)(t * 1.0);
        else if(str == "D-") avg += (double)(t * 0.7);
        else avg += (t * 0.0);
    }
    cout.precision(2);
    cout<<fixed;
    cout << ((round(avg/total * 100) / 100));
}