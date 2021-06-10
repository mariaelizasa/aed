#include <iostream>
using namespace std;

int main(){

int i, min, max, num;
cout<<"Digite dois números para definir o intervalo: ";

cin >> min;
cin >> max;

for (i = min; i <= max; i++) {
int num = i%2;
if (num%2 == 0){

cout << "Numero par:" << i<< "!";
 }
}
return 0;
}