//
//  main.c
//  currencies.c
//
//  Created by Muntaha Samad on 6/2/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include "genlib.h"
#include "strlib.h"
#include "simpio.h"
#include <ctype.h>

main()

{
    FILE *infile;
    char ch;
    string startcurrency, endcurrency;
    int i,j, num;
    double  dollar = 0.0, yen = 0.0, franc = 0.0, mark = 0.0, pound = 0.0, final, stringlength,endnum = 0,startnum = 0;
    string result, line;
    result = "";
    infile = fopen("exchange.dat", "r");
    if (infile==NULL)
    {
        printf("unable to open");
        exit(1);
        
    }
    for (i = 0; i < 5; i++)
    {
        result = "";
        line = ReadLine(infile);
        stringlength = StringLength(line);
        for (j=0; j < stringlength; j++)
        {
            ch = IthChar(line, j);
            if (isdigit(ch)|| ch == '.')
            {
                result = Concat(result, CharToString(ch));
            }
            
        }
        
        final = StringToReal(result);
    
    
        switch (i)
        {
            case 0: dollar = final; break;
            case 1: yen = final;  break;
            case 2: franc = final;  break;
            case 3: mark = final; break;
            case 4: pound = final; break;
                
        }
       
        
    }
    printf("This program converts amounts between several currencies.\n");
    printf("Convert from: ");
    startcurrency = GetLine();
    printf("Convert into: ");
    endcurrency = GetLine();
    printf("How many units of type %s? ", startcurrency);
    num = GetInteger();
    if (StringCompare(startcurrency, "dollar")!= 0)
    {
        if (StringCompare(startcurrency, "yen")==0)
        {
            startnum = num * yen;
            
        }
        else if (StringCompare(startcurrency, "franc")==0)
        {
            startnum = num * franc;
        }
        else if (StringCompare(startcurrency, "mark")==0)
        {
            startnum = num * mark;
        }
        else if (StringCompare(startcurrency, "pound")==0)
        {
            startnum = num * pound;
        }
    }
    else
    {
        startnum = num;
    }
    
    if (StringCompare(endcurrency, "dollar")==0)
    {
        endnum = startnum;
    }
    else if (StringCompare(endcurrency, "yen")==0)
    {
        endnum = startnum / yen;
    }
    else if (StringCompare(endcurrency, "franc")==0)
    {
        endnum = startnum / franc;
    }
    else if (StringCompare(endcurrency, "mark")==0)
    {
        endnum = startnum / mark;
    }
    else if (StringCompare(endcurrency, "pound")==0)
    {
        endnum = startnum / pound;
    }
    
    printf("%d %s = %.3f %s\n", num, startcurrency, endnum, endcurrency);

    
    
   
    
    
    
    
   
   
    
}

