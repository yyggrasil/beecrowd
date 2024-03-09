#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int pulo, canos, atual, prox;
    cin >> pulo;
    cin >> canos;
    
    cin >> atual;
    
    bool win = atual;

    for (int i = 0; i < canos-1 && win; i++)
    {
        cin >> prox;
        win = abs(atual - prox) <= pulo;
        atual = prox;
    }
    if (win)
    {
        cout << "YOU WIN" << endl;
    }else{
        cout << "GAME OVER" << endl;
    }
    

    return 0;
}
