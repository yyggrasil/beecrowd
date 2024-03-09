#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    float M[12][12];

    int linha;
    cin >> linha;

    char op;
    cin >> op;

    // insercao na matrix
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    
    float soma=0;
    for (int i = 0; i < 12; i++)
    {
        soma += M[linha][i];
    }
    
    if (op == 'M')
    {
        soma = soma/12;
    }
    
    cout << setprecision(1) << fixed << soma << endl;
    return 0;
}
