#include <iostream>
#include <ctime>
#include<windows.h>
#include<conio.h>
using namespace std;


int main()
{
	cout << "Programma kotoraya pozvolayet uznat skolko dney proshlo s pervogo sobitiya do poslendego";
	cout << endl;
	int l = 0;//l-peremennaya dney 
	int f = 0;//posl mes
	int per_mes, pos_mes = 12;
	int per_den = 0; cout << "Vvedite den pervogo sobitiya 1-31:"; cin >> per_den;

	cout << "Vvedite mesac pervogo sobitiya 1-12:";    cin >> per_mes;

	int nach_god = 0; cout << "Vvedite god pervogo sobitiya:"; cin >> nach_god;

	cout << endl;

	int pos_den = 0; cout << "Vvedite den poslednego sobitiya 1-31:"; cin >> pos_den;

	cout << "Vvedite mes poslednego sobitiya 1-12:"; cin >> f;

	int kon_god = 0; cout << "Vvedite god poslednego sobitiya:"; cin >> kon_god;
	int d = 31;
	for (int i = nach_god; i <= kon_god; i++)
	{
		if (i == kon_god) { pos_mes = f; }


		if (i % 4 == 0)
		{
			if (i < 100)
			{
				for (int e = per_mes; e <= pos_mes; e++)
				{

					if (e == 1 || e == 3 || e == 5 || e == 7 || e == 8 || e == 10 || e == 12)
					{
						d = 31;
						if (i == kon_god && e == pos_mes) { d = pos_den; }
						for (int k = per_den; k <= d; k++)
						{
							l++;
						}
						per_den = 1;
					}
					else if (e == 2)
					{
						d = 28;
						if (i == kon_god && e == pos_mes) { d = pos_den; }
						for (int k = per_den; k <= d; k++)
						{
							l++;
						}
						per_den = 1;
					}
					else
					{
						d = 30;
						if (i == kon_god && e == pos_mes) { d = pos_den; }
						for (int k = per_den; k <= d; k++)
						{
							l++;
						}
						per_den = 1;
					}
				}
			}
			else if (i >= 100)
			{
				if (i % 100 > 0)
				{
					for (int e = per_mes; e <= pos_mes; e++)
					{

						if (e == 1 || e == 3 || e == 5 || e == 7 || e == 8 || e == 10 || e == 12)
						{
							d = 31;
							if (i == kon_god && e == pos_mes) { d = pos_den; }
							for (int k = per_den; k <= d; k++)
							{
								l++;
							}
							per_den = 1;
						}
						else if (e == 2)
						{
							d = 29;
							if (i == kon_god && e == pos_mes) { d = pos_den; }
							for (int k = per_den; k <= d; k++)
							{
								l++;
							}
							per_den = 1;
						}
						else
						{
							d = 30;
							if (i == kon_god && e == pos_mes) { d = pos_den; }
							for (int k = per_den; k <= d; k++)
							{
								l++;
							}
							per_den = 1;
						}
					}
				}
				else if (i % 100 == 0)
				{
					if (i % 400 == 0)
					{
						for (int e = per_mes; e <= pos_mes; e++)
						{
							if (e == 1 || e == 3 || e == 5 || e == 7 || e == 8 || e == 10 || e == 12)
							{
								d = 31;
								if (i == kon_god && e == pos_mes) { d = pos_den; }
								for (int k = per_den; k <= d; k++)
								{
									l++;
								}
								per_den = 1;
							}
							else if (e == 2)
							{
								d = 29;
								if (i == kon_god && e == pos_mes) { d = pos_den; }
								for (int k = per_den; k <= d; k++)
								{
									l++;
								}
								per_den = 1;
							}
							else
							{
								d = 30;
								if (i == kon_god && e == pos_mes) { d = pos_den; }
								for (int k = per_den; k <= d; k++)
								{
									l++;
								}
								per_den = 1;
							}
						}
					}
					else
					{
						for (int e = per_mes; e <= pos_mes; e++)
						{
							if (e == 1 || e == 3 || e == 5 || e == 7 || e == 8 || e == 10 || e == 12)
							{
								d = 31;
								if (i == kon_god && e == pos_mes) { d = pos_den; }
								for (int k = per_den; k <= d; k++)
								{
									l++;
								}
								per_den = 1;
							}
							else if (e == 2)
							{
								d = 28;
								if (i == kon_god && e == pos_mes) { d = pos_den; }
								for (int k = per_den; k <= d; k++)
								{
									l++;
								}
								per_den = 1;
							}
							else
							{
								d = 30;
								if (i == kon_god && e == pos_mes) { d = pos_den; }
								for (int k = per_den; k <= d; k++)
								{
									l++;
								}
								per_den = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			for (int e = per_mes; e <= pos_mes; e++)
			{
				if (e == 1 || e == 3 || e == 5 || e == 7 || e == 8 || e == 10 || e == 12)
				{
					d = 31;
					if (i == kon_god && e == pos_mes) { d = pos_den; }
					for (int k = per_den; k <= d; k++)
					{
						l++;
					}
					per_den = 1;
				}
				else if (e == 2)
				{
					d = 28;
					if (i == kon_god && e == pos_mes) { d = pos_den; }
					for (int k = per_den; k <= d; k++)
					{
						l++;
					}
					per_den = 1;
				}
				else
				{
					d = 30;
					if (i == kon_god && e == pos_mes) { d = pos_den; }
					for (int k = per_den; k <= d; k++)
					{
						l++;
					}
					per_den = 1;
				}
			}
		}
		per_den = 1;
		per_mes = 1;
	}
	cout << endl;
	cout << "Obsheye kol dney: " << l;
	cout << endl;
}