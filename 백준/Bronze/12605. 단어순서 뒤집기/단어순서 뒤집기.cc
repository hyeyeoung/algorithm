#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(){
    char tc[10]; 
    cin.getline(tc, 5,'\n');
    int tcc = atoi(tc);

    for(int i = 1; i<=tcc; i++){
        stack<string> a;
        char arr[1000];
        cin.getline(arr, 100, '\n');

        string tmp = "";
        for(int j = 0; j<=strlen(arr);j++){
            if(arr[j] == ' '|| j == strlen(arr)) {
                a.push(tmp);
                tmp = "";
            }
            else tmp += arr[j];
        }


        cout << "Case #" << i<<": ";
        while(!a.empty()){
            cout << a.top() << " ";
            a.pop();
        }
        cout <<'\n';
    }
}