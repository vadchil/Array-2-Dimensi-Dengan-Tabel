#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string data[20][20];
    int baris;

    cout << "Tentukan Banyaknya Data : ";
    cin >> baris;
    cout << endl;

    for(int a=0; a<baris; a++)
    {
        for(int b=0; b<2; b++)
        {
            cout << "Nama Lengkap Anda : ";
            getline(cin >> ws, data[a][b]);
            b++;
            cout << "NIM Anda : ";
            cin >> data[a][b];
            b++;
            cout << "Alamat Anda : ";
            getline(cin >> ws, data[a][b]);
            cout << endl;
        }
    }
    for(int c=0; c<baris; c++)
    {
        for(int d=0; d<2; d++)
        {
            cout << data[c][d] << setw(15);
            d++;
            cout << data[c][d] << setw(15);
            d++;
            cout << data[c][d] << endl;
        }
    }
    return 0;
}
