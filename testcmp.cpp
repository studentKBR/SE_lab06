#include <iostream>
#include "mycomplex.h"

using namespace std;
    /** @brief Main function for Testing complex numbers
    *
    */
int main()
{
    /** @param A - Complex value with Real = 0 and Imagine = 0
    * @param B - Complex value with Real = -4 and Imagine = 0
    * @param C - Complex value with Real = 23.0 and Imagine = 0
    */
    Complex A, B(-4), C(23.0, 45.9);

    cout << A << "," << B << "," << C << endl;
    A = B + C;
    cout << "A = B + C, A = " << A << endl;              //Output for sum of A, B and C

    Complex M = B - C;                                   ///<Creating new complex value M
    cout << "M = B - C, M = " << M << endl;              // Output for difference between B and C
    cout << " M * A = " << M * A << endl;                // Output for multiply of M and A
    cout << " M / 4.45= " << M / 4.45 << endl;           ///<Output for division of M by 4.45
    ///@param D - Complex value entered by user
    Complex D;
    cout << "Enter complex number D = ";
    cin >> D;                                            ///<Waiting for entering D
    A += C + D;
    cout << "D = " << D << "\nA = " << A << endl;        //Output for sum of A, D and C

    return 0;
}
