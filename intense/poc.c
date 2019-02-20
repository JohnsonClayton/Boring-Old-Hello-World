#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char c[10] = "\000";
	char str[50] = "\000";
	char new_str[50] = "\000";
	int counter = 0;
	int warn_chars = 0;
	system("clear");
	while(1) {
		printf("%s\n\n\n\n", new_str);
		if(warn_chars) {
			printf("You're adding a few too many characters there, buddy...\n");
		}
		printf("%s", new_str);

		strcpy(str, new_str);

		c[0] = getchar();
		system("clear");

		if((int)c[0] == 13 || (int)c[0] == 3) {
			break;
		} else if ((int)c[0] == 127) {
			//printf("Size of str is: %d", strlen(str));
			str[counter] = '\000';
			if(counter > 0) {
				//str[counter-1] = '\000';
				new_str[counter-1] = '\000';
				--counter;
			}
		} else if(counter < 50){
			++counter;

			strcpy(new_str, str);
			strcat(new_str, c);
		} else {
			warn_chars = 1;
		}

	}
	return 0;
}
