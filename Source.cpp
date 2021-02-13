#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<direct.h>
#pragma warning(disable:4996)
int count1 = 0, count2 = 0, count3 = 0, count4 = 0,NEW=0;
int access = 0;
int creat = 0;
int error = 0;
char usersu[20], passsu[20],esm[20];
void setcolor(int colorcode) {
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, colorcode % 255);
}
typedef struct student {
	char user[20];
	char pass[20];
	int dasresy;
	char name[20];
	int time;
	//int ghovat;
}student;
student chgr1, chgr2, chgr3, chgr4;
student USA,iran,germany,canada1,tt;
student inpp, inpq, tmp1, tmp2, tmp3, tmp4,O1,O2,O3,O4,creat1,creat2,creat3,creat4,su1,su2,su3,su4;
//if (count1 = 0) {
struct student inp1 = { "user1", "adminn",1,"james",0 };
struct student inp2 = { "user2", "admin",0,"matin",1599859185 };
struct student inp3 = { "user3", "admin3",0,"john",1599859185 };
struct student inp4 = { "USERADMIN", "ADMIN@GMAIL",1,"JIMMY",0 };
//void user_1(struct student user1) {
//	FILE* USER1;
//	USER1 = fopen("user1.bin", "wb");
//	fwrite(&user1, sizeof(struct student), 1, USER1);
//	fclose(USER1);
//}
//void user_2(struct student user2) {
//	FILE* USER2;
//	USER2 = fopen("user2.bin", "wb");
//	fwrite(&user2, sizeof(struct student), 1, USER2);
//	fclose(USER2);
//}
//void user_3(struct student user3) {
//	FILE* USER3;
//	USER3 = fopen("user3.bin", "wb");
//	fwrite(&user3, sizeof(struct student), 1, USER3);
//	fclose(USER3);
//}
//void user_4(struct student user4) {
//	FILE* USER4;
//	USER4 = fopen("user4.bin", "wb");
//	fwrite(&user4, sizeof(struct student), 1, USER4);
//	fclose(USER4);
//}
void changeuser1(char newpass[]) {

	FILE* change1;
	change1 = fopen("user1.bin", "rb");
	fread(&tmp1, sizeof(struct student), 1, change1);
	strcpy(tmp1.pass, newpass);
	fclose(change1);
	FILE* chang1;
	chang1 = fopen("user1.bin", "wb");
	fwrite(&tmp1, sizeof(struct student), 1, chang1);
	fclose(chang1);
}
void changeuser2(char newpass[]) {

	FILE* change2;
	change2 = fopen("user2.bin", "rb");
	fread(&tmp2, sizeof(struct student), 1, change2);
	strcpy(tmp2.pass, newpass);
	fclose(change2);
	FILE* chang2;
	chang2 = fopen("user2.bin", "wb");
	fwrite(&tmp2, sizeof(struct student), 1, chang2);
	fclose(chang2);
}
void changeuser3(char newpass[]) {

	FILE* change3;
	change3 = fopen("user3.bin", "rb");
	fread(&tmp3, sizeof(struct student), 1, change3);
	strcpy(tmp3.pass, newpass);
	fclose(change3);
	FILE* chang3;
	chang3 = fopen("user3.bin", "wb");
	fwrite(&tmp3, sizeof(struct student), 1, chang3);
	fclose(chang3);
}
void changeuser4(char newpass[]) {

	FILE* change4;
	change4 = fopen("user4.bin", "rb");
	fread(&tmp4, sizeof(struct student), 1, change4);
	strcpy(tmp4.pass, newpass);
	fclose(change4);
	FILE* chang4;
	chang4 = fopen("user4.bin", "wb");
	fwrite(&tmp4, sizeof(struct student), 1, chang4);
	fclose(chang4);
}
void changenewuser(char newpass[]) {
	FILE* canada;
	canada = fopen("newuser1.bin", "rb");
	fread(&canada1, sizeof(struct student), 1, canada);
	strcpy(canada1.pass, newpass);
	fclose(canada);
	FILE* canada2;
	canada2 = fopen("newuser1.bin", "wb");
	fwrite(&canada1, sizeof(struct student), 1, canada2);
	fclose(canada2);
}
void su(char username1[], int ac, char USERNAME[], char password[]) {
	char pp[20];
	int v = 0;
	if (ac == 0) {
		puts("please insert password");
		setcolor(0);
		scanf("%s", pp);
		setcolor(7);
		if (strcmp(username1, inp1.user) == 0) {
			FILE* read1;
			read1 = fopen("user1.bin", "rb");
			fread(&su1, sizeof(struct student), 1, read1);
			if (strcmp(pp, su1.pass) == 0) {
				v = 1;
				setcolor(10);
				printf("you have entered to %s account\n", su1.name);
				strcpy(passsu, su1.pass);
				strcpy(esm, su1.name);
				strcpy(usersu, su1.user);
				access = su1.dasresy;
			}
			fclose(read1);
		}
		if (strcmp(username1, inp2.user) == 0) {
			FILE* read2;
			read2 = fopen("user2.bin", "rb");
			fread(&su2, sizeof(struct student), 1, read2);
			if (strcmp(pp, su2.pass) == 0) {
				v = 1;
				setcolor(10);
				printf("you have entered to %s account\n", su2.name);
				strcpy(passsu, su2.pass);
				access = su2.dasresy;
				strcpy(esm, su2.name);
				strcpy(usersu, su2.user);
			}
			
			fclose(read2);
		}
		if (strcmp(username1, inp3.user) == 0) {
			FILE* read3;
			read3 = fopen("user3.bin", "rb");
			fread(&su3, sizeof(struct student), 1, read3);
			if (strcmp(su3.pass, pp) == 0) {
				v = 1;
				setcolor(10);
				printf("you have entered to %s account\n", su3.name);
				access = su3.dasresy;
				strcpy(passsu, su3.pass);
				strcpy(esm, su3.name);
				strcpy(usersu, su3.user);
			}
		
			fclose(read3);
		}
		if (strcmp(username1, inp4.user) == 0) {
			FILE* read4;
			read4 = fopen("user4.bin", "rb");
			fread(&su4, sizeof(struct student), 1, read4);
			if (strcmp(pp, su4.pass) == 0) {
				v = 1;
				access = su4.dasresy;
				setcolor(10);
				printf("you have entered to %s account\n", su4.name);
				strcpy(passsu, su4.pass);
				strcpy(esm, su4.name);
				strcpy(usersu, su4.user);
			}
			fclose(read4);
		}
		else {
			FILE* ir;
			ir = fopen("newuser1.bin", "rb");
			fread(&iran, sizeof(struct student), 1, ir);
			if (strcmp(iran.pass, pp) == 0 && strcmp(iran.user, username1) == 0) {
				v = 1;
				access = iran.dasresy;
				setcolor(10);
				printf("you have entered to %s account\n", iran.name);
				strcpy(passsu, iran.pass);
				strcpy(esm, iran.name);
				strcpy(usersu, iran.user);
			}
			fclose(ir);
		}
		if (v == 0) {
			puts("you have entered incorrect username");
			return;
		}
	}
	if (ac == 1) {
		
		setcolor(7);
		if (strcmp(username1, inp1.user) == 0) {
			FILE* read1;
			read1 = fopen("user1.bin", "rb");
			fread(&su1, sizeof(struct student), 1, read1);
			access = su1.dasresy;
				v = 1;
				strcpy(passsu, su1.pass);
				strcpy(esm, su1.name);
				strcpy(usersu, su1.user);
				setcolor(10);
				printf("you have entered to %s account\n", su1.name);
			
			fclose(read1);
		}
		if (strcmp(username1, inp2.user) == 0) {
			FILE* read2;
			read2 = fopen("user2.bin", "rb");
			fread(&su2, sizeof(struct student), 1, read2);			
				v = 1;
				setcolor(10);
				printf("you have entered to %s account\n", su2.name);
				strcpy(passsu, su2.pass);
				access = su2.dasresy;
				strcpy(esm, su2.name);
				strcpy(usersu, su2.user);
			fclose(read2);
		}
		if (strcmp(username1, inp3.user) == 0) {
			FILE* read3;
			read3 = fopen("user3.bin", "rb");
			fread(&su3, sizeof(struct student), 1, read3);
				v = 1;
				setcolor(10);
				printf("you have entered to %s account\n", su3.name);
				strcpy(passsu, su3.pass);
				strcpy(esm, su3.name);
				access = su3.dasresy;
				strcpy(usersu, su3.user);			
			fclose(read3);
		}
		if (strcmp(username1, inp4.user) == 0) {
			FILE* read4;
			read4 = fopen("user4.bin", "rb");
			fread(&su4, sizeof(struct student), 1, read4);
				v = 1;
				access = su4.dasresy;
				setcolor(10);
				printf("you have entered to %s account\n", su4.name);
				strcpy(passsu, su4.pass);
				strcpy(esm, su4.name);
				strcpy(usersu, su4.user);
			fclose(read4);
		}
		else {
			FILE* ir;
			ir = fopen("newuser1.bin", "rb");
			fread(&iran, sizeof(struct student), 1, ir);
			if ( strcmp(iran.user, username1) == 0) {
				v = 1;
				access = iran.dasresy;
				setcolor(10);
				printf("you have entered to %s account\n", iran.name);
				strcpy(passsu, iran.pass);
				strcpy(esm, iran.name);
				strcpy(usersu, iran.user);
			}
			fclose(ir);
		}
	}
}
int ghovat(char str[]) {
	int a=0;
	char c;
	for (int i = 0;i < strlen(str);i++) {
		c = str[i];
		if (c <= 'z' && c >= 'a')
			a += 2;
		else if (c >= 'A' && c <= 'Z')
			a += 4;
		else if (c >= '0' && c <= '9')
			a += 3;
		else if (c == ' ')
			a += 1;
		else {
			a += 8;
		}
	}
	return a;
}
void chgr(int ac, char chgr[]) {
	if (ac == 0) {
		setcolor(3);
		puts("you don't have access to other accounts !");
		setcolor(7);
		return;
	}
	else if (ac ==1) {
		if (strcmp(inp1.user, chgr) == 0) {
			setcolor(1);
			puts("this account is admin !");
			setcolor(7);
		}
		if (strcmp(inp4.user, chgr) == 0) {
			setcolor(1);
			puts("this account is admin !");
			setcolor(7);
		}
		if (strcmp(inp2.user, chgr) == 0) {
			FILE* fr1;
			fr1 = fopen("user2.bin", "rb");
			fread(&chgr1, sizeof(struct student), 1, fr1);
			fclose(fr1);
			if (chgr1.dasresy == 1) {
				setcolor(1);
				printf("this account is admin !\n");setcolor(7);
			}
			
			else if (ghovat(chgr1.pass) > 75&&chgr1.dasresy==0&&error<10) {
				chgr1.dasresy = 1;
				setcolor(1);
				printf("this account changed to admin !\n");setcolor(7);
			}
			else {
				setcolor(1);
				printf("this account cannot be admin !\n");setcolor(7);
			}
			
			FILE* fr11;
			fr11 = fopen("user2.bin", "wb");
			fwrite(&chgr1, sizeof(struct student), 1, fr11);
			fclose(fr11);
		}
		if (strcmp(inp3.user, chgr) == 0) {
			if (chgr3.dasresy == 1) {
				setcolor(1);
				printf("this account is admin !\n");setcolor(7);
			}
			FILE* fr2;
			fr2 = fopen("user3.bin", "rb");
			fread(&chgr3, sizeof(struct student), 1, fr2);
			 if (ghovat(chgr3.pass) > 75 && chgr3.dasresy == 0 && error < 10) {
				chgr3.dasresy = 1;
				setcolor(1);
				printf("this account changed to admin !\n");setcolor(7);
			}
			 else{
				 setcolor(1);
				 printf("this account cannot be admin !\n");setcolor(7);
			 }
			fclose(fr2);
			FILE* fr22;
			fr22 = fopen("user3.bin", "wb");
			fwrite(&chgr3, sizeof(struct student), 1, fr22);
			fclose(fr22);
		}
		else {
			FILE* fr5;
			fr5 =fopen("newuser1.bin","rb");
			 fread(&chgr4, sizeof(struct student), 1, fr5);
			 if (strcmp(chgr, chgr4.user) == 0) {
				 if (chgr4.dasresy == 1) {
					 setcolor(1);
					 printf("this account is admin !\n");setcolor(7);
				 }
				 
				 else if (ghovat(chgr4.pass) > 75&& chgr4.dasresy == 0 && error < 10) {
					 chgr4.dasresy = 1;
					 setcolor(1);
					 printf("this account changed to admin !\n");setcolor(7);
				 }
				 else {
					 setcolor(1);
					 printf("this account cannot be admin !\n");setcolor(7);
				 }
				 fclose(fr5);
				 FILE* frr5;
				 frr5 = fopen("newuser1.bin", "wb");
				 fwrite(&chgr4, sizeof(struct student), 1, frr5);
				 fclose(frr5);
			 }
		}

	}
}

