//TOURISM MANAGMENT SYSTEM PROJECT

//Developed By Md.Tanvir Miah Shagar

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


int date, month, year;
int date1,month1,year1;
int main()



{  //it will show in opening  window

    system("cls");
    printf("\n\n\n\n\n\t\t\tWELCOME TO ****\n\n\t\t TOURISM MANAGEMENT SYSTEM !! ");
    printf("\n\n\t\tPress any key to continue.................");
    getchar();
    menu();


    return 0;
}


//Functions

void destination();

    void america();
    void italy();
    void france();
    void london();
    void japan();
    void turkey();
    void destination();
    void BookTicket();
    void CheckTicket();
    void flights();
    void input();
    void print_details();
    void print_ticket();
    int menu();
    void hotels();





struct info
{
    int age;
    int cost;
    int days;
    char destination[50];
    char name[50];
    char gender;
    float time;
    char fname[30];
    char hname[30];
    char shift[2];

}e;


void print_details()
{
    system("cls");
    int id, no,flag=0;
    printf("\n\t TRAVELLERS DETAILS : \n ");
    printf("\n ENTER ID OR NAME OF THE PERSON YOU ARE SEARCHING FOR :  ");
    scanf("%d", &id);

    //file open

    FILE *f;
    f=open("info.txt" "r");

   while(!feof (f))
    {


        fscanf(f, "%d %s %d %c %d %s %s %d %d %d %d %d %d %s ",&no, &e.name, &e.age, &e.gender, &e.cost, &e.destination, &e.fname, &e.time, &e.shift, &date, &month, &year, &date1, &month1, &year1, &e.hname);

          if(id==no)
		{
		printf("\n\n\tID : %d",no);
		printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", e.name,e.hname);
		printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",e.age,date,month,year);
		printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", e.gender,date1,month1,year1);
        printf("\n\tDESTINATION : %s",e.destination);
        printf("\n\tFLIGHT NAME : %s",e.fname);
        printf("\n\tDEPARTURE TIME : %f %s",e.time,e.shift);
        printf("\nPress enter to continue .....");
	flag=1;
		}
     if(flag==1)
     break;
           }
	fclose(f);
	if(flag==0)
	{
		printf("\nNo bill exists.");
		printf("\nPress enter to continue .....");

	}
}





void print_ticket()

{
    int cnt;
    system ("cls");
    int z, no, flag;
    FILE *f;
    printf("\n\n\t YOUR TICKET: ");


    for(z=0;z<cnt;z++)
    {
        flag=0;
        f=open("info.txt" "r");

        while(feof(f))
        {
            fscanf(f,"%d %s %d %c %d %s %s %f %s %d %d %d %d %d %d %s ", &no, &e.name, &e.age, &e.gender, &e.cost, &e.destination, &e.fname, &e.time, &e.shift, &date, &month, &year, &date1, &month1, &year1, &e.hname);

            if(z==no)
            {

                printf("\n\n\t ID : %d", no);

                printf("\n\t NAME : %s \t\t HOTEL NAME : %s", e.name, e.hname);

                printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",e.age,date,month,year);

	        	printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", e.gender,date1,month1,year1);

                printf("\n\tDESTINATION : %s",e.destination);

                printf("\n\tFLIGHT NAME : %s",e.fname);

                printf("\n\tDEPARTURE TIME : %f %s",e.time,e.shift);

              flag=1;
            }

           if(flag==1)
            break;

        }
        fclose(f);

    }
        printf("\n\n\t\tTOTAL COST : %ld ",e.cost);

        printf("\n\n\t\tBOOKING SUCCESSFULL");
        printf("\n\n\t\t   press enter to go to main menu .....");
        getchar();
        menu();
}




int check()
{
    int id;
   int fi;
	 FILE *f1;

        f1=fopen("checkid.txt", "w");

fclose(f1);

 FILE *f;
	f=fopen("checkid.txt","r+");
   while(!feof(f))
{
	fscanf(f,"%d",&fi);
	if(fi==id)
	{
	printf("\n\t ID ALDREADY EXISTS!) !\n\t CHOOSE ANOTHER ID :\n");
	return 1;
	}
}

fclose(f);

return 0;
}




