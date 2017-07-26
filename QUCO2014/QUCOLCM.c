#include<stdio.h>
#include<stdlib.h>
struct Event
{
long long int start_time,finish_time;
};
int comp (const void * elem1, const void * elem2)
{
struct Event f = *((struct Event*)elem1);
struct Event s = *((struct Event*)elem2);
if (f.finish_time > s.finish_time) return 1;
if (f.finish_time < s.finish_time) return -1;
return 0;
}
long long int printMaxActivities(struct Event events[], long long int n)
{
qsort(events,n,sizeof(struct Event),comp);
long long int i, j;
long long int count = 1;
i = 0;
for (j = 1; j < n; j++)
{
if (events[j].start_time > events[i].finish_time)
{
count++;
i = j;
}
}
return count;
}
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
long long int n,count,i;
scanf("%lld",&n);
struct Event *events = (struct Event *)malloc(n*sizeof(struct Event));
for(i=0;i<n;i++)
scanf("%lld %lld",&events[i].start_time,&events[i].finish_time);
count = printMaxActivities(events,
n);
printf("%lld\n",count);
}
return 0;
}
