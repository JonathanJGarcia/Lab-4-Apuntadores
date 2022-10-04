
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>
#include "chrono"
#include "thread"
#include <iostream>


using namespace std;

void recorrido() {

    bool comp = false;

    int Liebre ;
    int tortuga;
    int contL = 0;
    int contT = 0;

    char L = 'L';
    char Vacia_L = '-';
    char L_pista[70];
    L_pista[0] = L;
    L_pista[1] = Vacia_L;

    char* Pc = &L;
    char newC = *Pc;

    char T = 'T';
    char Vacia_T = '-';
    char T_pista[70];
    T_pista[0] = T;
    T_pista[1] = Vacia_T;

    char* Pt = &T;
    char newT = *Pt;

    for (int i = 0; i <= 61;i++)
    {
        Liebre = rand() % 11;
        tortuga = rand() % 11;

        if (Liebre > tortuga) {
            if (Liebre >= 8 && Liebre <= 10)
            {
                contL = contL + 9;
                L_pista[contL] = newC;
                std::cout << "\n super salto!! + 9 cuadros!! - pos: " << contL;
                this_thread::sleep_for(0.5s);
            }
            else if (Liebre >= 4 && Liebre <= 7)
            {
                contL = contL + 1;
                L_pista[contL] = newC;
                std::cout << " \n salto pequeño!! + 1 cuadros!! - pos: " << contL;
                this_thread::sleep_for(0.5s);
            }
            else if (Liebre == 1)
            {
                if (contL > 12)
                {
                    contL = contL - 12;
                    L_pista[contL] = newC;
                    std::cout << " \nGRAN RESBALON!! - 12 cuadros!! - pos: " << contL;
                    this_thread::sleep_for(0.5s);
                }
                else
                {
                    std::cout << " \n no se mueve!! " << contL;;
                    this_thread::sleep_for(0.5s);
                }
            }
            else if (Liebre == 2)
            {
                if (contL > 2)
                {
                    contL = contL - 2;
                    L_pista[contL] = newC;
                    std::cout << " \n resbalon!! - 2 cuadros!! - pos: " << contL;
                    this_thread::sleep_for(0.5s);
                }
                else
                {

                    std::cout << "\n no se mueve " << contL;
                    this_thread::sleep_for(0.5s);
                }

            }
            else
            {

                std::cout << "\nSe ha quedado dormido!! + 0 cuadros!! - pos: " << contL;
                this_thread::sleep_for(0.5s);
            }
        }else if (tortuga > Liebre) {
            if (tortuga >= 1 && tortuga <= 5)
            {
                contT = contT + 3;
                T_pista[contT] = newT;
                std::cout << "\n tortuga: paso veloz!! + 3 cuadros! -  pos : " << contT;
                this_thread::sleep_for(0.5s);
            }
            else if (tortuga >= 8 && tortuga <= 10)
            {
                contT = contT + 1;
                T_pista[contT] = newT;
                std::cout << "\ntortuga: Paso lento! + 1 cuadro! -  pos : " << contT;
                this_thread::sleep_for(0.5s);
            }
            else
            {
                if (contT > 6)
                {
                    contT = contT - 6;
                    T_pista[contT] = newT;
                    std::cout << "\ntortuga: Resbalon!! - 6  cuadros! - pos: " << contT;
                    this_thread::sleep_for(0.5s);
                }
                else
                {
                    contT = contT;
                    std::cout << "\ntortuga: no se mueve de donde esta " << contT;
                    this_thread::sleep_for(0.5s);
                }

            }
        }
        else {
            std::cout << "\n Mordida!!!";
            this_thread::sleep_for(0.5s);
        }

    }
    if (contL >= 70)
    {
        std::cout << "\n \n Fin de la carrera, gana la liebre\n";
        this_thread::sleep_for(0.5s);

    }
    else if (contT >= 70)
    {
        std::cout << "\n \n Fin de la carrera, gana la tortuga\n";
        this_thread::sleep_for(0.5s);

    }
    std::cout << "\n Recorrido realizado por cada animal, la L son las poscicion donde la liebre paso y las T donde la tortuga paso \n";
    std::cout << "\n Liebre ";
    for (int o = 0; o < 70; o++)
    {
        std::cout << L_pista[o] << ",";

    }
    std::cout << "\n";

    std::cout << "\n tortuga: ";
    for (int q = 0; q < 70; q++)
    {
        std::cout << T_pista[q] << ",";

    }
    std::cout << "\n";

}


int main()
{
    std::cout << "HOY SE HARA UNA GRAN CARRERA EN LA CIUDAD, LA LIEBRE CONTRA LA TORTUGA!! \n";
    std::cout << "Listooos?!\n";
    std::cout << " 1... \n 2... \n 3!! \n";
    this_thread::sleep_for(3s);
    std::cout << " BANG!! Y ARRANCA LA CARRERA! \n";
    std::cout << "\n";
    this_thread::sleep_for(0.5s);
    recorrido();
}



