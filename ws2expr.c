#include <stdio.h>

int main() {
    int i = 10;
    int j = 3;              
    float x = 1.525;
    float y = -0.008;
    float z = 12.26;
    char c = 'A';
    char d = 'F';

    // case 1
    printf("%3.5f\n", (y - 2) * ((y + z) / j));

    // case 2
    printf("%f\n", (j % (int)(i - j)) / z - x);
    //case 3
    printf("%d\n",((int)(i/3-1)+((int)(j-1)*6)%(int)(i-9))*3);
    //case4
    printf("%3.5f\n",(-x+(y*y+4*x*z)/x));
    //case 5
    printf("%d\n",((c/d)*(-d)));
    //case 6
    printf("%d\n",!(c<99));
    //case 7
    printf("%d\n",!(i*j<c));
	//case 8
	printf("%d\n",(c == 97)&&!(z>15));
	//case 9
	printf("%d\n",(z/2-j<x||(i-j!=0)||(c>d)));
	//case 10 
	printf("%d\n",(j-i/j)>(d-c/d));
	
    return 0;
}

