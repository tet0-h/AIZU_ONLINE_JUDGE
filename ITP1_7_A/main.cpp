#include <iostream>
using namespace std;

int main(){
    
    int m,f,r;
    
    while (1) {
        cin >> m >> f >> r;
        
        if(m==-1&&f==-1&&r==-1){
            break;
        }else if(m==-1||f==-1){
            cout << "F" << endl;
            continue;
        }else if(80 <= m+f){
            cout << "A" << endl;
            continue;
        }else if(65<=m+f){
            cout << "B" << endl;
            continue;
        }else if (50<=m+f){
            cout << "C" << endl;
            continue;
        }else if (30<=m+f){
            if(50<=r){
                cout << "C" << endl;
                continue;
            }
            cout << "D" << endl;
            continue;
        }else{
            cout << "F" << endl;
        }
    }
}