void fucpasswd(char USER[], char username[], int ac) {
	student INP;
	char newpass[20];
	FILE* ptrr;
	if (ac == 0) {
		if (strcmp(USER, username) != 0) {
			puts("you don't have access to this account!");
			return;
		}
		else {
			puts("please insert new password");
			setcolor(0);
			scanf("%s", newpass);
			setcolor(7);
			if (strcmp(USER, inp1.user) == 0) {
				strcpy(inp1.user, newpass);
				changeuser1(newpass);
			}
			else if (strcmp(USER, inp2.user) == 0) {
				strcpy(inp2.user, newpass);
				changeuser2(newpass);
			}
			else if (strcmp(USER, inp3.user) == 0) {
				strcpy(inp3.user, newpass);
				changeuser3(newpass);
			}
			else if (strcmp(USER, inp4.user) == 0) {
				strcpy(inp4.user, newpass);
				changeuser4(newpass);
			}
			else {
				FILE* ger;
				ger= fopen("newuser1.bin", "rb");
				fread(&germany, sizeof(struct student), 1, ger);
				if (strcmp(germany.user, USER) == 0) {
					strcpy(germany.user, newpass);
					changenewuser(newpass);
				}
			}
		}
	}
	if (ac == 1) {
		//puts("please insert username");
		int aa = 0;
		if (strcmp(USER, inp1.user) == 0) {
			
			puts("please insert new password");
			setcolor(0);
			scanf("%s", newpass);
			setcolor(7);
			strcpy(inp1.user, newpass);
			changeuser1(newpass);
			aa++;
		}
		else if (strcmp(USER, inp2.user) == 0) {
			puts("please insert new password");
			setcolor(0);
			scanf("%s", newpass);
			setcolor(7);
			strcpy(inp2.user, newpass);
			changeuser2(newpass);
			aa++;
		}
		else if (strcmp(USER, inp3.user) == 0) {
			puts("please insert new password");
			setcolor(0);
			scanf("%s", newpass);
			setcolor(7);
			strcpy(inp3.user, newpass);
			changeuser3(newpass);
			aa++;
		}
		else if (strcmp(USER, inp4.user) == 0) {
			puts("please insert new password");
			setcolor(0);
			scanf("%s", newpass);
			setcolor(7);
			strcpy(inp4.user, newpass);
			changeuser4(newpass);
			aa++;
		}
		else {
			FILE* TT;
			TT = fopen("newuser1.bin", "rb");
			fread(&tt, sizeof(struct student), 1, TT);
			if (strcmp(USER, tt.user) == 0) {
				puts("please insert new password");
				setcolor(0);
				scanf("%s", newpass);
				setcolor(7);
				strcpy(tt.user, newpass);
				changenewuser(newpass);
				aa++;
			}
			fclose(TT);
		}
		
		if (aa == 0) {
			setcolor(3);
			puts("username that you entered is incorrect");setcolor(7);
			return;
}
	}

}
void passwdltime(int ac) {
	time_t seconds;
	seconds = time(NULL);
	char user_l[20];
	int year, month, day, hour, min,sum=0;
	scanf("%s", user_l);
	if (ac == 0) {
		puts("you don't have access ");
		return;
	}
	else if (ac == 1) {
		
		if (strcmp(user_l, inp2.user) == 0) {
			FILE* OO1;
			OO1=fopen("user2.bin", "rb");
			fread(&O1, sizeof(struct student), 1, OO1);			
			puts("please insert year");
			scanf("%d", &year);
			puts("please insert month");
			scanf("%d", &month);
			puts("please insert day");
			scanf("%d", &day);
			puts("please insert hour");
			scanf("%d", &hour);
			puts("please insert min");
			scanf("%d", &min);
			sum = year * 365 * 24 * 60 * 60 + month * 30 * 24 * 60 * 60 + min * 60;
			O1.time = sum+ seconds;
			fclose(OO1);
			FILE* OOO1;
			OOO1 = fopen("user2.bin", "wb");
			fwrite(&O1, sizeof(struct student), 1, OOO1);
			fclose(OOO1);

		}
		if (strcmp(user_l, inp3.user) == 0) {
			FILE* OO3;
			OO3 = fopen("user3.bin", "rb");
			fread(&O3, sizeof(struct student), 1, OO3);
			puts("please insert year");
			scanf("%d", &year);
			puts("please insert month");
			scanf("%d", &month);
			puts("please insert day");
			scanf("%d", &day);
			puts("please insert hour");
			scanf("%d", &hour);
			puts("please insert min");
			scanf("%d", &min);
			sum = year * 365 * 24 * 60 * 60 + month * 30 * 24 * 60 * 60 + min * 60;
			O1.time = sum+ seconds;
			fclose(OO3);
			FILE* OOO3;
			OOO3 = fopen("user2.bin", "wb");
			fwrite(&O3, sizeof(struct student), 1, OOO3);
			fclose(OOO3);

		}
	}
}
//FILE* CREAT;

