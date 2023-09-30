#include <iostream>
using namespace std;

int main (){
    int f ;
    cin>>f;
    if(f >=0 && f <=9){
        cout << "Satuan" ;
    }
    else if(f >=10 && f <=99){
        cout << "Puluhan" ;
    }
    else if(f >=100 && f <=999){
        cout << "Ratusan" ;
    }else {
        cout << "Tidak Tahu" ;
    }
    return 0;
}
