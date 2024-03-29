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

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

//menukar elemen index x dengan elemen inddex y
void swap(int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}