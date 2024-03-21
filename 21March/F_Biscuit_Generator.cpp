#include <iostream>
using namespace std;

int main() 
{
    int A, B, T;
    cin >> A >> B >> T;

    int times = T / A;
    int biscuits = times * B;

    cout << biscuits << endl;

    return 0;
}
