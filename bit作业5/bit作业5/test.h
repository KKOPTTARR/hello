//预处理符，防止头文件被重复包含
#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <windows.h>

//编写函数不允许创建临时变量，求字符串的长度。
int MyStrlen(const char *str);
//extern int g_val;
//
//int MyAdd(int x, int y);
//int MyDiv(int x, int y);
//int MySub(int x, int y);
//int MyMul(int x, int y);

#endif