void creatfile1(char username[],char password[],char name[],int time) {
	FILE* P1;
	//printf("asd");
	P1 = fopen("newuser1.bin", "wb");
	strcpy(creat1.user, username);
	strcpy(creat1.pass, password);
	strcpy(creat1.name, name);
	creat1.time = time;
	creat1.dasresy = 0;
	fwrite(&creat1, sizeof(struct student), 1, P1);
	fclose(P1);
}
void creatfile2(char username[], char password[], char name[], int time) {
	FILE* P2;
	P2 = fopen("newuser2.bin", "wb");
	strcpy(creat2.user, username);
	strcpy(creat2.pass, password);
	strcpy(creat2.name, name);
	creat2.time = time;
	creat2.dasresy = 0;
	fwrite(&P2, sizeof(struct student), 1, P2);
	fclose(P2);
}

void creatuser(int ac) {
	time_t second1;
	second1 = time(NULL);
	int years, months, days, mins,hours,sum1,time;
	if (ac == 0)
		puts("you can't creat user because you are not admin");
	else if (ac == 1) {
		puts("please enter the username");
		char newuser[20],newpass[20],newname[20];
		scanf("%s", newuser);
		
		puts("please enter the password");
		setcolor(0);
		scanf("%s", newpass);
		setcolor(7);
		puts("please enter the name");
		scanf("%s", newname);
		puts("please insert year");
		scanf("%d", &years);
		puts("please insert month");
		scanf("%d", &months);
		puts("please insert day");
		scanf("%d", &days);
		puts("please insert hour");
		scanf("%d", &hours);
		puts("please insert min");
		scanf("%d", &mins);
		sum1 = years * 365 * 24 * 60 * 60 + months * 30 * 24 * 60 * 60 + mins * 60;
		time= sum1+ second1;

		creat++;
		if (creat == 1) {
			creatfile1(newuser, newpass, newname, time);
			//puts("X,NJ");
		}

	}
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
	char sstr2[30], sstr3[30], sstr7[30];
	int aa;
	time_t second;
	second = time(NULL);
	char USERNAME[20], password[20];
	int i = 0, zz = 0;
retrun:
	setcolor(7);
	puts("please insert your username");
	int z = 0;
	char user[20], pass[20];
	fgets(user, 20, stdin);
	user[strlen(user) - 1] = '\0';
	puts("please insert your password");
	setcolor(0);
	fgets(pass, 20, stdin);
	pass[strlen(pass) - 1] = '\0';
	setcolor(0);
	/*FILE* ptr;
	ptr = fopen("c1.txt", "wb");

	fwrite(&inp1, sizeof(struct student), 1, ptr);
	fwrite(&inp2, sizeof(struct student), 1, ptr);
	fwrite(&inp3, sizeof(struct student), 1, ptr);
	fwrite(&inp4, sizeof(struct student), 1, ptr);
	fclose(ptr);*/
		/*user_1(inp1);
		user_2(inp2);
		user_3(inp3);
		user_4(inp4);*/
	//FILE* inf;
	struct student inp, a, b, c, d;
	//inf = fopen("c1.txt", "rb");

	int xx = 0;


	if (strcmp(user, inp1.user) == 0) {
		FILE* o1;
		o1 = fopen("user1.bin", "rb");
		fread(&a, sizeof(struct student), 1, o1);
		fclose(o1);
		if (strcmp(a.pass, pass) == 0) {
			z++;
			strcpy(esm, a.name);
			strcpy(USERNAME, a.user);
			strcpy(password, a.pass);
			access = a.dasresy;
		}

		printf("welcom to your system \n");
		setcolor(0);
	}
	else if (strcmp(user, inp2.user) == 0) {
		FILE* o2;
		o2 = fopen("user2.bin", "rb");
		fread(&b, sizeof(struct student), 1, o2);
		fclose(o2);
		if (strcmp(b.pass, pass) == 0) {
			z++;
			strcpy( esm, b.name);
			strcpy(USERNAME, b.user);
			strcpy(password, b.pass);
			access = b.dasresy;
			
		}
		if (b.time < second) {
			z = 0;
			xx++ ;
		}
	
		
		printf("welcom to your system \n" );
		
	}
	else if (strcmp(user, inp3.user) == 0) {
		FILE* o3;
		o3 = fopen("user3.bin", "rb");
		fread(&c, sizeof(struct student), 1, o3);
		fclose(o3);
		if (strcmp(c.pass, pass) == 0) {
			strcpy( esm, c.name);
			strcpy(USERNAME, c.user);
			strcpy(password, c.pass);
			access = c.dasresy;
			z++;
		}
		if (second > c.time) {
			z = 0;
			xx++ ;
		}
printf("welcom to your system\n ");

	}
	else if (strcmp(user, inp4.user) == 0) {
	FILE* o4;
	o4 = fopen("user4.bin", "rb");
	fclose(o4);
	fread(&d, sizeof(struct student), 1, o4);
	if (strcmp(d.pass, pass) == 0) {
		strcpy( esm, d.name);
		access = d.dasresy;
		strcpy(USERNAME, d.user);
		strcpy(password, d.pass);
		z++;
	}
	printf("welcom to your system ");
	setcolor(0);
	}
	else {
	FILE* US;
	US = fopen("newuser1.bin", "rb");
	fread(&USA, sizeof(struct student), 1, US);
	if (strcmp(USA.pass, pass) == 0 && strcmp(USA.user, user) == 0) {
		//printf("%s", USA.pass);
		z++;
		access = USA.dasresy;
		strcpy( esm, USA.name);
		printf(" hello welcom to your system ");
		strcpy(USERNAME, USA.user);
		strcpy(password, USA.pass);
		if (second > USA.time) {
			z = 0;
			xx++;
		}
	}
	fclose(US);
	}



	char r;
	if (z == 0) {
		setcolor(4);
		puts("username or password is incorect");
		r = getch();
		system("cls");
		goto retrun;
	}
	if (xx == 1) {
		setcolor(4);
		printf("your time is up !\n");
		r = getch();
		system("exit");
	}
	setcolor(3);
	system("cls");

	printf("welcome to your system %s\n",esm);
	setcolor(7);

	printf("\n%s %s", USERNAME, password);
	setcolor(7);
	while (1) {
		setcolor(10);
		printf("[ %s @IUT.ac.ir]$", esm);
		setcolor(7);
		char order[20], username[20], passwd[20];
		scanf("%s", order);
		if (strcmp(order, "su") == 0) {
			scanf("%s", username);
			su(username, access, USERNAME, password);
			strcpy(USERNAME, usersu);
			strcpy(password, passsu);
			printf("\n%s %s %d", USERNAME, password, access);
		}
		
		if (strcmp(order, "passwd") == 0) {
			char ltime[20];
			scanf("%s", ltime);
			if (strcmp(ltime, "-ltime") == 0) {
				passwdltime(access);
			}
			else {
				fucpasswd(ltime, USERNAME, access);
			}

		}
		if (strcmp(order, "chgr") == 0) {
			char uu[20];
			scanf("%s", uu);
			chgr(access, uu);
		}
		if (strcmp("creat", order) == 0) {
			char Q[20];
			scanf("%s", Q);
			if (strcmp(Q, "user") == 0) {
				creatuser(access);
			}

		}
		if (strcmp(order, "ls") == 0) {
			system("dir");
		}
		if (strcmp(order, "cd") == 0) {
			char cd[20];
			scanf("%s", cd);
			int x = _chdir(cd);
			if (x != 0) {
				setcolor(10);
				printf("the directory is not exist.....\n");
				setcolor(7);
			}
		}
		if (strcmp(order, "mkdir") == 0) {
			char mkdir[20];
			scanf("%s", mkdir);
			strcpy(order, "mkdir ");
			strcat(order, mkdir);
			system(order);
		}
		if (strcmp("exif", order) == 0) {
			char gh[20];
			scanf("%s", gh);
			char wheret[20], wheredir[20];
			strcpy(wheret, "where /T ");
			strcpy(wheredir, "dir /T ");
			strcat(wheret, gh);
			strcat(wheredir, gh);
			system(wheret);
			system(wheredir);
		}
		if (strcmp(order, "date") == 0) {
			system("date");
		}
		if (strcmp("rm-r", order) == 0){
			char rm[20],rm1[20];
			strcpy(rm1, "rmdir /Q /S ");
			scanf("%s", rm);
			strcat(rm1, rm);
			system(rm1);
}
		if (strcmp(order, "find-f") == 0) {
			char find[20];
			scanf("%s", find);
			strcpy(order, "dir /s/b ");
			strcat(order, find);
			system(order);
		}
	if (strcmp(order, "find-dir") == 0) {
		char dir[20],dir1[20],dir2[20];
		scanf("%s", dir1);
		strcpy(dir, "dir ");
			strcpy(dir2, " /s/p");
			strcat(dir, dir1);
			strcat(dir, dir2);
			//printf("%s", dir);
			system(dir);
		}
	if (strcmp(order, "wc") == 0) {
		char wc[20];
		scanf("%s", wc);
		char wc1[20];
		char wc3[20];
		wc3[0] = '"';
		wc3[1] = '"';
		wc3[2] = ' ';
		wc3[3] = '\0';
		strcpy(wc1, "find /v /c ");
		strcat(wc1, wc3);
		strcat(wc1, wc);
		system(wc1);
	}
		if (strcmp(order, "rm") == 0) {
			char del[20];
			scanf("%s", del);
			strcpy(order, "del ");
			strcat(order, del);
			system(order);
			
		}
		if (strcmp(order, "show") == 0) {
			char show[20];
			scanf("%s", show);
			strcpy(order, "attrib -h ");
			strcat(order, show);
			printf("1%s2", order);
			system(order);
		}
		if (strcmp("cat", order) == 0) {
			char ff[20];
			scanf("%s", ff);
			FILE* ee;
			ee = fopen(ff, "r");
			if (ee != NULL) {
				char ch[20000];
				while (fgets(ch, 20000, ee) != NULL) /* read a line */
				{
					fputs(ch, stdout);

				}
			}
			else
				printf("the directory is not exist.....\n");
		}
		if(strcmp("move",order)==0){
			char  f2[20], f1[20];
			scanf("%s %s", f1, f2);
			strcat(order, " ");
			strcat(order, f1);
			strcat(order, " ");
			strcat(order, f2);
			system(order);
		
		}
		if (strcmp(order, "cp") == 0) {
			char file2[30], file1[30];
			scanf("%s %s", file1, file2);
			strcpy(order, "copy ");
			strcat(order, file1);
			strcat(order, " ");
			strcat(order, file2);
			system(order);
		}
		if (strcmp(order, "time") == 0) {
			system("time");
		}
		if (strcmp(order, "color") == 0) {
			char color[20];
			scanf("%s", color);
			strcpy(order, "color ");
			strcat(order, color);
			system(order);
		}
		if (strcmp("hidden", order) == 0) {
			char kk[20];scanf("%s", kk);
			char k[20];strcpy(k, "Attrib +h +s +r ");
			strcat(k, kk);
			printf("%s", k);
			system(k);
		}
		if (strcmp("diff", order) == 0) {
			char b[20], b1[20];
			strcpy(order, "fc ");
			scanf("%s %s", b, b1);
			strcat(order, b);
			strcat(order, " ");
			strcat(order, b1);
			printf("%s", order);
			system(order);

		}
		else if (!strcmp(order, "pwd"))
		{
			char address[100];
			getcwd(address, sizeof(address));
			printf("%s\n", address);

		}
		if (strcmp(order, "cls") == 0) {
			system("cls");
		}
		if (strcmp(order, "exit") == 0) {
			system("exit");
		}
		
		int i = 0;
		char func2[100];
		char q[100], yy[100];
		char echo[30];

		if (strstr(order, ">>")) {
			
			for (i = 0;order[i] != '>';i++)
				q[i - 0] = order[i];
			q[i - 0] = '\0';
			int j = i + 1;
			for (i = j;order[i] != '\0';i++)
				yy[i - j] = order[i];
			yy[i - j] = '\0';
			yy[0] = ' ';
			strcpy(echo, "echo ");
			strcat(echo, q);
			strcat(echo, " >>");
			strcat(echo, yy);
			system(echo);
			//printf("%s", echo);
		}
		else if (strstr(order, ">")) {
			for (i = 0;order[i] != '>';i++)
				q[i - 0] = order[i];
			q[i - 0] = '\0';
			int j = i + 1;
			for (i = j;order[i] != '\0';i++)
				yy[i - j] = order[i];
			yy[i - j] = '\0';
			strcpy(echo, "echo ");
			strcat(echo, q);
			strcat(echo, " > ");
			strcat(echo, yy);
			system(echo);
			//printf("%s", echo);
		}

		fgets(func2, 100, stdin);

		if (strstr(func2, ">>")) {
			func2[strlen(func2) - 1] = '\0';
			if (strstr(func2, ">")) {
				for (i = 0;func2[i] != '>';i++)
					q[i - 0] = func2[i];
				q[i - 0] = '\0';
				int j = i + 1;
				for (i = j;func2[i] != '\0';i++)
					yy[i - j] = func2[i];
				yy[i - j] = '\0';
				yy[0] = ' ';
				
				strcat(order, q);
				strcat(order, " >>");
				strcat(order, yy);
				strcpy(echo, "echo ");
				strcat(echo, order);
				
				system(echo);
			}

		}


		else if (strstr(func2, ">")) {
			func2[strlen(func2) - 1] = '\0';
			if (strstr(func2, ">")) {
				for (i = 0;func2[i] != '>';i++)
					q[i - 0] = func2[i];
				q[i - 0] = '\0';
				int j = i + 1;
				for (i = j;func2[i] != '\0';i++)
					yy[i - j] = func2[i];
				yy[i - j] = '\0';
			}
			strcpy(echo, "echo ");
			strcat(echo, order);
			strcat(echo, q);
			strcat(echo, " > ");
			strcat(echo, yy);
			
			system(echo);
		}
		else {
		
			error++;
		}
	}
}