#include<stdio.h>
int main(){
char ch;
printf("Enter any character");
scanf("%c",&ch);
if ('a'<=ch && ch<='z')
printf("%c is a Small aplhabet/n",ch);
else if ('A'<=ch && ch<='Z')
printf("%c is a Capital Alphabet/n",ch);
else if ('0'<=ch && ch<='9')
	printf("%c is a Digit/n",ch);
else printf("%c is a Special Character/n",ch);
return 0;
}
