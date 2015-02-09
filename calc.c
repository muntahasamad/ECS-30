//
//  main.c
//  calc3.c
//
//  Created by Muntaha Samad on 5/14/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"
#include "scanner.h"



#define TRUE 1
#define FALSE 0


main ()
{
   
    string input, token, lastToken;
    char ch, currentOperator;
    int value,currentOperand;
    bool not_done;
    
    printf("This program implements a simple calculator. \nWhen the > prompt appears, enter an expression \nconsisting of integer constants and the operators \n+, -, *, / and %. To stop, enter a blank line.\n");
    not_done = TRUE;
    while (not_done)
    {
        not_done = FALSE;
        printf("> ");
        input = GetLine();
        InitScanner(input);
        SkipWhitespace(TRUE);
        value = 0;
        currentOperator = '+';
        token = "0";
        while (!AtEndOfLine())
        {
            not_done = TRUE;
            lastToken = token;
            token = GetNextToken();
            ch = IthChar(token, 0);
            if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%')
            {
                currentOperand = StringToInteger(lastToken);
                if (currentOperator == '+'){
                    value = value + currentOperand;
                }
                else if (currentOperator == '-'){
                    value = value - currentOperand;
                }
                else if (currentOperator == '/'){
                    value = value / currentOperand;
                }
                else if (currentOperator == '*'){
                    value = value * currentOperand;
                }
                else if (currentOperator == '%'){
                    value = value % currentOperand;
                }
                currentOperator = ch;
            }
            
            
        }
        
        if (not_done)
        {
            currentOperand = StringToInteger(token);
            if (currentOperator == '+')
            {
                value = value + currentOperand;
            }
            else if (currentOperator == '-')
            {
                value = value - currentOperand;
            }
            else if (currentOperator == '/')
            {
                value = value / currentOperand;
            }
            else if (currentOperator == '*')
            {
                value = value * currentOperand;
            }
            else if (currentOperator == '%')
            {
                value = value % currentOperand;
            }

            printf("%d\n",value);
        }
        
    
    }
}
