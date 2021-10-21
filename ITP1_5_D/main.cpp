#include <iostream>
using namespace std;

int check_num(int i, int n);
int end_check_num(int i, int n);
int include3(int x, int i, int n);

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    if(check_num(i, n) == 0){
        return  0;
    }
}

int check_num(int i, int n){
    int x = i;
    if(x % 3 == 0){
        cout << " " << i;
        if(end_check_num(i, n) == 0){
            return 0;
        }
    }
    if(include3(x, i, n) == 0){
        return  0;
    }
    return  1;
}

int include3(int x, int i, int n){
    if(x % 10 == 3){
        cout << " " << i;
        if(end_check_num(i, n) == 0){
            return 0;
        }
    }
    x /= 10;
    if(x){
        if(include3(x, i, n) == 0){
            return 0;
        }
    }
    if(end_check_num(i, n) == 0){
        return 0;
    }
    return 1;
}

int end_check_num(int i, int n){
    if(++i <= n){
        if(check_num(i, n) == 0){
            return 0;
        }
        return 1;
    }
    cout << endl;
    return 0;
}
