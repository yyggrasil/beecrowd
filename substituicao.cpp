#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x[3], aux;

    for (int i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = ";
        cin >> aux;
        if (aux > 0)
        {
            cout  << aux << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}
