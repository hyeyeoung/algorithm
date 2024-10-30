#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int n;
int i = 0;
void swap(string &a, string &b){
    string tmp = a;
    a = b;
    b = tmp;
}
void res(string s, int index, int sol, vector<string> &arr){
    while(arr[sol] != s){
        if(i >= 0 && i + 1 < n && i < index && i != index){
            cout << "1";
            i++;
        }
        else if(i - 1 >= 0 && i < n && i > index && i != index){
            cout << "2";
            i--;
        }
        else if(i >= 0 && i + 1 < n && i + 1 == index){
            cout << "3";
            index--;
            swap(arr[i+1], arr[i]);
            i++;
        }
        else if(i - 1 >= 0 && i < n && i == index){
            cout << "4";
            index--;
            swap(arr[i-1], arr[i]);
            i--;
        }
    }
}
int main(){
    cin >> n;
    vector<string> arr(n);

    int i1 = -1, i2 = -1;
    for(int j = 0; j<n; j++){
        cin >> arr[j];
        if(arr[j] == "KBS1") i1 = j;
    }

    res("KBS1", i1, 0, arr);
    for(int j = 0; j<n; j++) {
        if(arr[j] == "KBS2") i2 = j;
    }
    res("KBS2", i2, 1, arr);
}