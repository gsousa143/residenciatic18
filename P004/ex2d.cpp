#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    wchar_t c;
    cout << "Num - ASCII - OCT - HEX"<<endl;
    c = 'ç';
    wcout << c << " - " << int(c) << " - " << oct << int(c) << " - " << hex << int(c) << endl;
    c = 'ã';
    wcout << c << " - " << int(c) << " - " << oct << int(c) << " - " << hex << int(c) << endl;
    return 0;
}