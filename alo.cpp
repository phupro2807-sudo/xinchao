#include <iostream>
using namespace std;

void sw(int &a, int &b){
    int tam = a;
    a = b;
    b = tam;
}

int main(){
    int a, b;
    cin >> a >> b;
    sw(a, b);
    cout << a << " " <<  b;
}