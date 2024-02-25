#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int n; 
    cin >> n;
    stack <int> st;
    int arr[100001] = {};
    for(int i = 1; i<=n; i++) cin >> arr[i];
    
    int num = 1; int index = 1; bool check = true;
    vector <char> v; 
    do{
        if(st.size()==0){st.push(num); num++; v.push_back('+');}
        if(st.top() != arr[index] && st.size()!=0){st.push(num); num++; v.push_back('+');}
        if(st.size() != 0 && st.top() == arr[index]) { st.pop(); index++; v.push_back('-'); }
        else if(st.size () != 0 && st.top() > arr[index]) {check = false; break;}
    }while(index <= n);
    if(!check) {cout <<"NO"; return 0;}
    for(int i = 0; i<v.size(); i++) cout << v[i] <<'\n';
}