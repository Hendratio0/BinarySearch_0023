#include <iostream>
using namespace std;

int elemen[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;
        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }
}

{
    cout << "\n==============================\n";
    cout << "Masukkan Elemen Array \n";
    cout << "==============================\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> elemen[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (elemen[j] > elemen[j + 1])
            {
                int temp = elemen[j];
                elemen[j] = elemen[j + 1];
                elemen[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= nPanjang - 1);
}

void display()
{
    cout << "==============================\n";
    cout << "Elemen Array Setelah Diurutkan (Asc)\n";
    cout << "==============================\n";
    for (int j = 0; j < nPanjang; j++)
    {
        cout << elemen[j];
        if (j < nPanjang - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n==============================\n";
        cout << "Pencarian Binary Search\n";
        cout << "==============================\n";

        int item;
        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> item;

        int low = 0;
        int high = nPanjang - 1;
    }
    do
    {
        int mid = (low + high) / 2;

        if (elemen[mid] == item)
        {
            cout << "\nElemen " << x << " ditemukan pada indeks ke-" << mid << ".\n";
            return;
        }
        if (x < element[mid])
        {
            high = mid - 1;
        }
        if (x > element[mid])
        {
            low = mid + 1;
        }
    } while (low <= high);

    if (low > high)
    {
        cout << "\n[x] Elemen " << x << " tidak ditemukan dalam array.\n";
    }
    cout << "\nIngin mencari lagi? (y/n): ";
    cin >> ulang;
    while (ulang == 'y' || ulang == 'Y')
        ;
}
