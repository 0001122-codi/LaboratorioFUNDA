#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    float x1;
    float x2;

    cout<<"Por favor, inserte un valos para a \n";
    cin>> a;

    cout<<"Por favor, inserte un valor para b \n";
    cin>> b;

    cout<<"Por favor, inserte un valos para c \n";
    cin>> c;

    x1= (-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2= (-b-(sqrt(b*b-4*a*c)))/(2*a);

    cout<< "x1=";
    cout<< x1;

    cout<< "x2=";
    cout<< x2;

    return 0;
}
