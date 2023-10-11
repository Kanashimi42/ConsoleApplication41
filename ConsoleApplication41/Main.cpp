#include <iostream>
#include "Matrix.h"
#include "A.h"

using namespace std;

int main() {
    srand(time(NULL));

    int index_i = 0, index_j = 0;

    Matrix<A> a(5, 5), b(5, 5), c(0, 0);

    cout << "a: " << endl;
    a.Init();
    a.Print();
    cout << endl;

    cout << "b: " << endl;
    b.Init();
    b.Print();
    cout << endl;

    cout << "Result (Matrix + obj): " << endl;
    Matrix<A> rez = a + b;
    rez.Print();
    cout << endl;

    cout << "Result (Matrix + 10): " << endl;
    rez = a + 10;
    rez.Print();
    cout << endl;

    cout << "Result (10 + Matrix): " << endl;
    rez = 10 + a;
    rez.Print();
    cout << endl;

    cout << "Result (matrix - matrix): " << endl;
    rez = a - b;
    rez.Print();
    cout << endl;

    cout << "Result (matrix - 10): " << endl;
    rez = a - 10;
    rez.Print();
    cout << endl;

    cout << "Result (10 - matrix): " << endl;
    rez = 10 - a;
    rez.Print();
    cout << endl;

    cout << "Result (matrix * Matrix): " << endl;
    rez = a * b;
    rez.Print();
    cout << endl;

    cout << "Result (Matrix * 10): " << endl;
    rez = a * 10;
    rez.Print();
    cout << endl;

    cout << "Result (10 * Matrix): " << endl;
    rez = 10 * a;
    rez.Print();
    cout << endl;

    cout << "Result (Matrix / Matrix): " << endl;
    rez = a / b;
    rez.Print();
    cout << endl;

    cout << "Result (Matrix / 10): " << endl;
    rez = a / 10;
    rez.Print();
    cout << endl;

    cout << "Result (10 / Matrix): " << endl;
    rez = 10 / a;
    rez.Print();
    cout << endl;

    cout << "Maximum:" << endl;
    a.SearchMax(index_i, index_j);
    cout << "index_i: " << index_i << ", index_j: " << index_j << endl;
    a.PrintIndex(index_i, index_j);
    cout << endl << endl;

    cout << "Minimum:" << endl;
    a.SearchMin(index_i, index_j);
    cout << "index_i: " << index_i << ", index_j: " << index_j << endl;
    a.PrintIndex(index_i, index_j);
    cout << endl << endl;


    return 0;
}