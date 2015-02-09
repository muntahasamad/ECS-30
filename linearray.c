//
//  main.c
//  linegraph.c
//
//  Created by Muntaha Samad on 5/26/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"
#include "glibrary.h"
#include "graphics.h"



void DrawLineGraph()
{
    int i,j,stringlen, k;
    double numx, numy;
    string line, line2, subline;
    double x[100];
    double y[100];
    
    printf("This program draws a line graph connecting a given set\nof points in the (x, y) plane. Please enter a list of\ncoordinate pairs. Denote the end of the list by entering\na blank line as the x-value.\n");
    i = 0;
    while (1)
    {
        printf("x: ");
        line = GetLine();
        if ((StringEqual(line, " "))==0) break;
        else
        {
            
            printf("y: ");
            line2 = GetLine();
            numx = StringToInteger(line);
            numy = StringToInteger(line2);
        }
        
        
        x[i] = numx;
        y[i] = numy;
        i++;
        
    }
    InitGraphics();
    MovePen(x[0], y[0]);
    for (k = 1; k<= i; k++)
    {
        DrawLine(x[k], y[k]);
    }
    
}


main()
{
    DrawLineGraph();
    
}
