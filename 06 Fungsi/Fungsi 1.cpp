#include <iostream>
using namespace std;

void myFunction () {
    cout << " ijust got executed" << endl;
}

void myFunction2(string name = "Risfi", int umur = 12) {
    cout << "Nama saya: " << name << " umur saya: "<< umur << endl;

}
int myFunction3(int x){
    return 5 + x;
}

int main (){
    myFunction();
    myFunction();
    myFunction();

    myFunction2("Risfi");
    myFunction2("sigit", 19);
    myFunction2("risfi", 18);
    myFunction2("revina", 14);

    cout << myFunction3(17) << endl;
    cout << myFunction3(25) << endl;
    cout << myFunction3(30) << endl;

    int A = myFunction3(18);
    cout << A << endl;

    return 0;

}