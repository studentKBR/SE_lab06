#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

       /** @brief Creating class of Complex Value
       *@param aRe - Real part of complex value
       *@param aIm - Imagine part of complex value
       */

class Complex
{
       /**@param Re - Real part of complex value
       */
       double Re;
       /**@param Im - Imagine part of complex value
       */
       double Im;
public:
       /**@brief Complex Value class constructor
       */
       Complex (double aRe = 0, double aIm = 0);
       Complex (const Complex&);
       /**@brief Complex Value class destructor
       */
      ~Complex();

       void Set(double aRe, double aIm = 0);
       operator double();
       /**@return Return abs of complex value
       */
       double abs();
       /**@brief Friend Operator for inserting complex value in stream
       */
       friend istream& operator >> (istream&, Complex&);
       /**@brief Operator sums one complex value with other
       */
       friend ostream& operator << (ostream&, Complex&);
       /**@brief Operator sums one complex value with other
       */
       Complex operator + (const Complex&);
       /**@brief Operator substracts one complex value from other
       */
       Complex operator - (const Complex&);
       	/**@brief Operator sums real value to complex value
	   */
       Complex operator + (const double&);
	   /**@brief Friend Operator for summinh two complex values
	   */
       friend Complex operator + (const double&, const Complex&);
       /**@brief Operator substracts real value from complex value
       */
       friend Complex operator * (const double&, const Complex&);
       /**@brief Operator divides one complex value by real value
	   */
       friend Complex operator - (const double&, const Complex&);
	   /**@brief Operator for multiplying one complex value to other
	   */
       Complex operator - (const double&);
       /**@brief Friend Operator substracts one complex value from other
	   */
       Complex operator * (const Complex&);
        /**@brief Operator for multiplying complex value on real value
	   */
       Complex operator * (const double&);
       Complex operator / (const double&);

       Complex& operator += (const Complex&);
       Complex& operator -= (const Complex&);
       Complex& operator *= (const Complex&);
       Complex& operator += (const double&);
       Complex& operator -= (const double&);
       Complex& operator *= (const double&);
       Complex& operator /= (const double&);
       Complex& operator = (const Complex&);
       Complex& operator = (const double&);
};
#endif
