#include <iostream>
using namespace std;

class MyData {
private:
    int data;

public:
    void setData(int d) {
        data = d;
    }

    void displayData();
};

void MyData::displayData() {
    cout << "Data: " << data << endl;
}

int main() {
    MyData obj;
    obj.setData(42);
    obj.displayData();

    return 0;
}
