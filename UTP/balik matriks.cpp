#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int g,c;
    cin >> g >> c;
    
    int matrix[g][c];
    
    for (int y=0; y<g; y++){
        for (int z=0; z<c; z++){
            cin >> matrix [y][z];
        }
    }
    for (int y=g-1; y>=0; y--){
        for (int z=c-1; z>=0; z--){
            cout << matrix [y][z]<< " ";
        }
        cout << endl;
    }
    return 0;
}
