#include <iostream>

using namespace std;
int call_count = 0;
int fibo(int n){
    call_count += 1;
    if (n == 1) {
        return 1;
    }
    else if (n <= 0)
    {
        return 0;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
    
int main(int argc, char const *argv[])
{
    int n, j;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        call_count = 0;
        cin >> j;
        int result = fibo(j);
        cout << "fib(" << j << ") = " << call_count-1 << " calls = " << result << endl;
    }
}