#include <iostream>
using namespace std;

class ClasseB {
private:
    int B1;   // Atributo int B1
    float B2; // Atributo float B2 

public:
    // Métodos Get e Set 
    int getB1() { return B1; }
    void setB1(int val) { B1 = val; }

    float getB2() { return B2; }
    void setB2(float val) { B2 = val; }

    // Métodos que imprimem o próprio nome 
    void MB1() {
        cout << "MB1" << endl;
    }

    void MB2() {
        cout << "MB2" << endl;
    }

    void MB3() {
        cout << "MB3" << endl;
    }
};