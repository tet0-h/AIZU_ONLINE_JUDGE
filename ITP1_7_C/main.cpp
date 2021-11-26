#include <iostream>
using namespace std;

int main(){
    
    int r,c;
    cin >> r >> c;
    
    int ans[101][101] = {0};
    int sum=0;
    
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> ans[i][j];
            sum+=ans[i][j];
            if(j==c-1){
                ans[i][j+1] = sum;
                sum=0;
            }
        }
    }
    
    for (int k=0; k<c+1; k++) {
        for (int l=0; l<r; l++) {
            sum+=ans[l][k];
            if(l==r-1){
                ans[l+1][k]=sum;
                sum=0;
            }
        }
    }
    
    for (int m=0; m<r+1; m++) {
        for (int n=0; n<c+1; n++) {
            if (n==c) {
                cout << ans[m][n] << endl;
            }else{
                cout << ans[m][n] << " ";
            }
        }
    }
}
