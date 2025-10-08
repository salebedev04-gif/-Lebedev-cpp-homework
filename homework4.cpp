#include<iostream>

using namespace std;

int main(){
    char q = ' ';
    cout << "введите какой-нибудь символ";
    cin >> q;
    int w = q;
    int e = w + 1;
    char r = e;



    cout << q << '\n'
        << w  << '\n'
        << e  << '\n'
        << r << '\n';
}