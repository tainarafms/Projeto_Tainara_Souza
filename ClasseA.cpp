#include <iostream>
using namespace std;

class ClasseA {
    private:
        int A1;
        float A2;

    public:
        void MA1() {
            cout << "MA1" << endl;
        }

        void MA2() {
            cout << "MA2" << endl;
        }

        void MA3() {
            cout << "Alteração a classe A partir do clone" << endl;
        }
};