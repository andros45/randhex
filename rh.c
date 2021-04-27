#include <stdio.h>
#include <stdlib.h>

const int NUM = 100000;

int main(int argc, char * argv[])
{
	char c = 'z';
	char four[5];

	for (int p = 0; p<NUM; p++) {
		for (int q = 0; q<4; q++) {
			int r = rand() % 15;
			switch (r)
			{
				case 0:
					c = '0';
					break;
				case 1:
					c = '1';
					break;
				case 2:
					c = '2';
					break;
				case 3:
					c = '3';
					break;
				case 4:
					c = '4';
					break;
				case 5:
					c = '5';
					break;
				case 6:
					c = '6';
					break;
				case 7:
					c = '7';
					break;
				case 8:
					c = '8';
					break;
				case 9:
					c = '9';
					break;
				case 10:
					c = 'A';
					break;
				case 11:
					c = 'B';
					break;
				case 12:
					c = 'C';
					break;
				case 13:
					c = 'D';
					break;
				case 14:
					c = 'E';
					break;
				case 15:
					c = 'F';
					break;
				default:
					c = '?';
					break;
			}
			four[q]=c;
			printf("%c",c);
		}
		printf(" ");
	};

	return 1;
}
