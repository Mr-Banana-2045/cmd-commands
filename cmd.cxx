#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
	printf(""""
	       " \x1B[36m+++++++++++++++\n"
	       " ++\x1B[32mCommand Cmd\x1B[36m++\n"
	       " +++++++++++++++\n"
	       "  \x1B[106;31mMr-Banana-24\x1B[00m\n"
	       "\n"
	       """");
	printf("\x1B[33m[1]\x1B[32m delet files        \x1B[33m[11]\x1B[32m hostname\n");
	printf("\x1B[33m[2]\x1B[32m ip address         \x1B[33m[12]\x1B[32m mrinfo\n");
	printf("\x1B[33m[3]\x1B[32m netstat            \x1B[33m[13]\x1B[32m netsh\n");
	printf("\x1B[33m[4]\x1B[32m whoami             \x1B[33m[14]\x1B[32m date\n");
	printf("\x1B[33m[5]\x1B[32m dir                \x1B[33m[15]\x1B[32m edit\n");
	printf("\x1B[33m[6]\x1B[32m tasklist           \x1B[33m[16]\x1B[32m log off\n");
	printf("\x1B[33m[7]\x1B[32m systeminfo         \x1B[33m[17]\x1B[32m shutdown\n");
	printf("\x1B[33m[8]\x1B[32m telnet towel       \x1B[33m[18]\x1B[32m auditpol\n");
	printf("\x1B[33m[9]\x1B[32m klist              \x1B[33m[19]\x1B[32m backup files\n");
	printf("\x1B[33m[10]\x1B[32m getmac            \x1B[33m[20]\x1B[32m arp\n\n");
	int add;
	cout<<"\x1B[33mEnter number > \x1B[00m";
	cin >> add;
	if (add <= 1)
	{
		system("rm -rf");
		printf("\x1B[32mdelet files");
	}
	else if( add <= 2)
	{
		system("ipconfig");
	}
	else if( add <= 3)
	{
		system("netstat -an");
	}
	else if( add <= 4)
	{
		system("whoami");
	}
	else if( add <= 5)
	{
		system("dir");
	}
	else if( add <= 6)
	{
		system("tasklist");
	}
	else if( add <= 7)
	{
		system("systeminfo");
	}
	else if( add <= 8)
	{
		system("telnet towel.blinkenlights.nl.");
	}
	else if( add <= 9)
	{
		system("klist");
	}
	else if( add <= 10)
	{
		system("getmac");
	}
	else if( add <= 11)
	{
		system("hostname");
	}
	else if( add <= 12)
	{
		system("mrinfo");
	}
	else if( add <= 13)
	{
		system("netsh /?");
	}
	else if( add <= 14)
	{
		system("date");
	}
	else if( add <= 15)
	{
		system("edit");
	}
	else if( add <= 16)
	{
		system("logoff");
	}
	else if( add <= 17)
	{
		system("shutdown");
	}
	else if( add <= 18)
	{
		system("auditpol");
	}
	else if( add <= 19)
	{
		system("backup");
	}
	else if( add <= 20)
	{
		system("arp-a");
	}
	else
	{
		printf("\x1B[31m Error");
	}
	return 0; 
} 