#include<stdio.h>
        #include<string.h>
        int main()
        {
        	char str[103];
        	int a[4]={0},i,len;
        	scanf("%s",str);
        	len=strlen(str);
        	if(len<5)
        	{
        		printf("NO");
        		return 0;
        	}
        	int Uword=0,Lword= 0,num= 0,Other= 0;
        	for(i=0;i<len;i++)
        	{
        		if(str[i]>='0'&&str[i]<='9')
        		{
        			num=1;
        		}
        		else if(str[i]>='a'&&str[i]<='z')
        		{
        			Lword=1;
        		}
        		else if(str[i]>='A'&&str[i]<='Z')
        		{
        			Uword=1;
        		}
        		else if(str[i]=='_'||str[i]=='.'||str[i]=='?'||str[i]==','||str[i]=='!')
        		{
        		}
        		else
        		{
        			printf("NO");
        			return 0;
        		}
        	}
        	if(Uword && Lword && num)
        	{
        		printf("YES");
        	}
        	else
        	{
        		printf("NO");
        	}
        	return 0;
        }
