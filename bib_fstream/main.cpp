#include <fstream>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    ofstream ofs;

    ofs.open("file.txt");

    string texto = "O Lorem Ipsum é um texto modelo da indústria tipográfica e.\nLorem Ipsum é um texto modelo da indústria tipográfica e de\nLorem Ipsum é um texto modelo da indústria tipográfica e de\nLorem Ipsum é um texto modelo da indústria tipográfica e de\nO Lorem Ipsum é um texto modelo da indústria tipográfica e.\nLorem Ipsum é um texto modelo da indústria tipográfica e de\nLorem Ipsum é um texto modelo da indústria tipográfica e de\nLorem Ipsum é um texto modelo da indústria tipográfica e de";

    if (ofs.is_open())
    {
        const long double pi = acos(-1.0L);
        ofs <<texto<< endl;
        ofs << pi<<endl;
        ofs.close();
    }
    

    return 0;
}
