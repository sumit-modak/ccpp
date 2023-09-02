#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    cout << CHAR_MIN << endl;                                 // Minimum value for an object of type char
    cout << CHAR_MAX << endl;                                  // Maximum value for an object of type char
    cout << SCHAR_MIN << endl;                            // Minimum value for an object of type Signed char
    cout << SCHAR_MAX << endl;                               // Maximum value for an object of type Signed char
    cout << UCHAR_MAX << endl;                              // Maximum value for an object of type Unsigned char
    cout << CHAR_BIT << endl;                              // Number of bits in a char object
    cout << MB_LEN_MAX << endl;                             // Maximum number of bytes in a multi-byte character
    cout << SHRT_MIN << endl;                             // Minimum value for an object of type short int
    cout << SHRT_MAX << endl;                                // Maximum value for an object of type short int
    cout << USHRT_MAX << endl;                                  // Maximum value for an object of type Unsigned short int
    cout << INT_MIN << endl;                                  // Minimum value for an object of type int
    cout << INT_MAX << endl;                                     // Maximum value for an object of type int
    cout << UINT_MAX << endl;                                   // Maximum value for an object of type Unsigned int
    cout << LONG_MIN << endl;                                   // Minimum value for an object of type long int
    cout << LONG_MAX << endl;                                 // Maximum value for an object of type long int
    cout << ULONG_MAX << endl;                                    // Maximum value for an object of type Unsigned long int
    cout << LLONG_MIN << endl;                                   // Minimum value for an object of type long long int
    cout << LLONG_MAX << endl;                                   // Maximum value for an object of type long long int
    cout << ULLONG_MAX << endl;                                   // Maximum value for an object of type Unsigned long long int
    return 0;
}
