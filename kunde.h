#ifndef KUNDE_H
#define KUNDE_H
#include "konto.h"

class KUNDE
{
private:
    KONTO *pKonten[4];
public:
    KUNDE();    //Konstruktor
    ~KUNDE();   //Destruktor
    void setGuthaben(int, double);
    double getGuthaben(int);
};
#endif // KUNDE_H
