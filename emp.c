#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
enum emp{e1=111620};
struct address
{
        int dno;
        long int pin;
        char street[15];
};
struct employee
{
        long emp_no;
        char name[25];
        int year,age;
        char degn[15];
        char dept[10];
        long long pno;
        struct address a;
};
void main()
{
        FILE *fp,*fp1,*fp2,*fp3,*fp4,*fp5,*log;
        time_t t;
        time(&t);
        system("clear");
        int i;
        int n,ip;
        char loginId[20];
        char password[10]="mvgrce";
        char key[25];
        printf("\t\t\t\t\t\t\t\t\t\tLoading Application Interface System...\n");
        printf("\t\t\t\t\t\t\t\tPerforming TLS Handshake...     This might take some time...\n");
        for(i=0;i<750000000;i++);
        printf("\t\t\t\t\t\t\t\tBooting File Command And Control Protocol...\n");
        printf("\t\t\t\t\t\t\t\tWaiting for Signal....        Recieved\n");
        printf("\t\t\t\t\t\t\t\tTransitioning .....Closing Boot\n");
        for(i=0;i<950000000;i++);
        system("clear");
	printf("\t\t\t\t\t\t\t\t\t\tWELCOME TO MVGR PORTAL\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime : %s\n",ctime(&t));
        //printf("\t\t\t\t\t\t\t\t\t\tLet's Login You......\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tLogin ID : ");
        scanf("%s",loginId);
        printf("\t\t\t\t\t\t\t\t\t\tPass Word : ");
        scanf("%s",password);
        if(strcmp(password,"mvgrce")!=0)
        {
                printf("\t\t\t\t\t\t\t\t\t\tUn Authorised Access\n");
                exit(0);
        }
        



	system("clear");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Hello %s\n",loginId);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\tMENU\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t1. New Employee\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t2. Search\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tInput : ");
        scanf("%d",&ip);
        system("clear");
        if(ip==1)
        {
                fp=fopen("name.txt","a");
                fp1=fopen("dept.txt","a");
                fp2=fopen("degn.txt","a");
                fp3=fopen("pno.txt","a");
                fp4=fopen("year.txt","a");
                fp5=fopen("address.txt","a");
                log=fopen("log.txt","a");
                if(fp == NULL || fp1 == NULL || fp2 == NULL || fp3 == NULL || fp4 == NULL || fp5 == NULL)
                {
                        fprintf(stdout,"Sorry, the System is not responding \t Try After Sometime\n");
                        fprintf(log,"Error while openinng Files at %s\n",ctime(&t));
                        exit(0);
                }
                printf("\t\t\t\t\t\t\t\t\t\tEntering New Employee System.......\n");
                for(i=0;i<150000000;i++);
                system("clear");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHello %s\n",loginId);
                printf("\t\t\t\t\t\t\t\tTIME : %s\n",ctime(&t));
                printf("\t\t\t\t\t\t\t\t\tHow many Employees ?\n\t\t\t\t\t\t\t\t\t");
                scanf("%d",&n);
                struct employee e[n];
	       for(i=0;i<n;i++)
                {
                        



		      printf("\t\t\t\t\t\t\t\t\t\t\t\t\tHello %s\n",loginId);
                        printf("\t\t\t\t\t\t\t\tTime : %s\n",ctime(&t));
                        e[i].emp_no=e1+i;
                        printf("\t\t\t\t\t\t\t\t\tEmployee Number : %ld\n",e[i].emp_no);
                        



		      printf("\t\t\t\t\t\t\t\t\tName : ");
                        scanf("%s",e[i].name);
                        printf("\t\t\t\t\t\t\t\t\tAge : ");
                        scanf("%d",&e[i].age);
                        printf("\t\t\t\t\t\t\t\t\tYear Of Joining : ");
                        scanf("%d",&e[i].year);
                        printf("\t\t\t\t\t\t\t\t\tDepartment : ");
                        scanf("%s",e[i].dept);
                        printf("\t\t\t\t\t\t\t\t\tDesignation : ");
                        scanf("%s",e[i].degn);
                        printf("\t\t\t\t\t\t\t\t\tAddress :\n");
                        printf("\t\t\t\t\t\t\t\t\tDoor Number : ");
                        scanf("%d",&e[i].a.dno);
                        printf("\t\t\t\t\t\t\t\t\tStreet Name : ");
                        scanf("%s",e[i].a.street);
                        printf("\t\t\t\t\t\t\t\t\tPin Code : ");
                        scanf("%ld",&e[i].a.pin);
                        printf("\t\t\t\t\t\t\t\t\tContact Number : ");
                        scanf("%lld",&e[i].pno);
                        system("clear");
                }
                printf("\t\t\t\t\t\t\t\t\t\tBooting Data Transfer Protocol....\n");
                printf("\t\t\t\t\t\t\t\t\t\tLoading Buffer Protocol..... \n");
                printf("\t\t\t\t\t\t\t\t\t\tCalling Buffer.....\n");
                for(i=0;i<200000;i++);
                system("clear");
                printf("\t\t\t\t\t\t\t\t\t\t\tTIME : %s\n",ctime(&t));
                



		for(i=0;i<n;i++)
                	{
                        fprintf(fp,"%s\n",e[i].name);
                        fprintf(fp1,"%s\n",e[i].dept);
                        fprintf(fp2,"%s\n",e[i].degn);
                        


fprintf(fp3,"%lld\n",e[i].pno);
fprintf(fp4,"%d\n",e[i].year);
fprintf(fp5,"%d %s %ld\n",e[i].a.dno,e[i].a.street,e[i].a.pin);
                }
  

		if(n>5)
                {
                        printf("This Might Take Some Time .....\n");
                        for(i=0;i<100000000;i++);
                }
                //for(i=0;i<1000000000;i++);
                printf("\t\t\t\t\t\t\t\t\t\tFile Succesfully Saved:)\n");
                fclose(fp);
                fclose(fp1);
                fclose(fp2);
                fclose(fp3);
                fclose(fp4);
                fclose(fp5);
        }
        if(ip==2)
        {
                fp=fopen("name.txt","r");
                char str[25],key[25];
                char ch;
                int count=0,j=0,keylen;
                printf("Search : ");
                



		scanf("%s",key);
                   keylen=strlen(key);
                while(1)
                {
                        ch=fgetc(fp);
                        if(ch=='\n')
                        {
                                str[j]='\0';
                                j=0;
                                count++;
                                


		//printf("    %s\n",str);
                                if(keylen==strlen(str))
                                {
                                        fflush(stdin);
                                        if(strcmp(str,key)==0)
                                        {
                                                


			printf("%s Found\n",key);
                                                break;
                                        }
                                }
                                continue;
                        }
                        if(feof(fp))
                        {
                                printf("Name Not Found\n");
                                exit(0);
                        }
str[j]=ch;
                        //printf("%c",ch);
                       



			 j++;
                }
                fp1=fopen("dept.txt","r");
                fp2=fopen("degn.txt","r");
                fp3=fopen("pno.txt","r");
                fp4=fopen("year.txt","r");
                printf("Details Are :\n");
                char ch1,ch2,ch3,ch4;
                int i1,i2,i3,i4;
                int cou1=0,cou2=0,cou3=0,cou4=0,count1=0;
                char str1[10],str2[15],str3[15],str4[10];
                while(1)
                {
                        ch1=fgetc(fp1);
                        ch2=fgetc(fp2);
                        ch3=fgetc(fp3);
                        ch4=fgetc(fp4);
                        if(ch1=='\n')
                        {
                                str1[i1]='\0';
                                i1=0;
                                cou1++;
                                if(cou1==count)
                                {
                                        printf(" Department %s\n",str1);
                                        count1++;
                                }
                        }
                        if(ch2=='\n')
                        {
                                str2[i2]='\0';
                                i2=0;
                                cou2++;
                                if(cou2==count)
                                {
                                        



				    printf("Designation : %s\n",str2);
                                        count1++;
                                }
                        }
		      if(ch3=='\n')
                        {
                                str3[i3]='\0';
                                i3=0;
                                cou3++;
                                if(cou3==count)
                                {
                                        printf("Phone Number : %s\n",str3);
                                        count1++;
                                }
                        }
                        if(ch4=='\n')
                        {
                                str4[i4]='\0';
                                i4=0;
                                cou4++;
                                if(cou4==count)
                                {
                                        printf("Year Of Joining : %s\n",str4);
                                        count1++;
                                }
                        }
                        if(count1==4)
                                break;
                        str1[i1]=ch1;
                        str2[i2]=ch2;
                        str3[i3]=ch3;
                        str4[i4]=ch4;
                        i1++;i2++;i3++;i4++;
		}
	fclose(fp);
	fclose(fp1);
fclose(fp2);
	fclose(fp3);
	fclose(fp4);
	fclose(fp5);
        }
}

