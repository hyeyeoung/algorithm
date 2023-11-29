#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
struct member
{
    /* data */
    int age;
    string name;
};

bool compare(member a, member b){
    return a.age < b.age;
}

int main(){

    int tc; cin>>tc;
    member arr[100001];
    for (int i = 0; i<tc; i++){
        cin >> arr[i].age >> arr[i].name;
    }
    stable_sort (arr, arr+tc, compare);

    for(int i = 0; i< tc; i++) cout << arr[i].age<<" " << arr[i].name<<'\n';
}