#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int z;
    cin >> z;
    if (z%2==0){
        cout << "Genap\n";
    }
    else if (z%2==1){
        cout << "Ganjil\n";
    }
    return 0;
}
