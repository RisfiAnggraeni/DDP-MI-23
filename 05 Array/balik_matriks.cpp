#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin >> a >> b;
    
    int matrix[a][b];
    
    for (int y=0; y<a; y++){
        for (int z=0; z<b; z++){
            cin >> matrix [y][z];
        }
    }
    for (int y=a-1; y>=0; y--){
        for (int z=b-1; z>=0; z--){
            cout << matrix [y][z]<< " ";
        }
        cout << endl;
    }
    return 0;
}