void input()

{

    int cnt;
    int cno;
	int a[cnt], inp;
	  int y=0 ;
	switch(y+0)
	{
		case 1:(destination,      "AMERICA"); break;
		case 2:(destination,      "ITALY"); break;
		case 3:(destination,      "FRANCE"); break;
		case 4:(destination,      "LONDON"); break;
		case 5:(destination,      "JAPAN"); break;
		case 6:(destination,      "TURKEY"); break;
		case 7:(destination,      "UGANDA"); break;

	}


int x=0,id;
	while(x<inp)
		{
		system("cls");
			printf("\n\t\t ENTER %d PERSON DETAILS",x+1);
		a:
		printf("\n\n\t     CHOOSE YOUR TRAVEL ID (1-100) : ");
	scanf("%d",&id);
	inp=check(id);
	if(inp==1)
	goto a;
	printf("\n\t    ENTER  NAME , AGE , GENDER (M/F)  :\n\n");
	FILE *f;
	f=fopen("info.txt","a+");
	printf("\t    ");
	scanf("%s", &e.name);
	printf("\t    ");
	scanf("%d",&e.age);
	printf("\t    ");
	getchar();
    e.gender=getchar();
    printf("\n\n\t\t   press enter to continue .....");
     getchar();
	getchar();
	flights(id);
	hotels();
	fprintf(f,"%d %s %d %c %d %s %s %f %s ",id,e.name,e.age,e.gender,e.cost,e.destination,e.fname,e.time,e.shift);
	fprintf(f," %d %d %d %d %d %d %s\n",date,month,year,date1,month1,year1,e.hname );
      fclose(f);
      a[x]=id;
      x++;
		}
	print_ticket(a);
}




void flights()
	{
	    int id;
		int choice;
	         printf("\n\n\t\t FLIGHTS AVAILABLE!!!!!! \n\n CHOOSE YOUR FLIGHT : ");
	         printf("\n\n    1. LUFTHANSA:       DEPARTURE : 6.00 AM  PRICE : 68,000 BDT");
	         printf("\n      2. JET AIRWAYS:     DEPARTURE : 9.00 AM  PRICE : 40,000 BDT");
			 printf("\n      3. QATAR AIRWAYS :  DEPARTURE : 1.00 PM  PRICE : 55,000 BDT");
		     printf("\n      4. EMIRATES:        DEPARTURE : 5.00 PM  PRICE : 75,000 BDT");
             printf("\n      5. AIR ASIA :       DEPARTURE : 9.00 PM  PRICE : 42,000 BDT");

		     printf("\n\n\t ENTER CHOICE :  ");

		     scanf("%d",&choice);

//using switch case and choice is used because i will choose flight for me

		switch(choice)
		{
              case 1: e.cost=68000;
                      e.time=6.00;
                      strcpy(e.shift,"AM");
                      strcpy(e.fname,"LUFTHANSA");break;
              case 2: e.cost=40000;
                      e.time=9.00;
                      strcpy(e.shift,"AM");
                      strcpy(e.fname,"JET_AIRWAYS");break;
              case 3: e.cost=55000;
                      e.time=1.00;
                      strcpy(e.shift,"PM");
                      strcpy(e.fname,"QATAR_AIRWAYS");break;
              case 4: e.cost=75000;
                      e.time=5.00;
                      strcpy(e.shift,"PM");
                      strcpy(e.fname,"EMIRATES");break;
              case 5: e.cost=42000;
                      e.time=9.00;
                      strcpy(e.shift,"PM");
                      strcpy(e.fname,"AIR_ASIA");break;
         }
	 }




