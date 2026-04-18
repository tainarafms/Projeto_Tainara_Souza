#include <iostream>
using namespace std;

class ClasseA {
private:
    int A1;   // Atributo int A1 
    float A2; // Atributo float A2 

public:
    // Métodos Get e Set 
    int getA1() { return A1; }
    void setA1(int val) { A1 = val; }

    float getA2() { return A2; }
    void setA2(float val) { A2 = val; }

    // Métodos que imprimem o próprio nome
    void MA1() {
        cout << "MA1" << endl;
    }

    void MA2() {
        cout << "MA2" << endl;
    }
};