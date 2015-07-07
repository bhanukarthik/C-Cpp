#include<stdio.h>
#include<math.h>

int close=0;

int isTwo(unsigned long long int num)
{
	int nofO=0,i;
	for(i=0;i<64;i++)
	{
		if(num&1)
		{
			nofO++;
			close=i;	
		}
		num=num>>1;
	}

	if(nofO>1)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

int main()
{
	int nofT=0,i;
	scanf("%d",&nofT);
	for(i=0;i<nofT;i++)
	{

		unsigned long long int num;
		int turn=1;
		scanf("%llu",&num);
		while(num!=1)
		{
			if(isTwo(num))
			{
				num=num/2;
				//printf("%llu---%d\n",num,turn);
			}

			else
			{

				num=num-(unsigned long long int)pow(2,close);
				//printf("%llu---%d---%d---%llu\n",num,turn,close,(unsigned long long int)pow(2,close));
			}
				

			if(turn==1)
			{
				turn=2;
			}
			else
				turn=1;


		}
			if(turn==2 && num==1)
			{
				printf("Louise\n");
			}
			else if(num==1)
			{
				printf("Richard\n");
			}



	}



}

