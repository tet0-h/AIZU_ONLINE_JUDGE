#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string w,t;
    int count=0;
    cin >> w;
    while (t != "END_OF_TEXT") {
        cin >> t;
        if(strcasecmp(t.c_str(),w.c_str())==0){
            count++;
        }
    }
    cout << count << endl;
}
