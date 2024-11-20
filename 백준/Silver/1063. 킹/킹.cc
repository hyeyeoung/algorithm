#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string king, stone;
    int n;
    cin >> king >> stone >> n;

    int kingi = 9 - (king[1] - '0'), kingj = king[0] - 'A' + 1;
    int stonei = 9 - (stone[1] - '0'), stonej = stone[0] - 'A' + 1;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(str == "R" && kingj + 1 < 9){
            kingj++;
            if(kingi == stonei && kingj == stonej && (stonej + 1 < 9)) stonej++;
            else if(kingi == stonei && kingj == stonej && stonej + 1 >= 9) kingj--;
        }
        else if(str == "L" && kingj - 1 > 0){
            kingj--;
            if(kingi == stonei && kingj == stonej && (stonej - 1 > 0)) stonej--;
            else if(kingi == stonei && kingj == stonej && stonej -1 <= 0) kingj++;
        }
        else if(str == "B" && kingi + 1 < 9){
            kingi++;
            if(kingi == stonei && kingj == stonej && (stonei + 1 < 9)) stonei++;
            else if(kingi == stonei && kingj == stonej && stonei + 1 >= 9) kingi--;
        } 
        else if(str == "T" && kingi - 1 > 0){
            kingi--;
            if(kingi == stonei && kingj == stonej && (stonei - 1 > 0)) stonei--;
            else if(kingi == stonei && kingj == stonej && stonei -1 <= 0) kingi++;
        }
        else if(str == "RT" && kingj+ 1 < 9 && kingi - 1 > 0){
            kingj++;
            kingi--;
            if(kingi == stonei && kingj == stonej && (stonei - 1 > 0 && stonej + 1 < 9)){ stonei--; stonej++; }
            else if(kingi == stonei && kingj == stonej && (stonei - 1 <= 0 || stonej + 1 >= 9)){ kingi++; kingj--; }
        }
        else if(str == "LT" && kingj - 1 > 0 && kingi - 1 > 0){
            kingj--;
            kingi--;
            if(kingi == stonei && kingj == stonej && (stonei - 1 > 0 && stonej - 1 > 0)){ stonei--; stonej--; }
            else if(kingi == stonei && kingj == stonej && (stonei - 1 <= 0 || stonej - 1 <= 0)){ kingi++; kingj++; }
        }
        else if(str == "RB" && kingj+ 1 < 9 && kingi + 1 < 9){
            kingj++;
            kingi++;
            if(kingi == stonei && kingj == stonej && (stonei + 1 < 9 && stonej + 1 < 9)){ stonei++; stonej++; }
            else if(kingi == stonei && kingj == stonej && (stonei + 1 >= 9 || stonej + 1 >= 9)){ kingi--; kingj--; }
        }
        else if(str == "LB" && kingj - 1 > 0 && kingi + 1 < 9){
            kingj--;
            kingi++;
            if(kingi == stonei && kingj == stonej && (stonei + 1 < 9 && stonej - 1 > 0)){ stonei++; stonej--; }
            else if(kingi == stonei && kingj == stonej && (stonei + 1 >= 9 || stonej - 1 <= 0)){ kingi--; kingj++; }
        }
    }
    cout << char(kingj + 'A' - 1) << 9 - kingi << '\n';
    cout << char(stonej + 'A' - 1) << 9 - stonei;
    
}