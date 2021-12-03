#include <iostream>
#include <vector>
using namespace std;

int main(){
 
    string s;
    vector<string> vecS;
    vector<int> vecAns;
    
    while (1) {
        cin >> s;
        if(s.compare("0") == 0){
            break;
        }
        vecS.push_back(s);
    }
    
    for (int i=0; i<vecS.size(); i++) {
        int ans=0;
        string tmp =vecS[i];
        for (int j=0; j<tmp.length(); j++) {
            ans+=tmp[j]-'0';
        }
        vecAns.push_back(ans);
    }
    
    for (const auto& e : vecAns ) {
        cout << e << endl;
    }
}
