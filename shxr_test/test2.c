#include<stdio.h>

int main()
{
	/*printf("Hello, World!!\n");*/

	char user_input_1;

	printf("Enter a letter: ");
	scanf("%c", &user_input_1);
	printf("Your letter is %c, %d\n", user_input_1, user_input_1);

	return 0;
}
