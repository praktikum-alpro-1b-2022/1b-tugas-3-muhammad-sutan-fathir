#include <iostream>
using namespace std;
// program menyelesaikan rumus
int main(){
    int b = 25, x = 15, c = 20;
    double Y;

    cout << "Diketahui:" << endl;
    cout << "b = 25" << endl;
    cout << "x = 15" << endl;
    cout << "c = 20" << endl;
    cout << "Ditanya:" << endl;
    cout << "Y = b*x^2 + 0.5x - c" << endl;
    cout << "Jawab:" << endl;

    Y = b*x*x + 0.5*x - c;
    cout << "Y = " << Y;

    return 0;
}
