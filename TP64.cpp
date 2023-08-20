#include <iostream>
#include <string>
using namespace std;
string DetectorDeLetras(string f);
int main()
{
    string frase;
    cout << "Ingrese letras: ";
    getline(cin, frase);
    cout << DetectorDeLetras(frase) << endl;
}

string DetectorDeLetras(string f)
{
    string vocal= "AEIOU";
    string consonante= "BCDFGHJKLMNPQRSTVWXZ";
    for (int i = 0; i < f.size(); i++)
    {
        if (vocal.find(f[i]) != string::npos)
        {
            f[i] = 'V';
        }
        else if (consonante.find(f[i]) != string::npos)
        {
            f[i] = 'C';
        }
        else if (f[i] == 'Y')
        {
            f[i] = 'S';
        }
    }
    return f;
}