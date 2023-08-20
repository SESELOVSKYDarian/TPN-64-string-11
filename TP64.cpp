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
    string resultado="";
    for (int i = 0; i < f.size(); i++)
    {
        if (vocal.find(f[i]) != string::npos)
        {
            resultado += 'V';
        }
        if (consonante.find(f[i]) != string::npos)
        {
            resultado += 'C';
        }
        if (f[i] == 'Y')
        {
            resultado += 'S';
        }
    }
    return resultado;
}
