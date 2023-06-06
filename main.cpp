#include "mbed.h"
Serial pc(USBTX,USBRX,9600);
int main()
{
    int a;
    float b,c;
    a = 5;
    b = 1.5;
    c = a+b;
    while (true) {
        pc.printf("a=%d, b=%f, c=%f\r\n",a,b,c);
        wait_ms(500);
    }
}
