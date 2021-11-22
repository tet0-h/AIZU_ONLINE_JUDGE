#include <iostream>
using namespace std;

int main(){
    
    int n=0;
    int m=0;
    
    cin >> n >> m;
    
    int A[100][100]={0};
    int B[100]={0};

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> A[i][j];
        }
    }
    for (int k=0; k<m; k++) {
        cin >> B[k];
    }
    
    int sum=0;
    for (int l=0; l<n; l++) {
        for (int o=0; o<m; o++) {
            sum += A[l][o]*B[o];
        }
        cout << sum << endl;
        sum=0;
    }
}
