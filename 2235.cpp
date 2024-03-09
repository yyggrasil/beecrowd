#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int c1,c2,c3;

    cin >> c1;
    cin >> c2;
    cin >> c3;

    if (c1==c2 || c1==c3 || c2==c3)
    {
        cout << "S" << endl;
    }else
    {
        int max = std::max({c1,c2,c3});
        if (2*max - c1-c2-c3 == 0)
        {
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }
        
    }

    return 0;
}