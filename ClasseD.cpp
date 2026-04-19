#include <iostream>
#include <string>
using namespace std;

class ClasseD {
    private:
        int D1;
        string D2;

    public:
        int getD1() { return D1; }
        void setD1(int val) { D1 = val; }

        string getD2() { return D2; }
        void setD2(string val) { D2 = val; }

        void MD1() {
            cout << "MD1" << endl;
        }

        void MD2() {
            cout << "MD2" << endl;
        }

        void MD3() {
            cout << "MD3" << endl;
        }
};