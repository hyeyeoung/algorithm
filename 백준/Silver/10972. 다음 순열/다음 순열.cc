#include <iostream>
using namespace std;
int n_permitation[10001] = {0};

void n_p (int n){
    int index_i = 0;
    for(int i = 0; i < n; i++){ // i 찾기
        if(n_permitation[i] > n_permitation[i-1] && index_i <= i) index_i = i;
    }
    // while(index_i > 0 && n_permitation[index_i-1] <= n_permitation[index_i]) index_i--;
    if(!index_i) cout << -1; 
    else{
        int index_j = 0;
        for(int j = 0; j < n; j++){ // j 찾기
        if(j >= index_i && n_permitation[j] > n_permitation[index_i-1] && index_j <= j) index_j = j;
        }

        int tmp = n_permitation[index_i-1];
        n_permitation[index_i-1] = n_permitation[index_j];
        n_permitation[index_j] = tmp;
        // cout << index_i << index_j <<"\n";
        index_j = n-1;
        while(index_i < index_j){
            int tmp_a = n_permitation[index_i];
            n_permitation[index_i] = n_permitation[index_j];
            n_permitation[index_j] = tmp_a;
            index_i++; index_j--;
        }
        for(int i =0 ;i<n;i++){
            cout << n_permitation[i]<<" ";
        }
    }
}


int main(){
    int n; cin >> n;

    for(int i = 0; i<n; i++) cin >> n_permitation[i];
    n_p(n);
}