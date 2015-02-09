//
//  main.c
//  cipher.c
//
//  Created by Muntaha Samad on 5/13/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"


int main ()
{
    int i,key, StringLen;
    string result, NumStr, str, final, temp;
    char ch, itoa();
    printf("This program encodes a message using a cyclic cipher.\n");
    printf("Enter the numeric key: ");
    key = GetInteger();
    printf("Enter a message: ");
    str = GetLine();
    StringLen = StringLength(str);
    printf("Encoded message: ");
    result = "";
    for (i=0; i < StringLen; i++)
    {
        ch = IthChar(str, i);
        if (ch >= 'A' && ch <= 'Z')
        {
            if (key < 0)
            {
                if (ch + key < 65)
                {
                    NumStr = CharToString(ch+key+26);
                    final = Concat(result,(NumStr));
                    result = final;
                }
                else
                {
                    NumStr = CharToString(ch+key);
                    final = Concat(result,(NumStr));
                    result = final;
                }
                
            }
            else if ((ch+key)>90)
            {
                
                NumStr = CharToString(ch+key-26);
                final = Concat(result,(NumStr));
                result = final;
                //printf("%c",ch+key-26);
            }
          
            else
            {
                NumStr = CharToString(ch+key);
                final = Concat(result,(NumStr));
                result = final;
                //printf("%c",ch+key);
            }
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            if (key < 0)
            {
                if (ch + key < 65)
                {
                    NumStr = CharToString(ch+key+26);
                    final = Concat(result,(NumStr));
                    result = final;
                }
                else
                {
                    NumStr = CharToString(ch+key);
                    final = Concat(result,(NumStr));
                    result = final;
                }
            }
            else if ((ch+key)>122)
            {
                NumStr = CharToString(ch+key-26);
                final = Concat(result,(NumStr));
                result = final;
                //printf("%c",ch+key-26);
            }
            
            else
            {
                NumStr = CharToString(ch+key);
                final = Concat(result,(NumStr));
                result = final;
                //printf("%c",ch+key);
            }
        }
        else
        {
            NumStr = CharToString(ch);
            final = Concat(result,(NumStr));
            result = final;
            //printf("%c", ch);
        }
        
        
    }
    printf("%s\n", result);


}



