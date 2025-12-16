#include "main.h"
#include <iostream>
using namespace std;

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
              system("cls");
              cout << "=== Hapus Customer ===" << endl;
              cout << "ID Customer : ";
              cin >> id;
              deleteCustomerByID(LC, id);
              system("pause");
              break;
           case 2  :
              system("cls");
              cout << "=== Cari Customer ===" << endl;
              cout << "ID Customer : ";
              cin >> id;
              if(findCustomer(LC, id) != NULL) {
                  adrCustomer found = findCustomer(LC, id);
                  cout << "\nCustomer ditemukan!" << endl;
                  cout << "Nama: " << found->info.nama << endl;
                  cout << "ID  : " << found->info.id << endl;
              } else {
                  cout << "\nCustomer tidak ada" << endl;
              }
              system("pause");
              break;
           case 3  :
              system("cls");
              cout << "=== Hapus Pakaian ===" << endl;
              cout << "ID Pakaian : ";
              cin >> id;
              deletePakaianByID(LP, id);
              system("pause");
              break;
           case 4  :
              system("cls");
              cout << "=== Cari Pakaian ===" << endl;
              cout << "ID Pakaian : ";
              cin >> id;
              if(findPakaian(LP, id) != NULL) {
                  adrPakaian found = findPakaian(LP, id);
                  cout << "\nPakaian ditemukan!" << endl;
                  cout << "ID Pakaian: " << found->idPakaian << endl;
                  cout << "Jenis     : " << found->jenis << endl;
                  cout << "Berat     : " << found->berat << " kg" << endl;
              } else {
                  cout << "\nPakaian tidak ada" << endl;
              }
              system("pause");
              break;
           case 5  :
              system("cls");
              showAllPakaianUnique(LC);
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
