#include <stdio.h>  
#include <string.h>

#define MAX 30

int main() {
	char str[MAX] = "Eu gosto de você haha ", substr[MAX] = "você", replace[MAX] = "ninguem ", output[MAX * 3];
	int i = 0, j = 0, flag = 0, start = 0;
	
	str[strlen(str) - 1] = '\0';
	substr[strlen(substr) - 1] = '\0';
	replace[strlen(replace) - 1] =  '\0';

	for(i = 0; str[i] != '\0'; i++)	{
			if (str[i] == substr[j]) {
				if (!flag)
					start = i;
				j++;
				if (substr[j] == '\0')
					break;
				flag = 1;
			}
			else {
				flag = start = j = 0;
			}
	}
	if (substr[j] == '\0' && flag)
	{
			for (i = 0; i < start; i++)
				output[i] = str[i];

			// replace substring with another string 
			for (j = 0; j < strlen(replace); j++) 
			{
					output[i] = replace[j];
					i++;
			}
			// copy remaining portion of the input string "str" 
			for (j = start + strlen(substr); j < strlen(str); j++)
			{
					output[i] = str[j];
					i++;
			}
			output[i] = '\0';
			printf("Output: %s\n", output);
	}
	return 0;
}
