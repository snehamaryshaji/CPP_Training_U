#include "main.h"
int expence[MAX_MONTH][MAX_DAYS][DAY_ARRAY_SIZE] = { 0 };
int sumarry[MAX_MONTH][MAX_DAYS] = { 0 };
const* char food[DAY_ARRAY_SIZE] = { "breakfast","lunch","dinner","other" };
void initializeExpecnce();
{
	for (int month=0;month < MAX_MONTH;month++)

	{
		for (int day = 0;month < MAX_DAYS;day++)
		{
			sumarry[month][day] = 0;
			for (int mealtype = 0;mealtype < DAY_ARRAY_SIZ;mealtype++)
			{
				expence[month][day][mealtype] = 0;
			}
		}
	}
}
bool addExpence(int month, int day, int mealtype, int amount)
{
	if (month<1 || month>MAX_MONTH || day<1 || day>MAX_DAYS || mealtype<0 || mealtype>DAY_ARRAY_SIZE)
	{
		cout << "invalid input" << endl;
	}
	expence[month - 1][day - 1][mealtype] += amount;
	sumarry[month - 1][day - 1] = 0;
	for (int i = 0;i < DAY_ARRAY_SIZE;i++)
	{
		sumarry[month - 1][day - 1] += expence[month - 1][day - 1][i];
	}
	return true;
}
bool displayDay(int month, int day)
{
	if (month<1 || month>MAX_MONTH || day<1 || day>MAX_DAYS)
	{
		cout << "invalid input" << endl;
	}
	cout << "\nexpence for month " << month << " - " << day << endl;
	for (int i = 0;i < DAY_ARRAY_SIZE;i++)
	{
		cout<<food[i]<<" - " << expence[month - 1][day - 1] += expence[month - 1][day - 1][i]<<endl;

	}

}