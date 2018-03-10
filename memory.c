//
//  main.c
//  memory
//  A program to print out the sizes and locations in memory of different types of variables.
//  Created by Richard Buckland on 20/11/12.
//  Edited by Djimon Jayasundera on 3/10/2018

#include <stdio.h>
#include <stdlib.h>
long add (int x, int y);

int main(int argc, const char * argv[]) {

   int x;
   int y;
   long total;

   x = 40;
   y = 2;

   total = add (x, y);

   //printf("the sum of %d and %d is %ld\n", x, y, total);

   char c ='a';

   unsigned long ul       = 0;
   unsigned int ui        = 1;
   unsigned long long ull = 2;
   unsigned short us      = 3;

   signed long sl       = 4;
   signed int si        = 5;
   signed long long sll = 6;
   signed short ss      = 7;

   long l       = 8;
   int i        = 9;
   long long ll = 10;
   short s      = 11;

   float f = 3.1;
   double d = 3.14;

   // add them all together just to make use of them so the compiler
   // doesn't grumble that they are unused in the program

   double grandTotal;
   grandTotal =  c +
                 ul + ui + ull + us +
                 sl + si + sll + ss +
                  l +  i +  ll +  s +
                  f + d;

   //printf ("all these things added together make %f\n", grandTotal);

   //Where stuff STARTS
   printf("SIZES OF THINGS\n");
   printf("char %d\n", sizeof(c));
   printf("unsigned long %d\n", sizeof(ul));
   printf("unsigned int %d\n", sizeof(ui));
   printf("unsigned long long %d\n", sizeof(ull));
   printf("unsigned short %d\n", sizeof(us));
   printf("signed long %d\n", sizeof(sl));
   printf("signed int %d\n", sizeof(si));
   printf("signed long long %d\n", sizeof(sll));
   printf("signed int %d\n", sizeof(si));
   printf("signed long long %d\n", sizeof(sll));
   printf("signed short %d\n", sizeof(ss));
   printf("long %d\n", sizeof(l));
   printf("int %d\n", sizeof(i));
   printf("long long %d\n", sizeof(ll));
   printf("short %d\n", sizeof(s));
   printf("float %d\n", sizeof(f));
   printf("double %d\n", sizeof(d));

   printf("\n");
   printf("LOCATIONS OF THINGS\n");
   printf("char %p\n", &c);
   printf("unsigned long %p\n", &ul);
   printf("unsigned int %p\n", &ui);
   printf("unsigned long long %p\n", &ull);
   printf("unsigned short %p\n", &us);
   printf("signed long %p\n", &sl);
   printf("signed int %p\n", &si);
   printf("signed long long %p\n", &sll);
   printf("signed short %p\n", &ss);
   printf("long %p\n", &l);
   printf("int %p\n", &i);
   printf("long long %p\n", &ll);
   printf("short %p\n", &s);
   printf("float %p\n", &f);
   printf("double %p\n", &d);

   return EXIT_SUCCESS;
}

long add (int x, int y) {
   long answer;
   answer = x + y;

   return answer;
}

