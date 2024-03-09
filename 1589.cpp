#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int r1, r2, T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> r1;
        cin >> r2;
        cout << r1+r2 << endl;
    }
    
    return 0;
}