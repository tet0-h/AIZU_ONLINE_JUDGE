#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
   
    int d = 0;
    vector<long> D(n);
    for (int i=0; i < n; i++) {
        cin >> d;
        D[i] = d;
    }
    long long int sum = 0;
    long min = D[0];
    long max = D[0];
    for (auto itr = D.begin(); itr != D.end(); itr++) {
        sum += *itr;
        if(min > *itr){
            min = *itr;
        }
        if(max < *itr){
            max = *itr;
        }
    }
    
    cout << min << " " << max << " " << sum << endl;
   // cout << *min_element(begin(D), end(D)) << " " << *max_element(begin(D), end(D)) << " " << sum << endl;
}
