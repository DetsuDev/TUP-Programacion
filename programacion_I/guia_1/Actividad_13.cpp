// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int importe, bMil, bQuin, bDosc, bCien, resto_mil, resto_quin, resto_dosc, resto_cien;

    cout << "Ingrese el importe: ";
    cin >> importe;

    bMil = (importe/1000);
    importe = importe - bMil*1000;
    bQuin = (importe/500);
    importe = importe - bQuin*500;
    bDosc = (importe/200);
    importe = importe - bDosc*200;
    bCien = (importe/100);

    cout << "Billetes de 1000: " << bMil << ", billetes de 500: " << bQuin << ", billetes de 200: " << bDosc << ", billetes de 100: " << bCien;

    return 0;
}
