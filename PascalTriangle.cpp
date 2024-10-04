#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите кол-во строк треугольника Паскаля: ";
    int N;
    cin >> N;

    for (int i = 0; i <= N; i++) 
    {
        for (int r = 0; r < N - i; r++) cout << "  ";

        int val = 1;
        for (int k = 1; k <= i; k++) {
            cout << val << "   ";
            val = val * (i - k) / k;
        }
        cout << endl;
    }
}