void destination()
{
    //It will show on terminal window

    system("cls");

    int n;
    printf("\n\t DESTINATION: ");
    printf("\n\n\t  1. AMERICA ");
    printf("\n\n\t  2. ITALY ");
    printf("\n\n\t  3. FRANCE ");
    printf("\n\n\t  4. LONDON ");
    printf("\n\n\t  5. JAPAN ");
    printf("\n\n\t  6. TURKEY ");
    printf("\n\n\t  7. UGANDA");
     printf("\n\n\t 8. CANADA ");
    printf("\n\n\t  9. GERMANY ");
    printf("\n\n\t  10. AFRICA");
     printf("\n\n\t 11. SINGAPORE ");
    printf("\n\n\t  12. MALAYSIA ");
    printf("\n\n\t  13. NEPAL");



    printf("\n\n\t ENTER CHOICE  :  ");
    scanf("%d", &n);


//using switch case


switch (n)
{
    case 1:america();break;
    case 2:italy();break;
    case 3:france();break;
    case 4:london();break;
    case 5:japan();break;
    case 6:turkey();break;
    case 7:uganda();break;
    case 8:canada();break;
    case 9:germany();break;
    case 10:africa();break;
    case 11:singapore();break;
    case 12:malaysia();break;
    case 13:nepal();break;

}
}

void america()
{

    system("cls");
    int cnt;
    printf("\nWELCOME TO AMERICAN TOURISM!!!!!!\n");

    printf("ENTER NUMBER OF PEOPLE...");

    scanf("%d", &cnt);
    input(cnt,1);

 }


 void italy()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO ITALY TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,2);
}

void france()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO FRANCE TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,3);
}



void london()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO LONDON TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,4);
}



void japan()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO JAPAN TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,5);
}



void turkey()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO TURKEY TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,6);
}



void uganda()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO UGANDA TOURISM!!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,7);
}


void canada()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO CANADA TOURISM!!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,8);
}

void germany()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO GERMANY TOURISM!!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,9);
}

void africa()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO AFRICA TOURISM!!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,10);
}

void singapore()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO SINGAPORE TOURISM!!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,11);
}

void malaysia()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO MALAYSIA TOURISM!!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,12);
}

void nepal()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO NEPAL TOURISM!!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,13);
}


void hotels()

{
     int id;
    int n;

    system("cls");

    printf("\n\n\t HOTELS");
    printf("\\n\n\t 1. EMIRATES PALACE\t PRICE : 16,000 BDT PER DAY");
    printf("\\n\n\t 2.  BURJ AL ARAB\t PRICE : 20,000 BDT PER DAY");
    printf("\\n\n\t 3. TOWN HOUSE GALLERIA\t PRICE : 25,000 BDT PER DAY");
    printf("\\n\n\t 4. ROYAL MALWANE\t PRICE : 28,000 BDT PER DAY");
    printf("\\n\n\t 5. SEAGUL\t PRICE : 16,000 BDT PER DAY");



    printf("ENTER CHOICE :  ");

    scanf("%d", &n);

    printf("\n\n\t ENTER NO OF DAYS : ");

	scanf("%d",&e.days);

//using switch case


    switch (n)

    {
       case 1: e.cost+=68000;
e.time=6.00;
strcpy(e.shift,"AM");
strcpy(e.fname,"LUFTHANSA");break;
case 2: e.cost=40000;
e.time=9.00;
strcpy(e.shift,"AM");
strcpy(e.fname,"JET_AIRWAYS");break;
case 3: e.cost=55000;
e.time=1.00;
strcpy(e.shift,"PM");
strcpy(e.fname,"QATAR_AIRWAYS");break;
case 4: e.cost=75000;
e.time=5.00;
strcpy(e.shift,"PM");
strcpy(e.fname,"EMIRATES");break;
case 5: e.cost=42000;
e.time=9.00;
strcpy(e.shift,"PM");
strcpy(e.fname,"AIR_ASIA");break;
}
	  FILE *p;
       p=fopen("checkid.txt","a+");

         fprintf(p,"%d \n",id);
        fclose(p);
        printf("\n\n\t\t   press enter to continue .....");
	getchar();
	getchar();





}



int menu()
{
	int n;
system("cls");
	printf("\n\tMENU :");

	printf("\n\n\t1. CHOOSE DESTINATION \n\n\t2. GENERATE BILL\n\n\t3. EXIT\n\n\tENTER CHOICE :  ");


	scanf("\n %d", &n);

	//using switch case

	switch (n)
	{
	case 1:destination(); break;
	case 2:print_details(); break;
	case 3: return 0;
}
}
