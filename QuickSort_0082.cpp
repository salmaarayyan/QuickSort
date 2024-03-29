#include <iostream>
using namespace std;

//array of integers to hold values
//mendeklarasikan variabel global
int arr[20];
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

void q_short(int low, int high) {
    int temp;
    int pivot, i, j;
    if (low > high) {  //step 1
        return;
    }

    pivot = arr[low];  //step 2
    i = low + 1;  //step 3
    j = high;  //step 4

    while (i <= j) {  //step 10
        //mencari elemen yang lebih besar dari pivot
        while ((arr[i]<= pivot) && (i <= high)){  //step 5
            i++;  //step 6
            cmp_count++;
        }  
    }   cmp_count++;
    //cari elemen yang kurang dari atau sama dengan pivot
    while ((arr[j] > pivot) && (j >= low)) {  //step 7
        j--;  //step 8
        cmp_count++;
    }  
    cmp_count++;
    if (i < j)  //step 9
    {
        //menukar elemen index i dgn index j
        swap(low, j);
    }

    //panggilan rekursif mengurutkan sub array kiri
    q_short(low, j - 1);  //step 12

    //panggilan rekursif mengurutkan sub array kanan
    q_short(j + 1, high);  //step 13
}

void display() {
    cout << "\n--------------------" << endl;
    cout << "sorted array" << endl;
    cout << "----------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nnumber of comparasions : " << cmp_count << endl;
    cout << "number of data movements : " << mov_count << endl;
}

int main() {
    char ch;

    do {
        input();
        q_short(0, n -1);
        display();
        cout << "\n\ndo u want to continue ? (y/n) : ";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
            break;

        system("pause");
        system("cls");
    }while (true);
    
    return 0;
}