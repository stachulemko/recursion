// Napisz funkcję, która wyświetli liczby całkowite od 1 do n
#include <iostream>
using namespace std;
void integers(int n)
{
    if (n == 1)
    {
        cout << n;
        return;
    }
    else
    {
        integers(n - 1);
        cout << n;
        }
}
int main()
{
    int n;
    cin >> n;
    integers(n);
}