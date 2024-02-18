// Napisz funkcję, która wypisze na ekranie n znaków *.
#include <iostream>
using namespace std;
void gwiazdki(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << '*';
        gwiazdki(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    gwiazdki(n);
}