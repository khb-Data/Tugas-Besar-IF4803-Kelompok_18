#include "main.h"
#include "customer.h"
#include "pakaian.h"
#include <iostream>

using namespace std;
liastCustomer LC;
adrCustomer C;
infotypeCustomer x;
string id, nama;


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
              menuParent();
              continue;
           case 2  :
              cout << "memilih pilihan 2" << endl;
              menuChild();
              continue;
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
              cout << "Masukkan nama customer: ";
              cin >> nama;  
              cout << "Masukkan id customer: ";
              cin >> id;
              C = createCustomer(x.nama, x.id);
              insertCustomerFirst(LC,C);
            system("cls");
              break;
           case 2  :
             system("cls");
              cout << "Masukkan nama customer: ";
              cin >> nama;  
              cout << "Masukkan id customer: ";
              cin >> id;
              C = createCustomer(nama, id);
              insertCustomerLast(LC,C);
            system("cls");
              break;
            case 3  :
              cout << "memilih pilihan 3" << endl;
              insertCustomerSorted(LC,C);

              break;
            case 4  :
              system("cls");
                deleteCustomerFirst(LC,C);

              break;
            case 5  :
                system("cls");
                deleteCustomerLast(LC,C);

              break;
            case 6  :
              system("cls");
                showAllCustomer(LC);

              break;
            case 0  :
              cout << "kembali ke menu sebelumnya" << endl;
              break;

        }
    }
}

void menuChild(){
    int option=-99;
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
              cout << "memilih pilihan 1" << endl;
              insertPakaianFirst(LP,P);

              break;
           case 2  :
              cout << "memilih pilihan 2" << endl;
                insertPakaianLast(LP,P);    

              break;
            case 3  :
              cout << "memilih pilihan 3" << endl;
                deletePakaianFirst(LP,P);

              break;
            case 4  :
              cout << "memilih pilihan 4" << endl;
                deletePakaianLast(LP,P);

              break;
            case 5  :
              cout << "memilih pilihan 5" << endl;
                showAllPakaian(LP);

              break;
           case 0  :
              cout << "kembali ke menu sebelumnya" << endl;
              break;
        }
    }
}