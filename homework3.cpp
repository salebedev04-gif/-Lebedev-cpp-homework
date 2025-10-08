#include<iostream>

using namespace std;

int main(){
    int x;
    int y;
    cout << "введите первое число";
    cin >> x;
    cout << "введите второе число";
    cin >> y;
    int xy = x%y;
    cout << "остаток от деления =" << xy;
    
}