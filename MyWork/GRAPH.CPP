#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<iostream.h>
void main_screen();
void polynomial();
void choice(char);
void help();
void menu();
void axis();
int main()
{
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   main_screen();
   //menu();
   polynomial();
   getch();
   closegraph();
   return 0;
}
void main_screen()
{
	settextstyle(1,0,9);
	setcolor(RED+BLINK);
	outtextxy(100,5,"WELCOME");
	setcolor(BLUE);
	outtextxy(260,100,"TO");
	setcolor(MAGENTA);
	outtextxy(150,195,"GRAPH");
	setcolor(GREEN);
	outtextxy(120,290,"PLOTTER");
	settextstyle(1,0,3);
	setcolor(CYAN);
	outtextxy(200,420,"BY AMAN AGGARWAL");
	delay(1200);
	cleardevice();
	//menu();
}
void menu()
{
	cleardevice();
	/*settextstyle(7,0,2);
	setcolor(MAGENTA);
	outtextxy(200,100,"1-POLYNOMIAL");
	setcolor(GREEN);
	outtextxy(200,150,"2-TRIGMNOMETRIC");
	setcolor(CYAN);
	outtextxy(200,200,"3-HELP");
	setcolor(BROWN);
	outtextxy(200,250,"4-EXIT");
	setcolor(WHITE);
	outtextxy(200,295,"ENTER YOUR CHOICE:");
	setcolor(RED);
	rectangle(180,80,500,340);
	gotoxy(57,20); */
	char menu[5][100]={"1-POLYNOMIAL","2-TRIGNOMETRIC","3-HELP","4-EXIT","ENTER YOUR CHOICE:"};
	settextstyle(7,0,2);
	int i=1,j,l;
	for(i=1;i<=5;i++)
	{
		gotoxy(30,10+2*i);
		l=strlen(menu[i-1]);
		for(j=0;j<=l;j++)
		{
			printf("%c",menu[i-1][j]);
			delay(100);
		}
	}
	setcolor(RED);
	rectangle(180,150,430,340);
	gotoxy(49,20);
	char n;
	n=getch();
	choice(n);
}
void choice(char n)
{
	/* ***********    n is a character type variable     ********
	   ***********	  ASCII VALUE OF 1 is 49             ******** */
	cleardevice();
	char ch;
	switch(n)
	{
		/*case 49:
			polynomial();
			break;
		case 50:
			trignometric();
			break; */
		case 51:
			help();
			break;
		case 52:
			setcolor(RED);
			outtextxy(50,150,"DO YOU REALLY WANT TO EXIT(y/n):");
			gotoxy(60,11);
			ch=getch();
			if(ch=='y'||ch=='Y')
			{
				exit(0);
			}
			else
			{
				menu();
			}
		default:
			setcolor(GREEN);
			outtextxy(50,150,"YOU HAVE ENTERED A INVALID CHOICE");
			cout<<"\n";
			outtextxy(50,200,"DO YOU WANT TO GO BACK(y/n):");
			gotoxy(53,14);
			ch=getch();
			if(ch=='y'||ch=='Y')
			{
				menu();
			}
			else
			{
				exit(0);
			}

	}
}
void help()
{
	cleardevice();
	settextstyle(10,0,3);
	setcolor(BROWN);
	outtextxy(50,0,"WELCOME TO HELP SECTION");
	setcolor(RED);
	line(0,60,1200,60);
	setcolor(GREEN);
	settextstyle(1,0,2);
	outtextxy(0,70,"THE PROGRAM ALLOWS YOU TO");
	setcolor(BLUE);
	outtextxy(0,120,"1-DRAW GRAPH OF POLYNOMIAL FUNCTION");
	outtextxy(0,170,"2-VIEW GRAPH OF PRE DEFINED FUNCTION");
	outtextxy(0,220,"PRESS ANY KEY TO GO BACK TO MAIN MENU");
	getch();
	menu();
}
void axis()
{
	setcolor(WHITE);
	//y axis
	line(300,30,300,470);
	//x axis
	line(80,250,520,250);
	// x axis numbering
	setlinestyle(1,0,1);
	// y axis dotted lines
	line(100,30,100,470);
	line(150,30,150,470);
	line(200,30,200,470);
	line(250,30,250,470);
	line(350,30,350,470);
	line(400,30,400,470);
	line(450,30,450,470);
	line(500,30,500,470);
	line(80,50,520,50);
	line(80,100,520,100);
	line(80,150,520,150);
	line(80,200,520,200);
	line(80,300,520,300);
	line(80,350,520,350);
	line(80,400,520,400);
	line(80,450,520,450);
	settextstyle(1,0,1);
	outtextxy(100,270,"-4");
	line(100,240,100,260);
	outtextxy(150,270,"-3");
	line(150,240,150,260);
	outtextxy(200,270,"-2");
	line(200,240,200,260);
	outtextxy(250,270,"-1");
	line(250,240,250,260);
	outtextxy(300,270,"0");
	outtextxy(350,270,"1");
	line(350,240,350,260);
	outtextxy(400,270,"2");
	line(400,240,400,260);
	outtextxy(450,270,"3");
	line(450,240,450,260);
	outtextxy(500,270,"4");
	line(500,240,500,260);
	//y axis numbering
	outtextxy(280,50,"4");
	line(290,50,310,50);
	outtextxy(280,100,"3");
	line(290,100,310,100);
	outtextxy(280,150,"2");
	line(290,150,310,150);
	outtextxy(280,200,"1");
	line(290,200,310,200);
	outtextxy(280,300,"-1");
	line(290,300,310,300);
	outtextxy(280,350,"-2");
	line(290,350,310,350);
	outtextxy(280,400,"-3");
	line(290,400,310,400);
	outtextxy(280,450,"-4");
	line(290,450,310,450);
}
void polynomial()
{
	settextstyle(1,0,3);
	outtextxy(50,50,"ENTER VALUE OF m and c in y=mx+c");
	gotoxy(10,10);
	cout<<"m:";
	gotoxy(10,12);
	cout<<"c:";
	int m,c;
	gotoxy(14,10);
	cin>>m;
	gotoxy(14,12);
	cin>>c;
	int a[9],k=0,i;
	for(i=-4;i<=4;i++)
	{
		a[k]=(m*i)+c;
		k++;
	}
	cleardevice();
	axis();
	setlinestyle(0,0,3);
	for(i=0;i<=7;i++)
	{
		line(100+(50*i),250-(50*a[i]),150+(50*i),250-(50*a[i+1]));
	}
	getch();
}