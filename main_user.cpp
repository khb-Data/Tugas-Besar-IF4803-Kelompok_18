#include <iostream>
#include <string>
using namespace std;

#include "pakaian.h"
#include "customer.h"
#include "main.h"

void menuUser(){
    int option=-99;
    while (option != 0) {
        system("cls");
        cout << "====== Menu Studi Kasus ==================== " << endl;
        cout << "|| 1. hapus customer     (berdasarkan ID) ||" << endl;
        cout << "|| 2. cari  customer     (berdasarkan ID) ||" << endl;
        cout << "|| 3. hapus pakaian      (berdasarkan ID) ||" << endl;
        cout << "|| 4. cari  pakaian      (berdasarkan ID) ||" << endl;
        cout << "|| 5. tampilkan pakaian  (berdasarkan ID) ||" << endl;
        cout << "|| 0. back                                ||" << endl;
        cout << "============================================ " << endl;
        cout << "Tentukan pilihan anda : ";
        cin >> option;
        switch(option) {
           case 1  :
              cout << "memilih pilihan 1" << endl;
              deleteCustomerByID(LC,id);

              break;
           case 2  :
              cout << "memilih pilihan 2" << endl;
                findCustomer(LC,id);

              break;
            case 3  :
              cout << "memilih pilihan 3" << endl;
                deletePakaianByID(LP,id);

              break;
            case 4  :
              cout << "memilih pilihan 4" << endl;
                findPakaian(LP,id);

              break;
            case 5  :
              cout << "memilih pilihan 5" << endl;
                showAllPakaianUnique(LP);

              break;
             case 0  :
              cout << "kembali ke menu sebelumnya" << endl;
              break;
        }
    }
}
