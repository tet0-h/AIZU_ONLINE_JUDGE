#include <iostream>
using namespace std;

int main(){
    char ch;
    int counter[26]={0};
    while (cin >> ch) {
        if(isupper(ch)){
            int num=ch-'A';
            counter[num]++;
        }else if (islower(ch)){
            int num=ch-'a';
            counter[num]++;
        }
    }
    for (int i=0; i<26; i++) {
        int tmp = 'a'+i;
        cout << char(tmp) << " : " << counter[i] << endl;
    }
}
