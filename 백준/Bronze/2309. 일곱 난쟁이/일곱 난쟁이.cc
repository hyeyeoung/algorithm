#include <iostream>
#include <algorithm>
using namespace std;

int a[10];

int najaong(){
    for(int i = 0; i<8; i++){
        for(int j = i+1; j<9; j++){
            int check = 0;
            for(int k=0; k<9; k++){
                if(k != i && k != j) check += a[k];
            }
            if(check == 100) {
                a[i]=a[j]=-1;
                return 0;
            }
        }
    }
    return 0;
}
int main() {
    for (int i = 0; i<9; i++ ) cin >> a[i];
    int tmp;
    
    sort(a, a+9);

    tmp = najaong();

    

    for(int k = 0;k<9; k++){
        if (a[k] != -1){
        cout <<a[k]<<'\n';
        }
    }

}