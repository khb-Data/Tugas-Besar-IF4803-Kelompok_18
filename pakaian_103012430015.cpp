#include "pakaian.h"
#include <iostream>
using namespace std;

adrPakaian findPakaian(ListPakaian LP, string id){
    adrPakaian = p;
    p = LP.first;
    while (p->info.id != id && p != nullptr){
        p = p->next;
    }
    return p;
}

void showAllPakaian(ListPakaian LP){
   
}

void showAllPakaianUnique(ListCustomer LC){

}
