#include<iostream>

using namespace std;

int main() {

int i=0;

cout << "escriba un numero del 1 al 10" <<endl;
cin >> i;

switch(i) {
case 2:
case 4:
case 6:
case 8:
case 10:
cout << "es par" <<endl;
break;
case 1:
case 3:
case 5:
case 7:
case 9:
cout << "no es par" <<endl;
break;
default:
cout << "numero fuera del rango" <<endl;
}

}

