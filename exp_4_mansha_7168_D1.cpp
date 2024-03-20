#include <iostream>
using namespace std;

class NumObj {
private:
    int dec;

public:
    NumObj(int d) {
        dec = d;
    }

    void decToBin() {
        int bin[32];
        int num = dec;
        int i = 0;

        if (num == 0)
            bin[i++] = 0;
        else {
            while (num > 0) {
                bin[i++] = num % 2;
                num /= 2;
            }
        }

        cout << "Binary: ";
        while (i > 0) {
            cout << bin[--i];
        }
        cout << endl;
    }
};

int main() {
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;

    NumObj obj(decNum);

    obj.decToBin();

    return 0;
}
