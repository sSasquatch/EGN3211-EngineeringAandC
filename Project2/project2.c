#include <stdio.h>
#include <math.h>

void output_short_format(double loan_amount, double interest_rate, double term_years)
{
	int i;
	double total_int = 0, monthly_pay;
	double loan = loan_amount, month_int;
	
	monthly_pay = loan_amount;
	monthly_pay = monthly_pay * ((interest_rate / 12) / (double) 100);
	monthly_pay = monthly_pay * pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12));
	monthly_pay = monthly_pay / (pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12)) - (double) 1);
	
	for (i = 1; i <= (term_years * 12); i++)
	{
		month_int = loan * (interest_rate / 12) / (double) 100;
		total_int += month_int;
		loan = loan - monthly_pay + month_int;
	}
	
	printf("---------------------------------\n");
	printf("          LOAN TERMS\n");
	printf("---------------------------------\n");
	printf("Loan Amount:          %6.0lf\n", loan_amount);
	printf("Interest Rate:         %.2lf%%\n", interest_rate);
	printf("Term:               %2.0lf years\n", term_years);
	printf("---------------------------------\n\n");
	printf("Monthly payment is:      %4.2lf\n", monthly_pay);
	printf("Total interest is:      %5.2lf\n", total_int);
	printf("Total amount paid is:  %6.2lf\n", loan_amount + total_int);
}

void output_amortized(double loan_amount, double interest_rate, double term_years)
{
	int year, month;
	double total_int = 0, total_prin = 0, monthly_pay;
	
	monthly_pay = loan_amount;
	monthly_pay = monthly_pay * ((interest_rate / 12) / (double) 100);
	monthly_pay = monthly_pay * pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12));
	monthly_pay = monthly_pay / (pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12)) - (double) 1);
	
	for (year = 1; year <= term_years; year++)
	{
		printf("-----------------------------------------------------------------\n");
		printf("Year  Month  Interest  Principal  Balance  |  INTEREST  PRINCIPAL\n");
		printf("-----------------------------------------------------------------\n");
		
		for (month = 1; month <= 12; month++)
		{
			total_int = total_int + (loan_amount * (interest_rate / 12) / 100);
			total_prin = total_prin + (monthly_pay - (loan_amount * (interest_rate / 12) / 100));
			
			if (month == 1)
			{
				printf("  %2d    %3d       %3.0lf       %4.0lf   %6.0lf  |     %5.0lf     %6.0lf\n", year, month + ((year - 1) * 12), \
					loan_amount * (interest_rate / 12) / 100, monthly_pay - (loan_amount * (interest_rate / 12) / 100), \
					loan_amount - monthly_pay + (loan_amount * (interest_rate / 12) / 100), total_int, total_prin);
			}
			else
			{
				printf("        %3d       %3.0lf       %4.0lf   %6.0lf  |     %5.0lf     %6.0lf\n", month + ((year - 1) * 12), \
					loan_amount * (interest_rate / 12) / 100, monthly_pay - (loan_amount * (interest_rate / 12) / 100), \
					loan_amount - monthly_pay + (loan_amount * (interest_rate / 12) / 100), total_int, total_prin);
			}
			
			loan_amount = loan_amount - monthly_pay + (loan_amount * (interest_rate / 12) / 100);
		}
	}
}

void output_extra_monthy(double loan_amount, double interest_rate, double term_years, double extra)
{
	int year, month, total_months = 0, months_early = 0, i, indicator = 0;
	double total_int = 0, total_prin = 0, proj_int = 0, month_int, loan = loan_amount, monthly_pay;
	
	monthly_pay = loan_amount;
	monthly_pay = monthly_pay * ((interest_rate / 12) / (double) 100);
	monthly_pay = monthly_pay * pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12));
	monthly_pay = monthly_pay / (pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12)) - (double) 1);
	
	for (i = 1; i <= (term_years * 12); i++)
	{
		month_int = loan * (interest_rate / 12) / (double) 100;
		proj_int += month_int;
		loan = loan - monthly_pay + month_int;
	}
	
	for (year = 1; year <= term_years; year++)
	{
		printf("------------------------------------------------------------------------\n");
		printf("Year  Month  Interest  Principal  Balance  |  INTEREST  PRINCIPAL  EXTRA\n");
		printf("------------------------------------------------------------------------\n");
		
		for (month = 1; month <= 12; month++)
		{
			total_int = total_int + (loan_amount * (interest_rate / 12) / 100);
			total_prin = total_prin + (monthly_pay - (loan_amount * (interest_rate / 12) / 100)) + extra;
			total_months++;
			
			if (month == 1)
			{
				printf("  %2d    %3d       %3.0lf       %4.0lf   %6.0lf  |     %5.0lf     %6.0lf   %4.0lf\n", year, month + ((year - 1) * 12), \
					loan_amount * (interest_rate / 12) / 100, monthly_pay - (loan_amount * (interest_rate / 12) / 100), \
					loan_amount - monthly_pay - extra + (loan_amount * (interest_rate / 12) / 100), total_int, total_prin, extra);
			}
			else
			{
				printf("        %3d       %3.0lf       %4.0lf   %6.0lf  |     %5.0lf     %6.0lf   %4.0lf\n", month + ((year - 1) * 12), \
					loan_amount * (interest_rate / 12) / 100, monthly_pay - (loan_amount * (interest_rate / 12) / 100), \
					loan_amount - monthly_pay - extra + (loan_amount * (interest_rate / 12) / 100), total_int, total_prin, extra);
			}
			
			loan_amount = loan_amount - monthly_pay - extra + (loan_amount * (interest_rate / 12) / 100);
			
			if (loan_amount <= 0)
			{
				indicator = 1;
				break;
			}
		}
		
		if (indicator == 1)
			break;
	}
	
	months_early = (term_years * 12) - total_months;
	printf("\nThe payments are finished %d months (%.1lf years) earlier!\n", months_early, months_early / (double) 12);
	printf("The interest saving is %.0lf\n", proj_int - total_int);
}

