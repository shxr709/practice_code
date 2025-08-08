#include<stdio.h>

int main()
{
	double employee_bonus;
	double company_profit;

	printf("Enter your company`s profit: ");
	scanf("%lf", &company_profit);

	/*
	if(company_profit <= 100000)
	{
		employee_bonus = company_profit * 0.1;
		printf("Your bonns is: %f\n", employee_bonus);
	}else if(company_profit > 100000 && company_profit < 200000)
	{
		employee_bonus = (company_profit - 100000) * 0.075 + 100000 * 0.1;
		printf("Your bonus is: %f\n", employee_bonus);
	}else if(company_profit >= 200000 && company_profit < 400000)
	{
		employee_bonus = (company_profit - 200000) * 0.05 + 100000 * 0.1 + 100000 * 0.075;	
		printf("Your bonus is: %f\n", employee_bonus);
	}else if(company_profit >= 400000 && company_profit < 600000)
	{
		employee_bonus = (company_profit - 400000) * 0.03 + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 ;	
		printf("Your bonus is: %f\n", employee_bonus);
	}else if(company_profit >= 600000 && company_profit < 1000000)
	{
		employee_bonus = (company_profit - 600000) * 0.015 + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03;	
		printf("Your bonus is: %f\n", employee_bonus);
	}else if(company_profit >= 1000000)
	{
		employee_bonus = (company_profit - 1000000) * 0.010 + 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015;	
		printf("Your bonus is: %f\n", employee_bonus);
	}
	*/
	
	double bonus_lv1, bonus_lv2, bonus_lv3, bonus_lv4, bonus_lv5;
	bonus_lv1 = 100000 * 0.1;
	bonus_lv2 = bonus_lv1 + 100000 * 0.075;
	bonus_lv3 = bonus_lv2 + 200000 * 0.050;
	bonus_lv4 = bonus_lv3 + 200000 * 0.030;
	bonus_lv5 = bonus_lv4 + 400000 * 0.015;
	
	if(company_profit <= 100000)
	{
		employee_bonus = company_profit * 0.1;
	}else if(company_profit > 100000 && company_profit < 200000)
	{
		employee_bonus = bonus_lv1 + (company_profit - 100000) * 0.075;
	}else if(company_profit >= 200000 && company_profit < 400000)
	{
		employee_bonus = bonus_lv2 + (company_profit - 200000) * 0.050;
	}else if(company_profit >= 400000 && company_profit < 600000)
	{
		employee_bonus = bonus_lv3 + (company_profit - 400000) * 0.030;
	}else if(company_profit >= 600000 && company_profit < 1000000)
	{	
		employee_bonus = bonus_lv4 + (company_profit - 600000) * 0.015;
	}else if(company_profit >= 600000 && company_profit < 1000000)
	{
		employee_bonus = bonus_lv4 + (company_profit - 600000) * 0.015;
	}

	printf("Your bonus is %lf\n", employee_bonus);
	printf("您的奖金是: %lf\n", employee_bonus);

	return 0;
}
