#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b,c,maks,min1,min2;
    string hasil;

    cout <<"Masukkan sisi A : ";
    cin >> a;

    cout <<"Masukkan sisi B : ";
    cin >> b;

    cout <<"Masukkan sisi C : ";
    cin >> c;

    if(a >= b && a >= c){
        maks = a;
        min1 = b;
        min2 = c;
        }
    else if(b >= c){
        maks = b;
        min1 = a;
        min2 = c;
        }
    else{
        maks = c;
        min1 = a;
        min2 = b;
        }

    if (maks >= (min1+min2)){
        hasil = "Maaf segitiga tidak bisa dibuat";
    } else {
        if (a or b or c >= 0){
            if(a==b && a==c){
                hasil = "Segitiga sama sisi";
            } else if(a==b || a==c)
            {
                if(a!=b || a!=c){
                    hasil = "Segitiga sama kaki";
                }
            } else {
            hasil = "Segitiga sembarang";
            }
        } else {
            hasil = "Maaf angka tidak boleh 0 atau kurang dari 0";
        }
    }

    cout << hasil << endl;
    system("pause");
    return 0;
}
