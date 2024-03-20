
#include <iostream>

using namespace std;

class Room {
private:
    float len;
    float wid;

public:
    void get() {
        cout << "Enter length of room: ";
        cin >> len;
        cout << "Enter width of room: ";
        cin >> wid;
    }

    void display() {
        cout << "Length: " << len << " meters\n";
        cout << "Width: " << wid << " meters\n";
    }

    float area() {
        return len * wid;
    }

    float perimeter() {
        return 2 * (len + wid);
    }
};

int main() {
    const int num_rooms = 5;
    Room rms[num_rooms];
    int count = 0;

    cout << "Enter details for " << num_rooms << " rooms:\n";
    while (count < num_rooms) {
        cout << "Room " << count+1 << ":\n";
        rms[count].get();
        count++;
    }

    cout << "\nDetails of rooms:\n";
    count = 0;
    while (count < num_rooms) {
        cout << "Room " << count+1 << ":\n";
        rms[count].display();
        cout << "Area: " << rms[count].area() << " square meters\n";
        cout << "Perimeter: " << rms[count].perimeter() << " meters\n\n";
        count++;
    }

    return 0;
}
