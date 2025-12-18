#include "main.h"
#include <iostream>
using namespace std;

void menuUser(){
    int option=-99;
    adrCustomer C;
    adrPakaian P;
    while (option != 0) {
        system("cls");
        cout << "====== Menu Studi Kasus ==================== " << endl;
        cout << "|| 1. hapus customer     (berdasarkan ID) ||" << endl;
        cout << "|| 2. cari  customer     (berdasarkan ID) ||" << endl;
        cout << "|| 3. hapus pakaian      (berdasarkan ID) ||" << endl;
        cout << "|| 4. cari  pakaian      (berdasarkan ID) ||" << endl;
        cout << "|| 5. hitung total customer               ||" << endl;
        cout << "|| 6. hitung total pakaian                ||" << endl;
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
               {
    system("cls");
    cout << "=== Hapus Pakaian ===" << endl;
    cout << "ID Pakaian : ";
    cin >> id;

    // Cari pakaian di semua customer
    bool found = false;
    adrCustomer tempC = LC.first;

    while (tempC != nullptr && !found) {
        adrPakaian tempP = findPakaian(tempC->child, id);
        if (tempP != nullptr) {
            // Pakaian ditemukan di customer ini
            deletePakaianByID(tempC->child, id);
            found = true;
            cout << "Pakaian dengan ID " << id << " berhasil dihapus!" << endl;
        }
        tempC = tempC->next;
    }

    if (!found) {
        cout << "Pakaian dengan ID " << id << " TIDAK DITEMUKAN." << endl;
    }

    system("pause");
    break;
}
           case 4  :
               {
            system("cls");
            cout << "=== Cari Pakaian ===" << endl;
            cout << "ID Pakaian : ";
            cin >> id;

            adrCustomer C = LC.first;  // DEKLARASI C di sini
            adrPakaian found = nullptr;
            bool ketemu = false;

    // Cari pakaian di semua customer
            while (C != nullptr && !ketemu) {
            found = findPakaian(C->child, id);
            if (found != nullptr) {
                ketemu = true;
            } else {
                C = C->next;
            }
        }

    if(ketemu) {
        cout << "\nPakaian ditemukan!" << endl;
        cout << "ID Pakaian: " << found->idPakaian << endl;
        cout << "Jenis     : " << found->jenis << endl;
        cout << "Berat     : " << found->berat << " kg" << endl;
    } else {
        cout << "\nPakaian tidak ada" << endl;
    }
    system("pause");
    break;
               }
           case 5 :
               {
                system("cls");
                int totalCustomer = hitungTotalCustomer(LC);
                cout << "\n1. Total Customer: " << totalCustomer << " orang" << endl;
                system("pause");
                break;
               }
            case 6 :
                {
                     cout << "\n2. Jumlah Pakaian per Customer:" << endl;


    if (LC.first == nullptr) {
        cout << "   Tidak ada data customer!" << endl;
    } else {
        adrCustomer C = LC.first;
        int n = 1;

        while (C != nullptr) {
            int jumlahPakaian = hitungPakaianCustomer(C);
            cout << "   " << n << ". " << C->info.nama
                 << " (ID: " << C->info.id << ")" << endl;
            cout << "      Jumlah Pakaian: " << jumlahPakaian << " item" << endl;

            C = C->next;
            n++;
        }
    }
            system("pause");
            break;
                }
           case 0  :
            {
              cout << "kembali ke menu sebelumnya" << endl;
              break;
            }
           default :
              cout << "Pilihan tidak valid!" << endl;
              system("pause");
        }
    }
}
