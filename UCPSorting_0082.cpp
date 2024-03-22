// 1. - dilakukan dengan iterasi dari indeks awal hingga akhir
//    - bandingkan elemen yang disimpan di indeks 0 dengan elemen di indeks 1 di setiap iterasi
//    - tukar nilai jika urutan tidak benar
//    - bandingkan elemen di indeks 1 dengan elemen di indeks 2 dan tukar jika indeks 1 lebih besar dari indeks 2
//    - lakukan sampai elemen terbesar ditempatkan pada posisi yang benar
//    - setelah iterasi selesai, algoritma akan melakukan iterasi selanjutnya dari awal hingga akhir array

// 2. - buat jarak dimana elemen dalam array akan dipisah ke dalam array beberapa sublist
//    - pakai insertion sort untuk mengurutkan sublist - sublistnya
//    - jika sudah, gabungkan kembali dalam 1 array
//    - jika belum terurut, lakukan langkah 1 dan langkah 2
//    - lakukan sampai elemen terurut

// 3.  insertion sort karena insertion sort bekerja dengan cara memindahkan elemen dari array yang tidak terurut ke posisi yang tepat dalam bagian array yang sudah terurut


#include <iostream>
using namespace std;
int salmaa[82];
int n;

void input() { // prosedur untuk input
    while (true) {
        cout << "Masukan banyaknya elemen pada salmaa : "; // Output ke layar
        cin >> n;    // input dari pengguna
        if (n <= 82) // jika n kurang dari atau sama dengan 82
            break;   // keluar dari loop
        else {
            cout << "\nsalmaa hanya bisa maksimal 82 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukan Elemen salmaa " << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {            // looping dengan i dimulai dari 0 hingga n-1 
        cout << "Data ke - " << (i + 1) << ": ";  // output ke layar
        cin >> salmaa[i];                       // memasukan output dari pengguna
    }
}

void selectionsort() {
    // deklarasi variabel
    int i, j, pass;

    for (i = 0; i < n - 1; i++) {  // perulangan pertama (untuk menandai array yang paling besar)
        pass = i; 
        for (j = i + 1; j < n; j++) {  // step 2b didalam perulangan pertama ada perulangan kedua untuk melakukan pengecekan (conditional statement if)
            if (salmaa[j] < salmaa[pass])  // step 2c untuk mencari elemen array yang lebih besar dari elemen array di perulangan pertama
                pass = j;
        }

        // Swap step 3
        int temp = salmaa[pass];
        salmaa[pass] = salmaa[i];
        salmaa[i] = temp;

        cout << "\nPass " << i + 1 << " = ";  // output proses pass
        for (int k = 0; k < n; k++) {
            cout << salmaa[k] << " ";
        }
        cout << endl;
    }

}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen salmaa yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << salmaa[j]; // output setiap elemen salmaa pada garis baru
        if (j < n - 1) {
            cout << "--> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;

}

int main()
{
    input();
    selectionsort();
    display();
    system("pause");
    return 0;
}