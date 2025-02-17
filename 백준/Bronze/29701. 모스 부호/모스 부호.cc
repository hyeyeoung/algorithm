#include <iostream>
#include <map>
#include <string>
using namespace std;
map <string, char> Mos;

void DefineMap(){
    Mos.insert({ ".-",	'A' });
    Mos.insert({ "-...",	'B' });
    Mos.insert({ "-.-.",	'C' });
    Mos.insert({ "-..",	'D' });
    Mos.insert({ ".",		'E' });
    Mos.insert({ "..-.",	'F' });
    Mos.insert({ "--.",	'G' });
    Mos.insert({ "....",	'H' });
    Mos.insert({ "..",	'I' });
    Mos.insert({ ".---",	'J' });
    Mos.insert({ "-.-",	'K' });
    Mos.insert({ ".-..",	'L' });
    Mos.insert({ "--",	'M' });
    Mos.insert({ "-.",	'N' });
    Mos.insert({ "---",	'O' });
    Mos.insert({ ".--.",	'P' });
    Mos.insert({ "--.-",	'Q' });
    Mos.insert({ ".-.",	'R' });
    Mos.insert({ "...",	'S' });
    Mos.insert({ "-",		'T' });
    Mos.insert({ "..-",	'U' });
    Mos.insert({ "...-",	'V' });
    Mos.insert({ ".--",	'W' });
    Mos.insert({ "-..-",	'X' });
    Mos.insert({ "-.--",	'Y' });
    Mos.insert({ "--..",	'Z' });
    Mos.insert({ ".----",	'1' });
    Mos.insert({ "..---",	'2' });
    Mos.insert({ "...--",	'3' });
    Mos.insert({ "....-",	'4' });
    Mos.insert({ ".....",	'5' });
    Mos.insert({ "-....",	'6' });
    Mos.insert({ "--...",	'7' });
    Mos.insert({ "---..",	'8' });
    Mos.insert({ "----.",	'9' });
    Mos.insert({ "-----",	'0' });
    Mos.insert({ "--..--",',' });
    Mos.insert({ ".-.-.-",'.' });
    Mos.insert({ "..--..",'?' });
    Mos.insert({ "---...",':' });
    Mos.insert({ "-....-",'-' });
    Mos.insert({ ".--.-.",'@' });

}

int main(){
    DefineMap();
    int n;
    cin >> n;
    string result = "";
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        result += Mos[tmp];
    }
    cout << result;
}