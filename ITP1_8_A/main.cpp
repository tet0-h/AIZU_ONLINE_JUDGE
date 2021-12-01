#include <iostream>
using namespace std;

int main(){
 
    string s,ans;
    getline(cin, s);
    
    for (int i=0; i<s.length(); i++) {
        if( islower(s[i])){
            ans.push_back(toupper(s[i]));
        }else if (isupper(s[i])){
            ans.push_back(tolower(s[i]));
        }else{
            ans.push_back(s[i]);
        }
    }
    cout << ans << endl;
}
