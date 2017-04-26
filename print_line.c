/* Print the longest line. */
#include <stdio.h>

#define MAXLINE 1000
// Print the text.
int getlines(char text[])
{
	int i = 0;
	char c;

	while((c = getchar()) != '\n'){
		text[i] = c;
		++i;
	}
	return i;	// return the number of the characters.
}
// Save the longest line.
void copy_text(char to[], char from[])
{
	int i = 0;

	while(from[i] != '\0'){
		to[i] = from[i];	// store into the longest array.
		++i;
	}
}
int main(int argc, char const *argv[])
{
	char text[MAXLINE], longest[MAXLINE];
	int len;
	int max = 0;
	int i = 0;

	while((len = getlines(text)) > 1){
		if(len > max){
			max = len;
			copy_text(longest, text);
		}
	}
	printf("%d\n", max);
	printf("%s\n", longest);
	return 0;
}