// programmed by Ravi Prakash vickyravi17@gmail.com
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
int size=669;
int main()
{
	char input[200] = " /media/GoFlex/shefali/recup_dir."; // Enter your path of folder
	char dest[200] = " /media/GoFlex/shefali/";
	char make[200] = "mkdir /media/GoFlex/shefali/";
	int i=1;
	//jpg
	strcat(make,"jpg");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.jpg",folder[30]="jpg";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//png
	make[28]='\0';
	strcat(make,"png");
	system(make);
	
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.png",folder[30]="png";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//avi
	make[28]='\0';
	strcat(make,"avi");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.avi",folder[30]="avi";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//mkv
	make[28]='\0';
	strcat(make,"mkv");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.mkv",folder[30]="mkv";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//mp4
	make[28]='\0';
	strcat(make,"mp4");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.mp4",folder[30]="mp4";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//mp3
	make[28]='\0';
	strcat(make,"mp3");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.mp3",folder[30]="mp3";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//flv
	make[28]='\0';
	strcat(make,"flv");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.flv",folder[30]="flv";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//.c
	make[28]='\0';
	strcat(make,"c");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.c",folder[30]="c";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//.pdf
	make[28]='\0';
	strcat(make,"pdf");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.pdf",folder[30]="pdf";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//.mpg
	make[28]='\0';
	strcat(make,"mpg");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.mpg",folder[30]="mpg";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
	//delete xml
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.xml",folder[30]="xml";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
	//	strcat(mv,dest);
		system(mv);
	}
	//delte exe
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.exe",folder[30]="exe";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
	//	strcat(mv,dest);
		system(mv);
	}
	//delete txt
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.txt",folder[30]="txt";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
	//	strcat(mv,dest);
		system(mv);
	}
	//delete class
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.class",folder[30]="class";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		//strcat(mv,dest);
		system(mv);
	}
	//delete .dll
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.dll",folder[30]="class";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		//strcat(mv,dest);
		system(mv);
	}
	//delete .DLL
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.DLL",folder[30]="class";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		//strcat(mv,dest);
		system(mv);
	}
	// delete .java
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.java",folder[30]="class";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		//strcat(mv,dest);
		system(mv);
	}
	//.gif
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.gif",folder[30]="class";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		//strcat(mv,dest);
		system(mv);
	}
	
	// .wmf
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="rm",code[20]="/*.wmf",folder[30]="class";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		//strcat(mv,dest);
		system(mv);
	}
	//other
	make[28]='\0';
	strcat(make,"other");
	system(make);
	for(i=1;i<=size;i++)
	{
		char num[10],mv[300]="mv",code[20]="/*.*",folder[30]="other";
		sprintf(num,"%d",i);
		strcat(mv,input);
		strcat(mv,num);
		strcat(mv,code);
		strcat(mv,dest);
		strcat(mv,folder);
		system(mv);
	}
}
