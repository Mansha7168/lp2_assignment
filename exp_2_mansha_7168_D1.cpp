#include <iostream>

using namespace std;

class SumCalc {
private:
    int num;

public:
    SumCalc(int n) {
        num = n;
    }

    int calcSum() {
        int sum = 0;
        int termSum = 0;
        int i = 1;
        
        while (i <= num) {
            termSum += i;
            sum += termSum;
            i++;
        }
        
        return sum;
    }
};

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    SumCalc calc(n);
    cout << "Sum of series where i-th term is sum of first i natural numbers: " << calc.calcSum() << endl;
    
    return 0;
}
