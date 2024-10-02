#include <iostream>
using namespace std;
int main()
{
    int number = 12345;
    int reverse = 0;
    do {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    } while (number);
    cout << reverse << endl;
    return 0;
}
