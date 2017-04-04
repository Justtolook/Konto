#ifndef SPARKONTO_H
#define SPARKONTO_H
#include "konto.h"

class SPARKONTO : public KONTO
{
private:
    static const double adZinssatz[5];

public:
    virtual void setKontostand(double);     //Kontostand erh�hen/verringern
    double getZinssatz(void);       //Zinssatz zur�ckgeben
    void addInterest(void);         //Zinsen gutschreiben
};
#endif // SPARKONTO_H
