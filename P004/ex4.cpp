#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(void){
    //a
    cout << "Maior valor de uma variavel do tipo float: " << numeric_limits<float>::max() << endl;
    cout << "Menor valor de uma variavel do tipo float: " << numeric_limits<float>::min() << endl;
    //b
    float pif = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461;
    cout << "pif: " << pif << endl;
    //c
    cout << fixed << setprecision(2) << "pif: " << pif << endl;
    cout << fixed << setprecision(4) << "pif: " << pif << endl;
    cout << fixed << setprecision(8) << "pif: " << pif << endl;
    cout << fixed << setprecision(16) << "pif: " << pif << endl;
    //d
    double pid = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461;
    cout << fixed << setprecision(2) << "pid: " << pid << endl;
    cout << fixed << setprecision(4) << "pid: " << pid << endl;
    cout << fixed << setprecision(8) << "pid: " << pid << endl;
    cout << fixed << setprecision(16) << "pid: " << pid << endl;
    //e
    
    return 0;
}

