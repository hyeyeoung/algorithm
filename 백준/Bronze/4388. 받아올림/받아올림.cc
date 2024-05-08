#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
void reverse(char* arr){
    int left = 0, right = strlen(arr)-1;
    while(left <= right){
        swap(arr[left], arr[right]);
        left++; right--;
    }
}

int main(){
    char a[12]; char b[12];
    while(1){
        memset(a,' ',sizeof(a));
        memset(b,' ',sizeof(b));
        cin >> a >> b;
        if (a[0] == '0' && b[0] == '0') break;
        if ((a[0] == '0' && b[0] !='0') ||(a[0] != '0' && b[0] =='0')){ cout << 0 <<'\n'; continue;}

        reverse(a), reverse(b);
        int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
        
        int cnt = 0;
        int carry = 0;
        for(int i = 0; i<len; i++){
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            if(sum < 0) sum += '0';
            if(sum > 9){
                cnt++;
                carry = 1;
            }
            if(sum >= 0 && sum <= 9) carry = 0;

        }
        cout << cnt <<'\n';
    }
}