//number of vowels given
#include<stdio.h>
#include<string.h>
#define MAX 100
main()
{
	char str[MAX];
	int a,vowel,consonant,i;
	printf("enter a string:");
	scanf("%[^\n]s",&str);
	vowel=0;
	consonant=0;
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='T'||str[i]=='O'||str[i]=='U')
		vowel++;
	}
	printf("total number of vowel=%d\n",vowel);
}
