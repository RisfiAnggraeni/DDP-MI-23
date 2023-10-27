#include <iostream>
using namespace std;

double luas_Segitiga(double alas,double tinggi);
int main () {
    double r;

    cout << luas_Segitiga(10, 5) << endl;
    cout << luas_Segitiga(20, 10) << endl;
    cout << luas_Segitiga(30, 20) << endl;
    
}
double luas_Segitiga(double alas,double tinggi){
    return alas*tinggi/2; 
}