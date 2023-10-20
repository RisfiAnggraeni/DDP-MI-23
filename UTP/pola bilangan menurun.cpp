#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    for(int o=x; o>=y; o+=z){
        cout << o << " ";
    }
    return 0;
}
