#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H,W;
    vector<int> h;
    vector<int> w;
    
    while (1) {
        cin >> H >> W;

        if(H == 0 && W == 0){
            break;
        }
        h.push_back(H);
        w.push_back(W);
    }
    int count = 0;
    for(auto itr=h.begin(); itr != h.end(); itr++){
        for(int t = 0; t < h[count]; t++){
            for (int i = 0; i < w[count]; i++) {
                printf("#");
            }
            printf("\n");
        }
        count++;
        printf("\n");
    }
}
