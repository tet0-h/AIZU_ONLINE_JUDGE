#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v.at(i);
        
    }
    for(int t = 0; t < n; t++){
        if(t != n - 1){
            cout << v[n - t - 1] << " ";
        }else{
            cout << v[n - t - 1];
        }
    }
}
