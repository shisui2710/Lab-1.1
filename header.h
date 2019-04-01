#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

struct complex_number{
int x;
int y;
};

int sanity_check();
int transformation(char a[], int b);

int sum_x(int x_1, int x_2);
int sum_y(int y_1, int y_2);

int razn_x(int x_1, int x_2);
int razn_y(int y_1, int y_2);

int pr_x(int x_1, int y_1, int x_2, int y_2);
int pr_y(int x_1, int y_1, int x_2, int y_2);

int del_x(int x_1, int y_1, int x_2, int y_2);
int del_y(int x_1, int y_1, int x_2, int y_2);

#endif