void output_extra_yearly(double loan_amount, double interest_rate, double term_years, double extra)
{
	int year, month, total_months = 0, months_early = 0, i, indicator = 0;
	double total_int = 0, total_prin = 0, proj_int = 0, month_int, loan = loan_amount, monthly_pay;
	
	monthly_pay = loan_amount;
	monthly_pay = monthly_pay * ((interest_rate / 12) / (double) 100);
	monthly_pay = monthly_pay * pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12));
	monthly_pay = monthly_pay / (pow(((double) 1 + ((interest_rate / 12) / (double) 100)), (term_years * 12)) - (double) 1);
	
	for (i = 1; i <= (term_years * 12); i++)
	{
		month_int = loan * (interest_rate / 12) / (double) 100;
		proj_int += month_int;
		loan = loan - monthly_pay + month_int;
	}
	
	for (year = 1; year <= term_years; year++)
	{
		printf("------------------------------------------------------------------------\n");
		printf("Year  Month  Interest  Principal  Balance  |  INTEREST  PRINCIPAL  EXTRA\n");
		printf("------------------------------------------------------------------------\n");
		
		for (month = 1; month <= 12; month++)
		{
			total_int = total_int + (loan_amount * (interest_rate / 12) / 100);
			total_prin = total_prin + (monthly_pay - (loan_amount * (interest_rate / 12) / 100));
			total_months++;
			
			if (month == 12)
				total_prin = total_prin + extra;
			
			if (month == 1)
			{
				printf("  %2d    %3d       %3.0lf       %4.0lf   %6.0lf  |     %5.0lf     %6.0lf\n", year, month + ((year - 1) * 12), \
					loan_amount * (interest_rate / 12) / 100, monthly_pay - (loan_amount * (interest_rate / 12) / 100), \
					loan_amount - monthly_pay + (loan_amount * (interest_rate / 12) / 100), total_int, total_prin);
			}
			else
			{
				if (month == 12)
				{
					printf("        %3d       %3.0lf       %4.0lf   %6.0lf  |     %5.0lf     %6.0lf   %4.0lf\n", month + ((year - 1) * 12), \
						loan_amount * (interest_rate / 12) / 100, monthly_pay - (loan_amount * (interest_rate / 12) / 100), \
						loan_amount - monthly_pay - extra + (loan_amount * (interest_rate / 12) / 100), total_int, total_prin, extra);
				}
				else
				{
					printf("        %3d       %3.0lf       %4.0lf   %6.0lf  |     %5.0lf     %6.0lf\n", month + ((year - 1) * 12), \
						loan_amount * (interest_rate / 12) / 100, monthly_pay - (loan_amount * (interest_rate / 12) / 100), \
						loan_amount - monthly_pay + (loan_amount * (interest_rate / 12) / 100), total_int, total_prin);
				}
			}
			
			if (month == 12)
				loan_amount = loan_amount - monthly_pay - extra + (loan_amount * (interest_rate / 12) / 100);
			else
				loan_amount = loan_amount - monthly_pay + (loan_amount * (interest_rate / 12) / 100);
			
			if (loan_amount <= 0)
			{
				indicator = 1;
				break;
			}
		}
		
		if (indicator == 1)
			break;
	}
	
	months_early = (term_years * 12) - total_months;
	printf("\nThe payments are finished %d months (%.1lf years) earlier!\n", months_early, months_early / (double) 12);
	printf("The interest saving is %.0lf\n", proj_int - total_int);
}

int main(void)
{
	double loan_amount, interest_rate, term_years, extra;
	int choice = 0;
	
	printf("Enter the loan amount: ");
	scanf("%lf", &loan_amount);
	
	printf("Enter the interest rate: ");
	scanf("%lf", &interest_rate);
	
	printf("Enter the years it will take: ");
	scanf("%lf", &term_years);
	
	while (choice != -1)
	{
		printf("\nSelect which option (-1 to quit):\n");
		printf("1) Short Format\n");
		printf("2) Amortized Schedule\n");
		printf("3) Early Payments: monthly\n");
		printf("4) Early Payments: yearly\n");
		scanf("%d", &choice);
		printf("\n");
		
		if (choice == 1)
		{
			output_short_format(loan_amount, interest_rate, term_years);
		}
		else if (choice == 2)
		{
			output_amortized(loan_amount, interest_rate, term_years);
		}
		else if (choice == 3)
		{
			printf("Enter the amount you want to pay extra per month: ");
			scanf("%lf", &extra);
			output_extra_monthy(loan_amount, interest_rate, term_years, extra);
		}
		else if (choice == 4)
		{
			printf("Enter the amount you want to pay extra per year: ");
			scanf("%lf", &extra);
			output_extra_yearly(loan_amount, interest_rate, term_years, extra);
		}
	}
	
	return 0;
}