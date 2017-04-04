/**
*Autor: Henrik Lammert
*Thema: Bankkonten simulieren
*Datum: 14.03.2017
*Letzte Änderung: 28.03.2017
*/
#include <iostream> // für z.B. cout und cin
#include <stdio.h>
#include "girokonto.h"
#include "sparkonto.h"
#include "konto.h"
#include "kunde.h"

using namespace std;    // Festlegung des Namensraums: std gibt den Standard an, d.h. die
                        // folgenden Befehle sind durch die Programmiersprache und nicht
                        // durch den Programmierer festgelegt. Ohne die Angabe des namespace
                        // müsste bei jedem Aufruf std::cout , std::cin ..... angegeben werden.
int main()
{
    KUNDE Alfred;

    Alfred.setGuthaben(0,500);
    Alfred.getGuthaben(0);

    return 0;
}
