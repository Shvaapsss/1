#include <iostream>
using namespace std;
int main {
    int i;
    i=69;
    int number;
    number=72;
    i=i+number;
    int mas[3];
    mas[0]=0;
    mas[1]=0;
    mas[2]=0;
    int *iPointer {&i};
    int number=*iPointer;
    *iPointer=15;
    int* iPointer=&mas[0];
    

    return 0;
}