#include <iostream>
using namespace std;

int main()
{
    int num_part, min_jug, may_gol_dia;
    int racha = 0;
    int tarj_amar = 0;
    int tarj_roj = 0;
    int goles = 0;
    int tot_goles = 0;
    int may_goles = -999;
    int prom_tarj = 0;
    int part_nojug = 0;
    int part_jug = 0;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Ingrese numero de partido: ";
        cin >> num_part;
        cout << "Ingrese minutos jugados: ";
        cin >> min_jug;
        cout << "Tarjetas amarillas: ";
        cin >> tarj_amar;
        cout << "Tarjeta rojas: ";
        cin >> tarj_roj;
        cout << "Goles: ";
        cin >> goles;

        if (goles > 0)
        {
            racha++;
        }
        else
        {
            racha = 0;
        }
        if (min_jug = 0)
        {
            part_nojug++;
        } else if (min_jug >= 90)
        {
            part_jug++;
        }
        if (goles > may_goles)
        {
            may_goles = goles;
        }
        tot_goles = tot_goles + goles;
        prom_tarj = tarj_amar + tarj_roj;
    }

    prom_tarj = prom_tarj / 15;

    cout << "Cantidad de partidos no jugodos: " << part_nojug << endl;
    cout << "Cantidad de partidos jugados por completos: " << part_jug << endl;
    cout << "Promedio de tarjetas recibidas por partido: " << prom_tarj << endl;
    cout << "Mayor cantidad de goles: " << may_goles << ", en un total de: " << tot_goles << endl;
    cout << "Mejor racha de partidos convirtiendo goles: " << racha;

}