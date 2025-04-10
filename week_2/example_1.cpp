// week 2 example 1
/* Characterize the error in the following code as 
*   1. Build-time error 
*   2. Run-time error
*   3. Undefined behavior
*/

#include <iostream>


int main() {
    const int A_CONSTANT;
    cout << A_CONSTANT << "\n";
    
    return 0;
}
