#include <iostream>
using namespace std;

int main(){
    bool cards[4][13] = {false};
    char ch;
    int x;
    int n;
    
    cin >> n;
    for (int i=0; i<=n; i++) {
        cin >> ch >> x;
        if(ch == 'S'){
            cards[0][x-1] = true;
        }else if(ch == 'H'){
            cards[1][x-1] = true;
        }else if(ch == 'C'){
            cards[2][x-1] = true;
        }else if(ch == 'D'){
            cards[3][x-1] = true;
        }
    }
    
    for(int j=0; j<4; j++){
        for(int k=0; k<13; k++){
            if(j==0 && cards[j][k] == false){
                cout << 'S' << ' ' << k + 1 << endl;
            }else if(j==1 && cards[j][k] == false){
                cout << 'H' << ' ' << k + 1 << endl;
            }else if(j==2 && cards[j][k] == false){
                cout << 'C' << ' ' << k + 1 << endl;
            }else if(j==3 && cards[j][k] == false){
                cout << 'D' << ' ' << k + 1 << endl;
            }
        }
    }
}
