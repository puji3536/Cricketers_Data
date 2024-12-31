#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define n 15
struct cricketers
{
	char name[20];
	int o_matches;
	int o_runs;
	int o_wic;
	float o_sr;
	int o_frs;
	int o_six;
	struct tests
	{
		int t_matches;
		int t_innings;
		int t_runs;
		int t_wic;
		float t_sr;
		int t_frs;
		int t_six;
	}t[n];
	struct ODIs
	{
		int d_matches;
		int d_runs;
		int d_wic;
		float d_sr;
		int d_frs;
		int d_six;
	}d[n];
	struct T20s
	{
		int tt_matches;
		int tt_runs;
		int tt_wic;
		float tt_sr;
		int tt_frs;
		int tt_six;
	}tt[n];
}c[n];		
char hrname[20],hwname[20],hsrname[20];
int main()
{
	int i,rank,j,k,temp1,temp2,temp3;
	float hsr;
	char option;
	printf("\n Enter the details of INDIAN cricket team:\n");
	for(i=1;i<=n;i++)
	{
		printf("\n Enter player %d details: \n",i);
		printf("\n Enter name of player %d: ",i);
		scanf("%s",c[i].name);
		printf("\n Enter player %d's test cricket details in the order: matches, innings, runs, wickets, strikerate, no. fours and no. of sixes: \n",i);
		scanf("%d%d%d%d%f%d%d",&c[i].t[i].t_matches,&c[i].t[i].t_innings,&c[i].t[i].t_runs,&c[i].t[i].t_wic,&c[i].t[i].t_sr,&c[i].t[i].t_frs,&c[i].t[i].t_six);
		printf("\n Enter player[%d]'s One Day International's cricket details in the order: matches, runs, wickets, strikerate, no. fours and no. of sixes: \n",i);
		scanf("%d%d%d%f%d%d",&c[i].d[i].d_matches,&c[i].d[i].d_runs,&c[i].d[i].d_wic,&c[i].d[i].d_sr,&c[i].d[i].d_frs,&c[i].d[i].d_six);
		printf("\n Enter player[%d]'s Twenty Twenty's cricket details in the order: matches, innings, runs, wickets, strikerate, no. fours and no. of sixes: \n",i);
		scanf("%d%d%d%f%d%d",&c[i].tt[i].tt_matches,&c[i].tt[i].tt_runs,&c[i].tt[i].tt_wic,&c[i].tt[i].tt_sr,&c[i].tt[i].tt_frs,&c[i].tt[i].tt_six);
		c[i].o_matches=(c[i].t[i].t_matches+c[i].d[i].d_matches+c[i].tt[i].tt_matches);
		c[i].o_runs=(c[i].d[i].d_runs+c[i].t[i].t_runs+c[i].tt[i].tt_runs);
		c[i].o_wic=(c[i].d[i].d_wic+c[i].t[i].t_wic+c[i].tt[i].tt_wic);
		c[i].o_sr=((c[i].d[i].d_sr+c[i].t[i].t_sr+c[i].tt[i].tt_sr)/3);
		c[i].o_frs=(c[i].d[i].d_frs+c[i].t[i].t_frs+c[i].tt[i].tt_frs);
		c[i].o_six=(c[i].d[i].d_six+c[i].t[i].t_six+c[i].tt[i].tt_six);
	}

	again:
	printf("\n Enter a number to get the following details:");
	printf("\n\t\t\t 1. To get A ranked players:");
	printf("\n\t\t\t 2. To get B ranked players:");
	printf("\n\t\t\t 3. To get C ranked players:");
	printf("\n\t\t\t 4. To get D ranked players:");
	printf("\n\t\t\t 5. To get all the players details in various formats:");
	printf("\n\t\t\t 6. To get all the players sorted details:");
	printf("\n\t\t\t 7. Exit \t\t");
	scanf("%d",&rank);
	switch (rank)
	{
		case 1:
			printf("\n The A ranked players from INDIAN team are:");
			for(i=1;i<=n;i++)
			{
				if(c[i].o_runs>=10000)
				{
					printf("\t %s with runs %d",c[i].name,c[i].o_runs);
				}
				else
				{
					printf("\n No one from number of runs scored.");
				}
				if(c[i].o_wic>=100)
				{
					printf("\n %s with wickets %d",c[i].name,c[i].o_wic);
				}
				else
				{
					printf("\n No one from number of wickets taken.");
				}
				if(c[i].o_sr>=180&&c[i].o_matches>=30)
				{
					printf("\n %s with strikerate %f",c[i].name,c[i].o_sr);
				}
				else
				{
					printf("\n No one from strikerate.");
				}
			}
			break;
		case 2:
			printf("\n The B ranked players from INDIAN cricket team are:");
			for(i=0;i<=n;i++)
			{
				if(c[i].o_runs>5000&&c[i].o_runs<10000)
				{
					printf("\n %s with runs %d",c[i].name,c[i].o_runs);
				}
				else
				{
					printf("\n No one from number of runs scored.");
				}
				if(c[i].o_wic>=50&&c[i].o_wic<100)
				{
					printf("\n %s with %d wickets.",c[i].name,c[i].o_wic);
				}
				else
				{
					printf("\n No one from number of wickets taken.");
				}
				if(c[i].o_sr>=150&&c[i].o_sr<170&&c[i].o_matches>=30)
				{
					printf("\n %s with %f strikerate.",c[i].name,c[i].o_sr);
				}
				else
				{
					printf("\n No one from strikerate.");
				}
			}
			break;
		case 3:
			printf("\n The C ranked players from INDIAN cricket team are:");
			for(i=0;i<=n;i++)
			{
				if(c[i].o_runs>2000&&c[i].o_runs<5000)
				{
					printf("\n %s with runs %d",c[i].name,c[i].o_runs);
				}
				else
				{
					printf("\n No one from number of runs scored.");
				}
				if(c[i].o_wic>=20&&c[i].o_wic<50)
				{
					printf("\n %s with %d wickets.",c[i].name,c[i].o_wic);
				}
				else
				{
					printf("\n No one from number of wickets taken.");
				}
				if(c[i].o_sr>=120&&c[i].o_sr<150&&c[i].o_matches>=30)
				{
					printf("\n %s with %f strikerate.",c[i].name,c[i].o_sr);
				}
				else
				{
					printf("\n No one from strikerate.");
				}
			}
			break;
		case 4:
			printf("\n The D ranked players from INDIAN cricket team are:");
			for(i=1;i<=n;i++)
			{
				if(c[i].o_runs>=0&&c[i].o_runs<2000)
				{
					printf("\n %s with runs %d",c[i].name,c[i].o_runs);
				}
				else
				{
					printf("\n No one from number of runs scored.");
				}
				if(c[i].o_wic>=0&&c[i].o_wic<20)
				{
					printf("\n %s with wickets %d.",c[i].name,c[i].o_wic);
				}
				else
				{
					printf("\n No one from number of wickets taken.");
				}
				if(c[i].o_sr>=0&&c[i].o_sr<120)
				{
					printf("\n %s with strikerate of %f",c[i].name,c[i].o_sr);
				}
				else
				{
					printf("\n No one from strike rate.");
				}
			}
			break;
		case 5:
			printf("\n The details of all the INDIAN players are: \n");
			for(i=1;i<=n;i++)
			{
				printf("\n Overall details of player[%d] named (%s): \n Matches=%d \n Runs=%d \n Wicketes=%d \n Strikerate=%f \n Fours=%d \n Sixes=%d",i,c[i].name,c[i].o_matches,c[i].o_runs,c[i].o_wic,c[i].o_sr,c[i].o_frs,c[i].o_six);
				printf("\n %s's TEST cricket details are: Matches=%d \n Innings=%d \n Runs=%d \n Wickets=%d \n Strikerate=%f \n No. of fours=%d \n No. of sixes=%d",c[i].name,c[i].t[i].t_matches,c[i].t[i].t_innings,c[i].t[i].t_runs,c[i].t[i].t_wic,c[i].t[i].t_sr,c[i].t[i].t_frs,c[i].t[i].t_six);
				printf("\n %s's One Day Internationals cricket details are: Matches=%d \n Runs=%d \n Wickets=%d \n Strikerate=%f \n No. of fours=%d \n No. of sixes=%d",c[i].name,c[i].d[i].d_matches,c[i].d[i].d_runs,c[i].d[i].d_wic,c[i].d[i].d_sr,c[i].d[i].d_frs,c[i].d[i].d_six);
				printf("\n %s's Twenty Twenty's cricket details are: Matches=%d \n Runs=%d \n Wickets=%d \n Strikerate=%f \n No. of fours=%d \n No. of sixes=%d",c[i].name,c[i].tt[i].tt_matches,c[i].tt[i].tt_runs,c[i].tt[i].tt_wic,c[i].tt[i].tt_sr,c[i].tt[i].tt_frs,c[i].tt[i].tt_six);
			}
			break;
		case 6:
		{
			for(i=1;i<=n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(c[i].o_runs<c[j].o_runs)
					{
						temp1=c[i].o_runs;
						c[i].o_runs=c[j].o_runs;
						c[j].o_runs=temp1;
					}
				}
			}
			printf("\n The sorted players RUNS list in decreasing order is: ");
			for(i=1;i<=n;i++)
			{
				printf("\n %d",c[i].o_runs);
			}
			for(i=1;i<=n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(c[i].o_wic<c[j].o_wic)
					{
						temp2=c[i].o_wic;
						c[i].o_wic=c[j].o_wic;
						c[j].o_wic=temp2;
					}
				}
			}
			printf("\n The sorted players WICKETS list in decreasing order is: ");
			for(i=1;i<=n;i++)
			{
				printf("\n %d",c[i].o_wic);
			}
			for(i=1;i<=n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(c[i].o_sr<c[j].o_sr)
					{
						temp3=c[i].o_sr;
						c[i].o_sr=c[j].o_sr;
						c[j].o_sr=temp3;
					}
				}
			}
			printf("\n The sorted players STRIKERATES list in decreasing order is: ");
			for(i=1;i<=n;i++)
			{
				printf("\n %f",c[i].o_sr);
			}
			goto options;
		}
		case 7:
		{
			exit(0);
		}
			
		default:
			printf("\n Please enter valid number:");
			goto again;
	}
	options:
	printf("\n\n\n Please choose if you want to continue or not: 'y' or 'Y' if you want to continue and 'n' or 'N' or any other key if you want to stop:\n\t");
	option=getch();
	if(option=='y' || option=='Y')
	{
		goto again;
	}
	else if(option=='n' || option=='N')
	{
		exit(0);
	}
}
