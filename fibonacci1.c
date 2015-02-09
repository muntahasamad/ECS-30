//
//  main.c
//  fibonacci1.c
//
//  Created by Muntaha Samad on 6/6/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include "genlib.h"
#include "strlib.h"
#include "simpio.h"
#include <ctype.h>


int Fib(int n)
{
    if (n <= 2) return 1;
    else return Fib(n-1) + Fib(n-2);
}
main()
{
    int num, final;
    printf("This program computes the n-th Fibonacci number\nusing the recursive formula.\n");
    printf("Please enter n: ");
    num = GetInteger();
    final = Fib(num);
    printf("Fib(%d) = %d\n", num, final);

}


