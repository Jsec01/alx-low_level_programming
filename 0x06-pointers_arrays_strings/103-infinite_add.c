#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(const char* num1, const char* num2, char* result, int max_result_size)

{	int carry = 0;
	int len1 = strlen(num1);
	int len2 =strlen(num2);

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? num1[i] - '0' : 0;
		int digit2 = (j >= 0) ? num2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;
		carry = sum / 10;
		result[k] = (sum % 10) + '0';

		i--;
		j--;
		k++;

		if (k >= max_result_size - 1)
		{	// Overflow, result buffer not large enough
			return NULL;
		}
	}

	rsult[k] = '\0';

	//Reverse the result string
	for (int start = 0, end = k - 1; start < end; start++, end--) 
		{	
			char temp = result[start]; result[start] = result[end]; result[end] = temp;
		}
	
	return result;
}

int main() 
{
	char num1[MAX_DIGITS], num2[MAX_DIGITS];
	char result[MAX_DIGITS + 1];

	printf("Enter the first number:");
	
	scanf("%s", num1);
	
	printf("Enter the second number:");

	scanf("%s", num2);

	char* sum = infinite_add(num1, num2, result, MAX_DIGITS + 1);

	if (sum != NULL)
	{
		printf("Sum: %s\n", sum);
	}
	else 
	{
		prinf("Overflow: Result is too large for the buffer.\n");
	}

	return 0;
}
