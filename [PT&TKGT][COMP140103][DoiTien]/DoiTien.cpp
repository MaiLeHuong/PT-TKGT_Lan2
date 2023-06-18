#include <iostream>
using namespace std;
int chuan[10] = { 500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000 };
int doi[10];
int main()
{
    int tien;
    cout << "Moi nhap so tien can doi: ";
    cin >> tien;
    if (tien < 1000)
    {
        cout << "Khong hop le";
        return 0;
    }

    int muc;
    for (int i = 0; i <= 8; i++)
    {
        if (tien >= chuan[i])
        {
            muc = i;
            break;
        }
    }
    for (int i = muc; i <= 8; i++)
    {
        while (tien >= chuan[i] && i <= 8)
        {
            doi[i]++;
            tien -= chuan[i];
        }
        if (tien == 0)
        {
            break;
        }
    }
    cout << '\n';
    for (int i = 0; i <= 8; i++)
    {
        if (doi[i] != 0)
            cout << "Menh gia "  << chuan[i] << ": " << doi[i] << " to" << '\n';
    }
}