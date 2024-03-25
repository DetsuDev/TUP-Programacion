// Autor: Tomas Bottelli

// *Funciona pero se puede hacer mejor

#include <iostream>
using namespace std;

int main () {
    int medio, prim_num, seg_num, ter_num;

    cout << "Ingrese el primer numero: ";
    cin >> prim_num;

    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    cout << "Ingrese el tercero numero: ";
    cin >> ter_num;

    if (prim_num > seg_num && prim_num > ter_num) {
        if (seg_num > ter_num) {
            medio = seg_num;
        } else {
            medio = ter_num;
        }// Autor: Tomas Bottelli
        
        #include <iostream>
        using namespace std;
        
        int main () {
            int num;
            int pos = 0;
            int cer = 0;
            int neg = 0;
            cout << "Ingrese el primer numero: ";
            cin >> num;
        
            if (num == 0) {
                cer++;
            } else if (num > 0) {
                pos++;
            } else {
                neg++;
            }
        
            cout << "Ingrese el segundo numero: ";
            cin >> num;
        
            if (num == 0) {
                cer++;
            } else if (num > 0) {
                pos++;
            } else {
                neg++;
            }
        
            cout << "Ingrese el tercero numero: ";
            cin >> num;
        
             if (num == 0) {
                cer++;
            } else if (num > 0) {
                pos++;
            } else {
                neg++;
            }
        
            cout << "Ingrese el cuarto numero: ";
            cin >> num;
        
             if (num == 0) {
                cer++;
            } else if (num > 0) {
                pos++;
            } else {
                neg++;
            }
        
            cout << "Ingrese el quinto numero: ";
            cin >> num;
        
            if (num == 0) {
                cer++;
            } else if (num > 0) {
                pos++;
            } else {
                neg++;
            }
        
            cout << "La cantidad de numero/s positivo/s: " << pos << ", de numero/s negativo/s: " << neg << " y de cero/s: " << cer;
            return 0;
        }
        
    } else if (seg_num > prim_num && seg_num > ter_num) {
        if (prim_num > ter_num) {
            medio = prim_num;
        } else {
            medio = ter_num;
        }
    } else {
        if (prim_num > seg_num) {
            medio = prim_num;
        } else {
            medio = seg_num;
        }
    }

    cout << "El numero del medio es es: " << medio;
    return 0;
}
