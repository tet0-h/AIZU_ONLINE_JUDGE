#include <iostream>
using namespace std;

int main(){
    int b,f,r,v,n;
    int count[4][3][10] = {0};
    cin >> n;
    
    for(int i=0; i < n; i++){
        cin >> b >> f >> r >> v;
        count[b-1][f-1][r-1] += v;
    }
    
    for (int j=0; j<4; j++) {
        for (int k=0; k<3; k++) {
            for (int l=0; l<10; l++) {
                cout << " " << count[j][k][l];
            }
            cout << endl;
        }
        if(j!=3){
            cout << "####################" << endl;
        }
    }
}
