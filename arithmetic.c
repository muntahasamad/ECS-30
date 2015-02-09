//
//  main.c
//  arithmetic.c
//
//  Created by Muntaha Samad on 5/14/14.
//  Copyright (c) 2014 Muntaha Samad. All rights reserved.
//

#include <stdio.h>
#include "genlib.h"
#include "random.h"
#include "simpio.h"
#include "strlib.h"
#define NumQuestions 5

main()
{
    int int1, int2, operator, answer, correct_answer, count, questions;
    count = 0;
    questions = 0;
    printf("Welcome to Math Quiz!\n");
    while (questions < NumQuestions)
    {
        Randomize();
        int1 = RandomInteger(1, 20);
        int2 = RandomInteger(1, 20);
        while ((int1 + int2)>20 || (int1 - int2)<1)
        {
            int1 = RandomInteger(1, 20);
            int2 = RandomInteger(1, 20);
        }
        operator = RandomInteger(0, 1);
        if (operator == 0)
        {
            count = 0;
            correct_answer = int1 + int2;
            printf("What is %d + %d? ", int1, int2);
            answer = GetInteger();
            questions++;
            while (answer!=correct_answer && count < 2)
            {
                printf("That's incorrect. Try a different answer: ");
                answer = GetInteger();
                count++;
            }
            if (answer == correct_answer)
            {
                printf("That's the answer!\n");
            }
            else
            {
                printf("No, the answer is %d.\n", correct_answer);
            }
        }
        else
        {
            count = 0;
            correct_answer = int1 - int2;
            printf("What is %d - %d? ", int1, int2);
            answer = GetInteger();
            questions++;
            while (answer!=correct_answer && count < 2)
            {
                printf("That's incorrect. Try a different answer: ");
                answer = GetInteger();
                count++;
            }
            if (answer == correct_answer)
            {
                printf("That's the answer!\n");
            }
            else
            {
                printf("No, the answer is %d.\n", correct_answer);
            }
        }

    }
    }