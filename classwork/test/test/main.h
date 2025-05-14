#pragma once
#include<iostream>
using namespace std;

#define MAX_MONTH 12
#define MAX_DAYS 31
#define DAY_ARRAY_SIZE 4

extern const* char food[DAY_ARRAY_SIZE];
extern int expence[MAX_MONTH][MAX_DAYS][DAY_ARRAY_SIZE];
extern int sumarry[MAX_MONTH][MAX_DAYS];

void initializeExpecnce();
bool addExpence(int month,int day,int mealtype,int amount);
bool displayDay(int month,int day);
bool displayMonth(int month);

