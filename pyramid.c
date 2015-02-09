//
//  main.c
//  pyramid.c
//
//  Created by Muntaha Samad on 5/13/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include "genlib.h"
#include "graphics.h"

#define NBricksInBase 16 
#define BrickWidth 0.3
#define BrickHeight 0.15

void DrawBox (double x, double y, double width, double height)
{
    MovePen(x, y);
    DrawLine(0, height);
    DrawLine(width, 0);
    DrawLine(0, -height);
    DrawLine(-width, 0);
}

void main()
{
    int i, j,x;
    InitGraphics();
    for (i=0; i< NBricksInBase; i++)
    {
        for (j = 0; j < NBricksInBase-i; j++)
        {
    
             DrawBox((j * BrickWidth)+(.15*i),  i* BrickHeight, BrickWidth, BrickHeight);
            
            
        }
    }
}


