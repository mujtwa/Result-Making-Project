#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void insert(int);
void display(int);
void search(int);
void edit(int);
void det(int);
void dummy(float *a)
{
float b=*a;
dummy(&b);
}
struct certificate
{
int examy;
unsigned long int rno;
char n[30];
char nm[30];
char nf[30];
char sc[40];
int n1,n2,n3,n4,n5;
int m1,m2,m3,m4,m5;
int p1,p2,p3,p4,p5;
int sport;
int ad1,ad2,ad3,ad4,ad5,add,ad6;
float per,dev;
};
FILE   *p;
struct certificate s[100];
int i;
int main()
{
char c;
do
{
int  ch,n;
system("cls");
printf("\n***************************Result Making Project*********************************** \n\n");
printf("\n1 : Insert");
printf("\n2 : Display");
printf("\n3 : Searching");
printf("\n4 : edit");
printf("\n5 : Deleting");
printf("\n6 : Exit");
printf("\nEnter Your Choice : ");
scanf("%d",&ch);
printf("How Many Students : ");
scanf("%d",&n);
system("cls");
switch(ch)
{
case 1:
insert(n);
break;
case 2:
display(n);
break;
case 3:
search(n);
break;
case 4 :
edit(n);
break;
case 5:
det(n);
break;
case 6:
exit(0)   ;
break;
default :
printf("Wrong Input : ");
}
printf("\nDo You Want To Continue : Press y Or Y : ");
scanf("%s",&c);
}
while((c=='y'||c=='Y'));
return 0;
}
void insert(int n)
{
p=fopen("kkk.cpp","wb");
for(i=0;i<n;i++)
{
printf("\nStudent %d\n",i+1);
printf("Enter Examination Year : ");
scanf("%d",&s[i].examy);
printf("Enter Roll Number      : ");
scanf("%ld",&s[i].rno);
printf("Enter Student Name     : ");
fflush(stdin);
gets(&s[i].n);
//scanf("%s",&s[i].n);
printf("Enter Mother's Name    : ");
fflush(stdin);
gets(&s[i].nm);
//scanf("%s",&s[i].nm);
printf("Enter Father's Name    : ");
fflush(stdin);
gets(&s[i].nf);
//scanf("%s",&s[i].nf);
printf("Enter School Name      : ");
fflush(stdin);
gets(&s[i].sc);
//scanf("%s",&s[i].sc);
printf("Enter Marks Details Of Paper 1 : ");
printf("\nHindi           : ");
scanf("%d",&s[i].n1);

/*printf("\nComputer Sci.   : ");
scanf("%d",&s[i].n1);
*/
printf("English         : ");
scanf("%d",&s[i].n2);
/*printf("Biology         : ");
scanf("%d",&s[i].n3);
*/
printf("Mathematics     : ");
scanf("%d",&s[i].n3);
printf("Physics         : ");
scanf("%d",&s[i].n4);
printf("Chemistry       : ");
scanf("%d",&s[i].n5);
printf("Enter Marks Details Of Paper 2 : ");
printf("\nHindi           : ");
scanf("%d",&s[i].m1);

/*printf("\nComputer Sci.   : ");
scanf("%d",&s[i].m1);
*/
printf("English         : ");
scanf("%d",&s[i].m2);
/*printf("Biology         : ");
scanf("%d",&s[i].m3);
*/
printf("Mathemaitics    : ");
scanf("%d",&s[i].m3);
printf("Physics         : ");
scanf("%d",&s[i].m4);
printf("Chemistry       : ");
scanf("%d",&s[i].m5);
printf("Enter Marks Details Of Practicals : ");
/*printf("\nComputer Sci.   : ");
scanf("%d",&s[i].p5);
*/
printf("\nPhysics         : ");
scanf("%d",&s[i].p1);
printf("Chemistry       : ");
scanf("%d",&s[i].p2);
/*printf("Biology         : ");
scanf("%d",&s[i].p4);
*/
printf("Enter Sport& Physical Education Marks : ");
scanf("%d",&s[i].sport);
printf("Practical Marks Of Sport              : ");
scanf("%d",&s[i].p3);
fwrite(&s[i],sizeof(s[i]),1,p);
}
fclose(p);
printf("Wrote Successfully!");
}
void display(int n)
{
p=fopen("kkk.cpp","rb");
while(fread(&s[i],sizeof(s[i]),1,p)>0)
for(i=0;i<n;i++)
{
gotoxy(15,2);
printf("BOARD OF HIGH SCHOOL AND INTERMEDIATE EDUCATION U.P");
gotoxy(25,3);
printf("INTERMEDIATE EXAMINATION -");
gotoxy(52,3);
printf("%d",s[i].examy);
gotoxy(25,4);
printf("CERTIFICATE-CUM-MARKS-SHEET");
gotoxy(15,6);
printf("Roll number : ");
gotoxy(45,6);
printf("%ld",s[i].rno);
gotoxy(15,7);
printf("Name : ");
gotoxy(45,7);
printf("%s",s[i].n);
gotoxy(15,8);
printf("Mother's Name : ");
gotoxy(45,8);
printf("%s",s[i].nm);
gotoxy(15,9);
printf("Father's Name : ");
gotoxy(45,9);
printf("%s",s[i].nf);
gotoxy(15,10);
printf("Scool/College Name : ");
gotoxy(45,10);
printf("%s",s[i].sc);
gotoxy(1,12);
printf("________________________________________________________________________________\n");
gotoxy(4,13);
printf("Subject");
gotoxy(14,13);
printf("Max.Marks");
gotoxy(25,13);
printf("Paper 1");
gotoxy(35,13);
printf("Paper 2");
gotoxy(44,13);
printf("Practical");
gotoxy(55,13);
printf("Total");
gotoxy(61,13);
printf("Grade");
gotoxy(67,13);
printf("G.Total&Result");
gotoxy(1,14);
printf("________________________________________________________________________________\n");
gotoxy(2,16);
printf("Hindi");
gotoxy(16,16);
printf("100");
gotoxy(27,16);
printf("%d",s[i].n1);
gotoxy(37,16);
printf("%d",s[i].m1);
s[i].ad1=s[i].n1+s[i].m1;
gotoxy(56,16);
printf("%d",s[i].ad1);
gotoxy(63,16);
if(s[i].ad1>=0&&s[i].ad1<=29)
printf("F");
else if(s[i].ad1>=30&&s[i].ad1<=34)
printf("E");
else if(s[i].ad1>=35&&s[i].ad1<=39)
printf("D");
else if(s[i].ad1>=40&&s[i].ad1<=49)
printf("C2");
else if(s[i].ad1>=50&&s[i].ad1<=59)
printf("C1");
else if(s[i].ad1>=60&&s[i].ad1<=69)
printf("B2");
else if(s[i].ad1>=70&&s[i].ad1<=79)
printf("B1");
else if(s[i].ad1>=80&&s[i].ad1<=89)
printf("A2");
else if(s[i].ad1>=90&&s[i].ad1<=100)
printf("A1");
/*
gotoxy(2,16);
printf("Computer Sci.");
gotoxy(16,16);
printf("100");
gotoxy(27,16);
printf("%d",s[i].n1);
gotoxy(37,16);
printf("%d",s[i].m1);
gotoxy(47,16);
printf("%d",s[i].p5);
s[i].ad1=s[i].n1+s[i].m1+s[i].p5;
gotoxy(56,16);
printf("%d",s[i].ad1);
gotoxy(63,16);
if(s[i].ad1>=0&&s[i].ad1<=29)
printf("F");
else if(s[i].ad1>=30&&s[i].ad1<=34)
printf("E");
else if(s[i].ad1>=35&&s[i].ad1<=39)
printf("D");
else if(s[i].ad1>=40&&s[i].ad1<=49)
printf("C2");
else if(s[i].ad1>=50&&s[i].ad1<=59)
printf("C1");
else if(s[i].ad1>=60&&s[i].ad1<=69)
printf("B2");
else if(s[i].ad1>=70&&s[i].ad1<=79)
printf("B1");
else if(s[i].ad1>=80&&s[i].ad1<=89)
printf("A2");
else if(s[i].ad1>=90&&s[i].ad1<=100)
printf("A1");
*/
gotoxy(2,17);
printf("English");
gotoxy(16,17);
printf("100");
gotoxy(27,17);
printf("%d",s[i].n2);
gotoxy(37,17);
printf("%d",s[i].m2);
s[i].ad2=s[i].n2+s[i].m2;
gotoxy(56,17);
printf("%d",s[i].ad2);
gotoxy(63,17);
if(s[i].ad2>=0&&s[i].ad2<=29)
printf("F");
else if(s[i].ad2>=30&&s[i].ad2<=34)
printf("E");
else if(s[i].ad2>=35&&s[i].ad2<=39)
printf("D");
else if(s[i].ad2>=40&&s[i].ad2<=49)
printf("C2");
else if(s[i].ad2>=50&&s[i].ad2<=59)
printf("C1");
else if(s[i].ad2>=60&&s[i].ad2<=69)
printf("B2");
else if(s[i].ad2>=70&&s[i].ad2<=79)
printf("B1");
else if(s[i].ad2>=80&&s[i].ad2<=89)
printf("A2");
else if(s[i].ad2>=90&&s[i].ad2<=100)
printf("A1");

gotoxy(2,18);
printf("Mathematics");
gotoxy(16,18);
printf("100");
gotoxy(27,18);
printf("%d",s[i].n3);
gotoxy(37,18);
printf("%d",s[i].m3);
s[i].ad3=s[i].n3+s[i].m3;
gotoxy(56,18);
printf("%d",s[i].ad3);
gotoxy(63,18);
if(s[i].ad3>=0&&s[i].ad3<=29)
printf("F");
else if(s[i].ad3>=30&&s[i].ad3<=34)
printf("E");
else if(s[i].ad3>=35&&s[i].ad3<=39)
printf("D");
else if(s[i].ad3>=40&&s[i].ad3<=49)
printf("C2");
else if(s[i].ad3>=50&&s[i].ad3<=59)
printf("C1");
else if(s[i].ad3>=60&&s[i].ad3<=69)
printf("B2");
else if(s[i].ad3>=70&&s[i].ad3<=79)
printf("B1");
else if(s[i].ad3>=80&&s[i].ad3<=89)
printf("A2");
else if(s[i].ad3>=90&&s[i].ad3<=100)
printf("A1");
/*
gotoxy(2,18);
printf("Biology");
gotoxy(16,18);
printf("100");
gotoxy(27,18);
printf("%d",s[i].n3);
gotoxy(37,18);
printf("%d",s[i].m3);
gotoxy(47,18);
printf("%d",s[i].p4);
s[i].ad3=s[i].n3+s[i].m3+s[i].p4;
gotoxy(56,18);
printf("%d",s[i].ad3);
gotoxy(63,18);
if(s[i].ad3>=0&&s[i].ad3<=29)
printf("F");
else if(s[i].ad3>=30&&s[i].ad3<=34)
printf("E");
else if(s[i].ad3>=35&&s[i].ad3<=39)
printf("D");
else if(s[i].ad3>=40&&s[i].ad3<=49)
printf("C2");
else if(s[i].ad3>=50&&s[i].ad3<=59)
printf("C1");
else if(s[i].ad3>=60&&s[i].ad3<=69)
printf("B2");
else if(s[i].ad3>=70&&s[i].ad3<=79)
printf("B1");
else if(s[i].ad3>=80&&s[i].ad3<=89)
printf("A2");
else if(s[i].ad3>=90&&s[i].ad3<=100)
printf("A1");
*/
gotoxy(2,19);
printf("Physics");
gotoxy(16,19);
printf("100");
gotoxy(27,19);
printf("%d",s[i].n4);
gotoxy(37,19);
printf("%d",s[i].m4);
gotoxy(47,19);
printf("%d",s[i].p1);
s[i].ad4=s[i].n4+s[i].m4+s[i].p1;
gotoxy(56,19);
printf("%d",s[i].ad4);
gotoxy(63,19);
if(s[i].ad4>=0&&s[i].ad4<=29)
printf("F");
else if(s[i].ad4>=30&&s[i].ad4<=34)
printf("E");
else if(s[i].ad4>=35&&s[i].ad4<=39)
printf("D");
else if(s[i].ad4>=40&&s[i].ad4<=49)
printf("C2");
else if(s[i].ad4>=50&&s[i].ad4<=59)
printf("C1");
else if(s[i].ad4>=60&&s[i].ad4<=69)
printf("B2");
else if(s[i].ad4>=70&&s[i].ad4<=79)
printf("B1");
else if(s[i].ad4>=80&&s[i].ad4<=89)
printf("A2");
else if(s[i].ad4>=90&&s[i].ad4<=100)
printf("A1");
gotoxy(2,20);
printf("Chemistry");
gotoxy(16,20);
printf("100");
gotoxy(27,20);
printf("%d",s[i].n5);
gotoxy(37,20);
printf("%d",s[i].m5);
gotoxy(47,20);
printf("%d",s[i].p2);
s[i].ad5=s[i].n5+s[i].m5+s[i].p2;
gotoxy(56,20);
printf("%d",s[i].ad5);
gotoxy(63,20);
if(s[i].ad5>=0&&s[i].ad5<=29)
printf("F");
else if(s[i].ad5>=30&&s[i].ad5<=34)
printf("E");
else if(s[i].ad5>=35&&s[i].ad5<=39)
printf("D");
else if(s[i].ad5>=40&&s[i].ad5<=49)
printf("C2");
else if(s[i].ad5>=50&&s[i].ad5<=59)
printf("C1");
else if(s[i].ad5>=60&&s[i].ad5<=69)
printf("B2");
else if(s[i].ad5>=70&&s[i].ad5<=79)
printf("B1");
else if(s[i].ad5>=80&&s[i].ad5<=89)
printf("A2");
else if(s[i].ad5>=90&&s[i].ad5<=100)
printf("A1");
gotoxy(2,21);
printf("Sport&Phy.Edu");
gotoxy(16,21);
printf("100");
gotoxy(27,21);
printf("%d",s[i].sport);
gotoxy(47,21);
printf("%d",s[i].p3);
s[i].ad6=s[i].p3+s[i].sport;
gotoxy(56,21);
printf("%d",s[i].ad6);
gotoxy(63,21);
if(s[i].ad6>=0&&s[i].ad6<=29)
printf("F");
else if(s[i].ad6>=30&&s[i].ad6<=34)
printf("E");
else if(s[i].ad6>=35&&s[i].ad6<=39)
printf("D");
else if(s[i].ad6>=40&&s[i].ad6<=49)
printf("C2");
else if(s[i].ad6>=50&&s[i].ad6<=59)
printf("C1");
else if(s[i].ad6>=60&&s[i].ad6<=69)
printf("B2");
else if(s[i].ad6>=70&&s[i].ad6<=79)
printf("B1");
else if(s[i].ad6>=80&&s[i].ad6<=89)
printf("A2");
else if(s[i].ad6>=90&&s[i].ad6<=100)
printf("A1");
s[i].add=s[i].ad1+s[i].ad2+s[i].ad3+s[i].ad4+s[i].ad5;
gotoxy(70,17);
printf("%d",s[i].add);
gotoxy(73,17);
printf("/500");
gotoxy(1,23);
printf("NOTE: Sport Narks Have Not Been Added To Overall Result : ");
s[i].dev=s[i].add/5.00;
gotoxy(70,20);
printf("%.2f",s[i].dev);
if(s[i].add>=0&&s[i].add<=164)
{
gotoxy(70,18);
printf("Failed");
gotoxy(70,19);
printf("No Div.");
}
else if(s[i].add>=165&&s[i].add<=299)
{
gotoxy(70,18);
printf("Passed");
gotoxy(70,19);
printf("Second Div.");
}
else if(s[i].add>=300&&s[i].add<=500)
{
gotoxy(70,18);
printf("Passed");
gotoxy(70,19);
printf("First Div.");
}
gotoxy(1,24);
printf("________________________________________________________________________________\n");
gotoxy(2,26);
fclose(p);
}
}
void search(int n)
{
unsigned long int ro;
p=fopen("kkk.cpp","rb");
printf("Enter Roll Number : ");
scanf("%ld",&ro);
while(fread(&s[i],sizeof(s[i]),1,p)>0)
for(i=0;i<n;i++)
if(ro==s[i].rno)
{
gotoxy(15,2);
printf("BOARD OF HIGH SCHOOL AND INTERMEDIATE EDUCATION U.P");
gotoxy(25,3);
printf("INTERMEDIATE EXAMINATION -");
gotoxy(52,3);
printf("%d",s[i].examy);
gotoxy(25,4);
printf("CERTIFICATE-CUM-MARKS-SHEET");
gotoxy(15,6);
printf("Roll number : ");
gotoxy(45,6);
printf("%ld",s[i].rno);
gotoxy(15,7);
printf("Name : ");
gotoxy(45,7);
printf("%s",s[i].n);
gotoxy(15,8);
printf("Mother's Name : ");
gotoxy(45,8);
printf("%s",s[i].nm);
gotoxy(15,9);
printf("Father's Name : ");
gotoxy(45,9);
printf("%s",s[i].nf);
gotoxy(15,10);
printf("Scool/College Name : ");
gotoxy(45,10);
printf("%s",s[i].sc);
gotoxy(1,12);
printf("_______________________________________________________________________________\n");
gotoxy(4,13);
printf("Subject");
gotoxy(14,13);
printf("Max.Marks");
gotoxy(25,13);
printf("Paper 1");
gotoxy(35,13);
printf("Paper 2");
gotoxy(44,13);
printf("Practical");
gotoxy(55,13);
printf("Total");
gotoxy(63,13);
printf("Grant Total&Result");
gotoxy(1,14);
printf("________________________________________________________________________________");

gotoxy(2,16);
printf("Hindi");
gotoxy(16,16);
printf("100");
gotoxy(27,16);
printf("%d",s[i].n1);
gotoxy(37,16);
printf("%d",s[i].m1);
s[i].ad1=s[i].n1+s[i].m1;
gotoxy(56,16);
printf("%d",s[i].ad1);
gotoxy(63,16);
if(s[i].ad1>=0&&s[i].ad1<=29)
printf("F");
else if(s[i].ad1>=30&&s[i].ad1<=34)
printf("E");
else if(s[i].ad1>=35&&s[i].ad1<=39)
printf("D");
else if(s[i].ad1>=40&&s[i].ad1<=49)
printf("C2");
else if(s[i].ad1>=50&&s[i].ad1<=59)
printf("C1");
else if(s[i].ad1>=60&&s[i].ad1<=69)
printf("B2");
else if(s[i].ad1>=70&&s[i].ad1<=79)
printf("B1");
else if(s[i].ad1>=80&&s[i].ad1<=89)
printf("A2");
else if(s[i].ad1>=90&&s[i].ad1<=100)
printf("A1");
/*
gotoxy(2,16);
printf("Computer Sci.");
gotoxy(16,16);
printf("100");
gotoxy(27,16);
printf("%d",s[i].n1);
gotoxy(37,16);
printf("%d",s[i].m1);
gotoxy(47,16);
printf("%d",s[i].p5);
s[i].ad1=s[i].n1+s[i].m1+s[i].p5;
gotoxy(56,16);
printf("%d",s[i].ad1);
gotoxy(63,16);
if(s[i].ad1>=0&&s[i].ad1<=29)
printf("F");
else if(s[i].ad1>=30&&s[i].ad1<=34)
printf("E");
else if(s[i].ad1>=35&&s[i].ad1<=39)
printf("D");
else if(s[i].ad1>=40&&s[i].ad1<=49)
printf("C2");
else if(s[i].ad1>=50&&s[i].ad1<=59)
printf("C1");
else if(s[i].ad1>=60&&s[i].ad1<=69)
printf("B2");
else if(s[i].ad1>=70&&s[i].ad1<=79)
printf("B1");
else if(s[i].ad1>=80&&s[i].ad1<=89)
printf("A2");
else if(s[i].ad1>=90&&s[i].ad1<=100)
printf("A1");
*/
gotoxy(2,17);
printf("English");
gotoxy(16,17);
printf("100");
gotoxy(27,17);
printf("%d",s[i].n2);
gotoxy(37,17);
printf("%d",s[i].m2);
s[i].ad2=s[i].n2+s[i].m2;
gotoxy(56,17);
printf("%d",s[i].ad2);
gotoxy(63,17);
if(s[i].ad2>=0&&s[i].ad2<=29)
printf("F");
else if(s[i].ad2>=30&&s[i].ad2<=34)
printf("E");
else if(s[i].ad2>=35&&s[i].ad2<=39)
printf("D");
else if(s[i].ad2>=40&&s[i].ad2<=49)
printf("C2");
else if(s[i].ad2>=50&&s[i].ad2<=59)
printf("C1");
else if(s[i].ad2>=60&&s[i].ad2<=69)
printf("B2");
else if(s[i].ad2>=70&&s[i].ad2<=79)
printf("B1");
else if(s[i].ad2>=80&&s[i].ad2<=89)
printf("A2");
else if(s[i].ad2>=90&&s[i].ad2<=100)
printf("A1");

gotoxy(2,18);
printf("Mathematics");
gotoxy(16,18);
printf("100");
gotoxy(27,18);
printf("%d",s[i].n3);
gotoxy(37,18);
printf("%d",s[i].m3);
s[i].ad3=s[i].n3+s[i].m3;
gotoxy(56,18);
printf("%d",s[i].ad3);
gotoxy(63,18);
if(s[i].ad3>=0&&s[i].ad3<=29)
printf("F");
else if(s[i].ad3>=30&&s[i].ad3<=34)
printf("E");
else if(s[i].ad3>=35&&s[i].ad3<=39)
printf("D");
else if(s[i].ad3>=40&&s[i].ad3<=49)
printf("C2");
else if(s[i].ad3>=50&&s[i].ad3<=59)
printf("C1");
else if(s[i].ad3>=60&&s[i].ad3<=69)
printf("B2");
else if(s[i].ad3>=70&&s[i].ad3<=79)
printf("B1");
else if(s[i].ad3>=80&&s[i].ad3<=89)
printf("A2");
else if(s[i].ad3>=90&&s[i].ad3<=100)
printf("A1");
/*
gotoxy(2,18);
printf("Biology");
gotoxy(16,18);
printf("100");
gotoxy(27,18);
printf("%d",s[i].n3);
gotoxy(37,18);
printf("%d",s[i].m3);
gotoxy(47,18);
printf("%d",s[i].p4);
s[i].ad3=s[i].n3+s[i].m3+s[i].p4;
gotoxy(56,18);
printf("%d",s[i].ad3);
gotoxy(63,18);
if(s[i].ad3>=0&&s[i].ad3<=29)
printf("F");
else if(s[i].ad3>=30&&s[i].ad3<=34)
printf("E");
else if(s[i].ad3>=35&&s[i].ad3<=39)
printf("D");
else if(s[i].ad3>=40&&s[i].ad3<=49)
printf("C2");
else if(s[i].ad3>=50&&s[i].ad3<=59)
printf("C1");
else if(s[i].ad3>=60&&s[i].ad3<=69)
printf("B2");
else if(s[i].ad3>=70&&s[i].ad3<=79)
printf("B1");
else if(s[i].ad3>=80&&s[i].ad3<=89)
printf("A2");
else if(s[i].ad3>=90&&s[i].ad3<=100)
printf("A1");
*/
gotoxy(2,19);
printf("Physics");
gotoxy(16,19);
printf("100");
gotoxy(27,19);
printf("%d",s[i].n4);
gotoxy(37,19);
printf("%d",s[i].m4);
gotoxy(47,19);
printf("%d",s[i].p1);
s[i].ad4=s[i].n4+s[i].m4+s[i].p1;
gotoxy(56,19);
printf("%d",s[i].ad4);
gotoxy(63,19);
if(s[i].ad4>=0&&s[i].ad4<=29)
printf("F");
else if(s[i].ad4>=30&&s[i].ad4<=34)
printf("E");
else if(s[i].ad4>=35&&s[i].ad4<=39)
printf("D");
else if(s[i].ad4>=40&&s[i].ad4<=49)
printf("C2");
else if(s[i].ad4>=50&&s[i].ad4<=59)
printf("C1");
else if(s[i].ad4>=60&&s[i].ad4<=69)
printf("B2");
else if(s[i].ad4>=70&&s[i].ad4<=79)
printf("B1");
else if(s[i].ad4>=80&&s[i].ad4<=89)
printf("A2");
else if(s[i].ad4>=90&&s[i].ad4<=100)
printf("A1");
gotoxy(2,20);
printf("Chemistry");
gotoxy(16,20);
printf("100");
gotoxy(27,20);
printf("%d",s[i].n5);
gotoxy(37,20);
printf("%d",s[i].m5);
gotoxy(47,20);
printf("%d",s[i].p2);
s[i].ad5=s[i].n5+s[i].m5+s[i].p2;
gotoxy(56,20);
printf("%d",s[i].ad5);
gotoxy(63,20);
if(s[i].ad5>=0&&s[i].ad5<=29)
printf("F");
else if(s[i].ad5>=30&&s[i].ad5<=34)
printf("E");
else if(s[i].ad5>=35&&s[i].ad5<=39)
printf("D");
else if(s[i].ad5>=40&&s[i].ad5<=49)
printf("C2");
else if(s[i].ad5>=50&&s[i].ad5<=59)
printf("C1");
else if(s[i].ad5>=60&&s[i].ad5<=69)
printf("B2");
else if(s[i].ad5>=70&&s[i].ad5<=79)
printf("B1");
else if(s[i].ad5>=80&&s[i].ad5<=89)
printf("A2");
else if(s[i].ad5>=90&&s[i].ad5<=100)
printf("A1");
gotoxy(2,21);
printf("Sport&Phy.Edu");
gotoxy(16,21);
printf("100");
gotoxy(27,21);
printf("%d",s[i].sport);
gotoxy(47,21);
printf("%d",s[i].p3);
s[i].ad6=s[i].p3+s[i].sport;
gotoxy(56,21);
printf("%d",s[i].ad6);
gotoxy(63,21);
if(s[i].ad6>=0&&s[i].ad6<=29)
printf("F");
else if(s[i].ad6>=30&&s[i].ad6<=34)
printf("E");
else if(s[i].ad6>=35&&s[i].ad6<=39)
printf("D");
else if(s[i].ad6>=40&&s[i].ad6<=49)
printf("C2");
else if(s[i].ad6>=50&&s[i].ad6<=59)
printf("C1");
else if(s[i].ad6>=60&&s[i].ad6<=69)
printf("B2");
else if(s[i].ad6>=70&&s[i].ad6<=79)
printf("B1");
else if(s[i].ad6>=80&&s[i].ad6<=89)
printf("A2");
else if(s[i].ad6>=90&&s[i].ad6<=100)
printf("A1");
s[i].add=s[i].ad1+s[i].ad2+s[i].ad3+s[i].ad4+s[i].ad5;
gotoxy(70,17);
printf("%d",s[i].add);
gotoxy(73,17);
printf("/500");
gotoxy(1,23);
printf("NOTE: Sport Narks Have Not Been Added To Overall Result : ");
s[i].dev=s[i].add/5.00;
gotoxy(70,20);
printf("%.2f",s[i].dev);
if(s[i].add>=0&&s[i].add<=164)
{
gotoxy(70,18);
printf("Failed");
gotoxy(70,19);
printf("No Div.");
}
else if(s[i].add>=165&&s[i].add<=299)
{
gotoxy(70,18);
printf("Passed");
gotoxy(70,19);
printf("Second Div.");
}
else if(s[i].add>=300&&s[i].add<=500)
{
gotoxy(70,18);
printf("Passed");
gotoxy(70,19);
printf("First Div.");
}
gotoxy(1,24);
printf("________________________________________________________________________________\n");
gotoxy(2,26);
fclose(p);
}
}
void edit(int n)
{
unsigned long int rn;
p=fopen("kkk.cpp","r+");
printf("Enter Roll Number : ");
scanf("%ld",&rn);
while(fread(&s[i],sizeof(s[i]),1,p)>0)
for(i=0;i<n;i++)
if(rn==s[i].rno)
{
printf("\n.......PREVIOUS DETAILS......\n");
gotoxy(15,3);
printf("BOARD OF HIGH SCHOOL AND INTERMEDIATE EDUCATION U.P");
gotoxy(25,4);
printf("INTERMEDIATE EXAMINATION -");
gotoxy(52,4);
printf("%d",s[i].examy);
gotoxy(25,5);
printf("CERTIFICATE-CUM-MARKS-SHEET");
gotoxy(15,7);
printf("Roll number : ");
gotoxy(45,7);
printf("%ld",s[i].rno);
gotoxy(15,8);
printf("Name : ");
gotoxy(45,8);
printf("%s",s[i].n);
gotoxy(15,9);
printf("Mother's Name : ");
gotoxy(45,9);
printf("%s",s[i].nm);
gotoxy(15,10);
printf("Father's Name : ");
gotoxy(45,10);
printf("%s",s[i].nf);
gotoxy(15,11);
printf("Scool/College Name : ");
gotoxy(45,11);
printf("%s",s[i].sc);
gotoxy(1,13);
printf("_______________________________________________________________________________\n");
gotoxy(4,14);
printf("Subject");
gotoxy(14,14);
printf("Max.Marks");
gotoxy(25,14);
printf("Paper 1");
gotoxy(35,14);
printf("Paper 2");
gotoxy(44,14);
printf("Practical");
gotoxy(55,14);
printf("Total");
gotoxy(62,14);
printf("Grant Total&Result");
gotoxy(1,15);
printf("________________________________________________________________________________");

gotoxy(2,17);
printf("Hindi");
gotoxy(16,17);
printf("100");
gotoxy(27,17);
printf("%d",s[i].n1);
gotoxy(37,17);
printf("%d",s[i].m1);
s[i].ad1=s[i].n1+s[i].m1;
gotoxy(56,17);
printf("%d",s[i].ad1);
gotoxy(63,17);
if(s[i].ad1>=0&&s[i].ad1<=29)
printf("F");
else if(s[i].ad1>=30&&s[i].ad1<=34)
printf("E");
else if(s[i].ad1>=35&&s[i].ad1<=39)
printf("D");
else if(s[i].ad1>=40&&s[i].ad1<=49)
printf("C2");
else if(s[i].ad1>=50&&s[i].ad1<=59)
printf("C1");
else if(s[i].ad1>=60&&s[i].ad1<=69)
printf("B2");
else if(s[i].ad1>=70&&s[i].ad1<=79)
printf("B1");
else if(s[i].ad1>=80&&s[i].ad1<=89)
printf("A2");
else if(s[i].ad1>=90&&s[i].ad1<=100)
printf("A1");
/*
gotoxy(2,17);
printf("Computer Sci.");
gotoxy(16,17);
printf("100");
gotoxy(27,17);
printf("%d",s[i].n1);
gotoxy(37,17);
printf("%d",s[i].m1);
gotoxy(47,17);
printf("%d",s[i].p5);
s[i].ad1=s[i].n1+s[i].m1+s[i].p5;
gotoxy(56,17);
printf("%d",s[i].ad1);
gotoxy(62,17);
if(s[i].ad1>=0&&s[i].ad1<=29)
printf("F");
else if(s[i].ad1>=30&&s[i].ad1<=34)
printf("E");
else if(s[i].ad1>=35&&s[i].ad1<=39)
printf("D");
else if(s[i].ad1>=40&&s[i].ad1<=49)
printf("C2");
else if(s[i].ad1>=50&&s[i].ad1<=59)
printf("C1");
else if(s[i].ad1>=60&&s[i].ad1<=69)
printf("B2");
else if(s[i].ad1>=70&&s[i].ad1<=79)
printf("B1");
else if(s[i].ad1>=80&&s[i].ad1<=89)
printf("A2");
else if(s[i].ad1>=90&&s[i].ad1<=100)
printf("A1");
*/
gotoxy(2,18);
printf("English");
gotoxy(16,18);
printf("100");
gotoxy(27,18);
printf("%d",s[i].n2);
gotoxy(37,18);
printf("%d",s[i].m2);
s[i].ad2=s[i].n2+s[i].m2;
gotoxy(56,18);
printf("%d",s[i].ad2);
gotoxy(62,18);
if(s[i].ad2>=0&&s[i].ad2<=29)
printf("F");
else if(s[i].ad2>=30&&s[i].ad2<=34)
printf("E");
else if(s[i].ad2>=35&&s[i].ad2<=39)
printf("D");
else if(s[i].ad2>=40&&s[i].ad2<=49)
printf("C2");
else if(s[i].ad2>=50&&s[i].ad2<=59)
printf("C1");
else if(s[i].ad2>=60&&s[i].ad2<=69)
printf("B2");
else if(s[i].ad2>=70&&s[i].ad2<=79)
printf("B1");
else if(s[i].ad2>=80&&s[i].ad2<=89)
printf("A2");
else if(s[i].ad2>=90&&s[i].ad2<=100)
printf("A1");

gotoxy(2,19);
printf("Mathematics");
gotoxy(16,19);
printf("100");
gotoxy(27,19);
printf("%d",s[i].n3);
gotoxy(37,19);
printf("%d",s[i].m3);
s[i].ad3=s[i].n3+s[i].m3;
gotoxy(56,19);
printf("%d",s[i].ad3);
gotoxy(62,19);
if(s[i].ad3>=0&&s[i].ad3<=29)
printf("F");
else if(s[i].ad3>=30&&s[i].ad3<=34)
printf("E");
else if(s[i].ad3>=35&&s[i].ad3<=39)
printf("D");
else if(s[i].ad3>=40&&s[i].ad3<=49)
printf("C2");
else if(s[i].ad3>=50&&s[i].ad3<=59)
printf("C1");
else if(s[i].ad3>=60&&s[i].ad3<=69)
printf("B2");
else if(s[i].ad3>=70&&s[i].ad3<=79)
printf("B1");
else if(s[i].ad3>=80&&s[i].ad3<=89)
printf("A2");
else if(s[i].ad3>=90&&s[i].ad3<=100)
printf("A1");
/*
gotoxy(2,19);
printf("Biology");
gotoxy(16,19);
printf("100");
gotoxy(27,19);
printf("%d",s[i].n3);
gotoxy(37,19);
printf("%d",s[i].m3);
gotoxy(47,19);
printf("%d",s[i].p4);
s[i].ad3=s[i].n3+s[i].m3+s[i].p4;
gotoxy(56,19);
printf("%d",s[i].ad3);
gotoxy(62,19);
if(s[i].ad3>=0&&s[i].ad3<=29)
printf("F");
else if(s[i].ad3>=30&&s[i].ad3<=34)
printf("E");
else if(s[i].ad3>=35&&s[i].ad3<=39)
printf("D");
else if(s[i].ad3>=40&&s[i].ad3<=49)
printf("C2");
else if(s[i].ad3>=50&&s[i].ad3<=59)
printf("C1");
else if(s[i].ad3>=60&&s[i].ad3<=69)
printf("B2");
else if(s[i].ad3>=70&&s[i].ad3<=79)
printf("B1");
else if(s[i].ad3>=80&&s[i].ad3<=89)
printf("A2");
else if(s[i].ad3>=90&&s[i].ad3<=100)
printf("A1");
  */
gotoxy(2,20);
printf("Physics");
gotoxy(16,20);
printf("100");
gotoxy(27,20);
printf("%d",s[i].n4);
gotoxy(37,20);
printf("%d",s[i].m4);
gotoxy(47,20);
printf("%d",s[i].p1);
s[i].ad4=s[i].n4+s[i].m4+s[i].p1;
gotoxy(56,20);
printf("%d",s[i].ad4);
gotoxy(62,20);
if(s[i].ad4>=0&&s[i].ad4<=29)
printf("F");
else if(s[i].ad4>=30&&s[i].ad4<=34)
printf("E");
else if(s[i].ad4>=35&&s[i].ad4<=39)
printf("D");
else if(s[i].ad4>=40&&s[i].ad4<=49)
printf("C2");
else if(s[i].ad4>=50&&s[i].ad4<=59)
printf("C1");
else if(s[i].ad4>=60&&s[i].ad4<=69)
printf("B2");
else if(s[i].ad4>=70&&s[i].ad4<=79)
printf("B1");
else if(s[i].ad4>=80&&s[i].ad4<=89)
printf("A2");
else if(s[i].ad4>=90&&s[i].ad4<=100)
printf("A1");
gotoxy(2,21);
printf("Chemistry");
gotoxy(16,21);
printf("100");
gotoxy(27,21);
printf("%d",s[i].n5);
gotoxy(37,21);
printf("%d",s[i].m5);
gotoxy(47,21);
printf("%d",s[i].p2);
s[i].ad5=s[i].n5+s[i].m5+s[i].p2;
gotoxy(56,21);
printf("%d",s[i].ad5);
gotoxy(62,21);
if(s[i].ad5>=0&&s[i].ad5<=29)
printf("F");
else if(s[i].ad5>=30&&s[i].ad5<=34)
printf("E");
else if(s[i].ad5>=35&&s[i].ad5<=39)
printf("D");
else if(s[i].ad5>=40&&s[i].ad5<=49)
printf("C2");
else if(s[i].ad5>=50&&s[i].ad5<=59)
printf("C1");
else if(s[i].ad5>=60&&s[i].ad5<=69)
printf("B2");
else if(s[i].ad5>=70&&s[i].ad5<=79)
printf("B1");
else if(s[i].ad5>=80&&s[i].ad5<=89)
printf("A2");
else if(s[i].ad5>=90&&s[i].ad5<=100)
printf("A1");
gotoxy(2,22);
printf("Sport&Phy.Edu");
gotoxy(16,22);
printf("100");
gotoxy(27,22);
printf("%d",s[i].sport);
gotoxy(47,22);
printf("%d",s[i].p3);
s[i].ad6=s[i].p3+s[i].sport;
gotoxy(56,22);
printf("%d",s[i].ad6);
gotoxy(62,22);
if(s[i].ad6>=0&&s[i].ad6<=29)
printf("F");
else if(s[i].ad6>=30&&s[i].ad6<=34)
printf("E");
else if(s[i].ad6>=35&&s[i].ad6<=39)
printf("D");
else if(s[i].ad6>=40&&s[i].ad6<=49)
printf("C2");
else if(s[i].ad6>=50&&s[i].ad6<=59)
printf("C1");
else if(s[i].ad6>=60&&s[i].ad6<=69)
printf("B2");
else if(s[i].ad6>=70&&s[i].ad6<=79)
printf("B1");
else if(s[i].ad6>=80&&s[i].ad6<=89)
printf("A2");
else if(s[i].ad6>=90&&s[i].ad6<=100)
printf("A1");

s[i].add=s[i].ad1+s[i].ad2+s[i].ad3+s[i].ad4+s[i].ad5;
gotoxy(68,18);
printf("%d",s[i].add);
gotoxy(71,18);
printf("/500");
gotoxy(1,24);
printf("NOTE: Sport Narks Have Not Been Added To Overall Result : ");
s[i].dev=s[i].add/5.00;
gotoxy(68,21);
printf("%f",s[i].dev);
if(s[i].add>=0&&s[i].add<=164)
{
gotoxy(68,19);
printf("Failed");
gotoxy(68,20);
printf("No Div.");
}
else if(s[i].add>=165&&s[i].add<=299)
{
gotoxy(68,19);
printf("Passed");
gotoxy(68,20);
printf("Second Div.");
}
else if(s[i].add>=300&&s[i].add<=500)
{
gotoxy(68,19);
printf("Passed");
gotoxy(68,20);
printf("First Div.");
} gotoxy(1,24);
printf("________________________________________________________________________________\n");
gotoxy(2,26);
printf("\n.....Enter New Detalis......");
printf("\nEnter Examination Year : ");
scanf("%d",&s[i].examy);
printf("Enter Roll Number        : ");
scanf("%ld",&s[i].rno);
printf("Enter Student Name       : ");
scanf("%s",&s[i].n);
printf("Enter Mother's Name      : ");
scanf("%s",&s[i].nm);
printf("Enter Father's Name      : ");
scanf("%s",&s[i].nf);
printf("Enter School Name        : ");
scanf("%s",&s[i].sc);
printf("Enter Marks Details Of Paper 1 : ");
printf("\nHindi         : ");
scanf("%d",&s[i].n1);

/*printf("\nComputer Sci.   : ");
scanf("%d",&s[i].n1);
*/
printf("English         : ");
scanf("%d",&s[i].n2);
/*
printf("Biology         : ");
scanf("%d",&s[i].n3);
*/
printf("Mathematics   : ");
scanf("%d",&s[i].n3);
printf("Physics         : ");
scanf("%d",&s[i].n4);
printf("Chemistry       : ");
scanf("%d",&s[i].n5);
printf("Enter Marks Details Of Paper 2 : ");
printf("\nHindi         : ");
scanf("%d",&s[i].m1);
/*
printf("\nComputer Sci.   : ");
scanf("%d",&s[i].m1);
*/
printf("English         : ");
scanf("%d",&s[i].m2);
/*
printf("Biology         : ");
scanf("%d",&s[i].m3);
*/
printf("Mathemaitics  : ");
scanf("%d",&s[i].m3);
printf("Physics         : ");
scanf("%d",&s[i].m4);
printf("Chemistry       : ");
scanf("%d",&s[i].m5);
printf("Enter Marks Details Of Practicals : ");
/*
printf("\nComputer Sci.   : ");
scanf("%d",&s[i].p5);
*/
printf("Physics         : ");
scanf("%d",&s[i].p1);
printf("Chemistry       : ");
scanf("%d",&s[i].p2);
/*
printf("Biology         : ");
scanf("%d",&s[i].p4);
*/
printf("Enter Sport& Physical Education Marks : ");
scanf("%d",&s[i].sport);
printf("Practical Marks Of Sport              : ");
scanf("%d",&s[i].p3);
}
fwrite(&s[i],sizeof(s[i]),1,p);
printf("Modified Successfully");
fclose(p);
}
void det(int n)
{
p=fopen("kkk.cpp","rb");
remove("aaa.cpp");
printf("deleted successfully : ");
}

