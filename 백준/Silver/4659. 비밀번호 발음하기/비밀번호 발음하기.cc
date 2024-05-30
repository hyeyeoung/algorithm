#include <iostream>
#include <cstring>
using namespace std;

char a[] = {'a','e','i','o','u'};
char b[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

int main(){
    string sc;
    while(1){
        cin >> sc;
        if(sc == "end") break;
        int len = sc.size();
        bool check = false;
        bool check2 = true;
        bool check3 = true; 
        bool lower = false;
        int cnt = 1;

        for(int i = 0; i<len; i++){
            bool current = false;
            if(i!= 0 && sc[i] == sc[i-1]){
                if(sc[i] != 'o' && sc[i] != 'e') check2 = false;
            }

            // 모음 여부 확인
            for(int j = 0; j<5; j++){
                if(sc[i] == a[j]) {
                    if(i == 0) lower = true;
                    current = true;
                    check = true;
                    break;
                }
            }
            if(i != 0 && lower == current) cnt++;
            else cnt = 1;
            lower = current;
            if(cnt == 3) check3 = false;
        }
        cout << "<"<< sc << ">" ;
        if(check && check2 && check3) cout << " is acceptable.\n";
        else cout << " is not acceptable.\n";
    }
}