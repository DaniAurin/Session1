#include<iostream>
using namespace std;
int main()
{
    int Mynumber[10];
    int i, j, descending, ascending;

    cout << " Enter 10 Numbers with spaces inbetween!: " << endl;
    cout << " ";
    for (i = 0; i < 10; ++i)
        cin >> Mynumber[i];

    for (i = 0; i < 10; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (Mynumber[i] < Mynumber[j])
            {
                descending = Mynumber[i];
                Mynumber[i] = Mynumber[j];
                Mynumber[j] = descending;
            }
        }
    }
    cout << " Numbers in Descending Order :" << endl;;
    for (i = 0; i < 10; ++i)
    {
        cout << " ";
        cout << Mynumber[i];
        
    }
    for (i = 0; i < 10; ++i)   //  'for' loop is used for sorting the numbers in ascending order
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (Mynumber[i] > Mynumber[j])
            {
                ascending = Mynumber[i];
                Mynumber[i] = Mynumber[j];
                Mynumber[j] = ascending;
            }
        }
    }
    cout << "\n";
    cout <<  " Numbers in Asecending Order :" << endl;;
    for (i = 0; i < 10; ++i)
    {
        cout << " ";
        cout << Mynumber[i];
    }
}