#include "genlib.h"
#include "strlib.h"
#include "simpio.h"
#include "graphics.h"


int main()
{
    int n, i = 0, line2;
    double x[1000], y[1000];
    string line;
    InitGraphicsWithSize(10, 10);
    
    
    while(1)
    {
        printf("x: ");
        line = GetLine();
        if(StringCompare(line, "") == 0)
            break;
        printf("y: ");
        line2 = GetInteger();
        x[i] = StringToReal(line);
        y[i] = line2;
        i++;
    }
    
    MovePen(x[0], y[0]);
    for(n = 1; n < i; n++)
        DrawLine(x[n]- x[n-1], y[n] - y[n-1]);
    return 0;
}

