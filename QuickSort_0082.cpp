#include <iostream>
using namespace std;

//array of integers to hold values
//mendeklarasikan variabel global
int arrr[20];
int cmp_count = 0; //jumlah komparasi
int mov_count = 0;  //jumlah gerak data
int n;

void input() {
    while (true) {
        cout << "masukan panjang element array : ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nmaksimum panjang array adalah 20" << endl;
    }

    cout << "\n-------------------" << endl;
    cout << "\nenter array element" << endl;
    cout << "\n-------------------" << endl;
}