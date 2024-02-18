// Napisz funkcję, która wyświetli liczby całkowite od n do 1
#include <iostream>
using namespace std;
void reverse(int n)
{
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        cout << n;
        return reverse(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    reverse(n);
}