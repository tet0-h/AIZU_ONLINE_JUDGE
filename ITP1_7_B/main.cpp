#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n,x;
    vector<int> ans;
    while (1) {
        cin >> n >> x;
        if(n==0&&x==0){
            break;
        }
        int count=0;
        for (int i=1; i<=n; i++) {
            for (int j=i+1; j<=n; j++) {
                for (int k=j+1; k<=n; k++) {
                    if(i+j+k==x){
                        count++;
                    }
                }
            }
        }
        ans.push_back(count);
        count=0;
    }
    
    for(const auto& e:ans){
        cout << e << endl;
    }
}
