//
//  main.c
//  pumpkin.c
//
//  Created by Muntaha Samad on 5/13/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include "graphics.h"

void DrawTriangle(double x, double y, double base, double height)
{
    MovePen(x, y);
    DrawLine(base, 0);
    DrawLine(-base/2, height);
    DrawLine(-base/2, -height);
}

void DrawBox (double x, double y, double width, double height)
{
    MovePen(x, y);
    DrawLine(0, height);
    DrawLine(width, 0);
    DrawLine(0, -height);
    DrawLine(-width, 0);
}

void DrawCenteredCircle(double x, double y, double r)
{
    MovePen(x+r, y);
    DrawArc(r, 0, 360);
}
void DrawUpsidedownTriangle(double x, double y, double base, double height)
{
    MovePen(x, y);
    DrawLine(-base/2, height);
    DrawLine(base, 0);
    DrawLine(-base/2, -height);
}


#define HeadRadius 1.0
#define StemWidth 0.1
#define StemHeight 0.15
#define EyeWidth 0.3
#define EyeHeight 0.2
#define NoseWidth 0.2
#define NoseHeight 0.2
#define NTeethPerRow 7
#define ToothWidth 0.083333
#define ToothHeight 0.15

void main()
{
    InitGraphics();
    DrawCenteredCircle(3,3, HeadRadius);
    DrawBox(3-(StemWidth/2), 3+HeadRadius, StemWidth, StemHeight);
    DrawTriangle(3-(NoseWidth/2), 3 - (NoseHeight/2), NoseWidth, NoseHeight);
    int i, j;
    for (i=0; i< 2; i++)
    {
        for (j = 0; j < NTeethPerRow; j++)
        {
            
            DrawBox(3-((NTeethPerRow/2.0)*ToothWidth)+(j*ToothWidth),3-(HeadRadius/2)-(ToothHeight)+(ToothHeight*i) , ToothWidth, ToothHeight);
            
        }
    }
    DrawUpsidedownTriangle(3-(HeadRadius/3), 3+(HeadRadius/2)-(EyeHeight), EyeWidth, EyeHeight);
    DrawUpsidedownTriangle(3+(HeadRadius/3), 3+(HeadRadius/2)-(EyeHeight), EyeWidth, EyeHeight);

    
}

