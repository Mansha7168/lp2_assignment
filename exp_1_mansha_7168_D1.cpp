#include <iostream>

using namespace std;

class NumValid {
public:
    void validate() {
        int cnt = 0;
        int num;
        do {
            cout << "Enter num (or enter a non-numeric value to stop): ";
            if (!(cin >> num)) {
                break; // Exit loop if non-numeric value is entered
            }
            if (num % 8 == 0) {
                cnt++;
            }
        } while (true);
        cout << "Total " << cnt << " nums are divisible by 8." << endl;
    }
};

int main() {
    NumValid obj1;
    obj1.validate();
    return 0;
}
