#include "main.h"
#include <iostream>

using namespace std;
ListCustomer LC;
ListPakaian LP;
string id;

adrCustomer C;
adrPakaian P;
infotypeCustomer x;

void menuAdmin(){
    int option=-99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Admin============ " << endl;
        cout << "|| 1. Parent                 ||" << endl;
        cout << "|| 2. Child                  ||" << endl;
        cout << "|| 0. back                   ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;
        switch(option) {
           case 1  :
              cout << "memilih pilihan 1" << endl;
              system("pause");
              menuParent();
              continue;
           case 2  :
              cout << "memilih pilihan 2" << endl;
              system("pause");
              menuChild();
              continue;
           case 0  :
              cout << "Kembali ke menu utama" << endl;
              break;
           default :
              cout << "Pilihan tidak valid!" << endl;
              system("pause");
        }
    }
}

void menuParent(){
    int option=-99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Parent========================== " << endl;
        cout << "|| 1. insert first                              ||" << endl;
        cout << "|| 2. insert last                               ||" << endl;
        cout << "|| 3. insert (sesuai urutan)                    ||" << endl;
        cout << "|| 4. hapus cutomer first                       ||" << endl;
        cout << "|| 5. hapus customer last                       ||" << endl;
        cout << "|| 6. tampilkan semua customer                  ||" << endl;
        cout << "|| 0. back                                      ||" << endl;
        cout << "================================================== " << endl;
        cout << "Tentukan Pilihan anda : ";
        cin >> option;
        switch(option) {
           case 1  :
              system("cls");
              cout << "=== Insert Customer First ===" << endl;
              cout << "Nama: ";
              cin >> x.nama;
              cout << "ID: ";
              cin >> x.id;
              C = createCustomer(x);
              insertCustomerFirst(LC, C);
              cout << "Customer berhasil ditambahkan!" << endl;
              system("pause");
              break;
           case 2  :
              system("cls");
              cout << "=== Insert Customer Last ===" << endl;
              cout << "Nama: ";
              cin >> x.nama;
              cout << "ID: ";
              cin >> x.id;
              C = createCustomer(x);
              insertCustomerLast(LC, C);
              cout << "Customer berhasil ditambahkan!" << endl;
              system("pause");
              break;
           case 3  :
              system("cls");
              cout << "=== Insert Customer Sorted ===" << endl;
              cout << "Nama: ";
              cin >> x.nama;
              cout << "ID: ";
              cin >> x.id;
              C = createCustomer(x);
              insertCustomerSorted(LC, C);
              cout << "Customer berhasil ditambahkan!" << endl;
              system("pause");
              break;
           case 4  :
              system("cls");
              deleteCustomerFirst(LC, C);
              system("pause");
              break;
           case 5  :
              system("cls");
              deleteCustomerLast(LC, C);
              system("pause");
              break;
           case 6  :
              system("cls");
              showAllCustomer(LC);
              system("pause");
              break;
           case 0  :
              cout << "kembali ke menu sebelumnya" << endl;
              break;
           default :
              cout << "Pilihan tidak valid!" << endl;
              system("pause");
        }
    }
}

void menuChild(){
    int option=-99;
    string idP;
    string jenis;
    int berat;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Child==================================== " << endl;
        cout << "|| 1. insert first                                         ||" << endl;
        cout << "|| 2. insert last                                          ||" << endl;
        cout << "|| 3. hapus pakaian first                                  ||" << endl;
        cout << "|| 4. hapus pakaian last                                   ||" << endl;
        cout << "|| 5. tampilkan semua pakaian                              ||" << endl;
        cout << "|| 0. back                                                 ||" << endl;
        cout << "============================================================ " << endl;
        cout << "Tentukan pilihan anda : ";
        cin >> option;
        switch(option) {
           case 1  :
              system("cls");
              cout << "=== Insert Pakaian First ===" << endl;
              cout << "ID Pakaian : "; cin >> idP;
              cout << "Jenis      : "; cin >> jenis;
              cout << "Berat      : "; cin >> berat;
              P = createPakaian(idP, jenis, berat);
              insertPakaianFirst(LP, P);
              cout << "Pakaian berhasil ditambahkan!" << endl;
              system("pause");
              break;
           case 2  :
              system("cls");
              cout << "=== Insert Pakaian Last ===" << endl;
              cout << "ID Pakaian : "; cin >> idP;
              cout << "Jenis      : "; cin >> jenis;
              cout << "Berat      : "; cin >> berat;
              P = createPakaian(idP, jenis, berat);
              insertPakaianLast(LP, P);
              cout << "Pakaian berhasil ditambahkan!" << endl;
              system("pause");
              break;
           case 3  :
              system("cls");
              deletePakaianFirst(LP, P);
              system("pause");
              break;
           case 4  :
              system("cls");
              deletePakaianLast(LP, P);
              system("pause");
              break;
           case 5  :
              system("cls");
              showAllPakaian(LP);
              system("pause");
              break;
           case 0  :
              cout << "kembali ke menu sebelumnya" << endl;
              break;
           default :
              cout << "Pilihan tidak valid!" << endl;
              system("pause");
        }
    }
}
