#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)
extern int count;

void ShowInt(int x);
int Fact(int n);
//���n��쳲�������
//1 1 2 3 5 8 13 21 34 55 ...
int fib(int n);
int MyAdd(int x, int y);



#endif