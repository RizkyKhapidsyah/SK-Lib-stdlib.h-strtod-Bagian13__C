#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str1[] = "123";
	char str2[] = "10.55";
	char str3[] = "100 some words";
	char str4[] = "some words 555";
	char str5[] = "inF";
	char str6[] = "Nan(2)";

	char* end;

	double num1 = strtod(str1, &end);
	double num2 = strtod(str2, &end);
	double num3 = strtod(str3, &end);
	double num4 = strtod(str4, NULL);
	double num5 = strtod(str5, NULL);
	double num6 = strtod(str6, NULL);

	//menampilkan hasil
	printf("strtod(\"%s\") = %.2f\n", str1, num1);
	printf("strtod(\"%s\") = %.2f\n", str2, num2);
	printf("strtod(\"%s\") = %.2f\n", str3, num3);
	printf("strtod(\"%s\") = %.2f\n", str4, num4);
	printf("strtod(\"%s\") = %.2f\n", str5, num5);
	printf("strtod(\"%s\") = %.2f\n", str6, num6);

	_getch();
	return 0;
}