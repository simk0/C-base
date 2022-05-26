#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int A[100], n, Max, Min, sum, i;
    bool found = false;
    n = rand() % (15 - 1 + 1) + 1;

    cout << "Massiv A:\n";
    for (i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }

    Max = A[0];
    for (i = 0; i < n; i++)
    {
        if (Max < A[i])
        {
            Max = A[i];
        }
    }
    Min =A[0];
    for (i = 0; i < n; ++i)
    {
        if (A[i] < Min)
        {
            Min = A[i];
        }
    }
    sum = 0;

    for (i = 1; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {

            found = true;
            break;
        }
    }
    if (found) {
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0)
                sum += A[i];

        }
    cout << "\n";
    cout << "\nSum of even elements = " << sum << "\n";
    }
   
   
    cout << "\nMax = " << Max << "\n";
    cout << "\nMin = " << Min << "\n";
    cout << "\nNumber = " << n << "\n";

    system("pause");
    return 0;
}