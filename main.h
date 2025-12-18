#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include "customer.h"
#include "pakaian.h"

extern ListCustomer LC;
extern ListPakaian LP;
extern string id;

void menuAdmin();
void menuParent();
void menuChild();
void menuUser();
void inputDataDummy();

#endif
