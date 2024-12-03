#include<stdio.h>
#include<stdlib.h>
struct Day
{
    char *dayname;
    int date;
    char *activity;
};

void create(struct Day*day)
{
    day->dayName=(char*)malloc(sizeof (char)*20);
    day->activity=(char*)malloc(sizeof (char)*100);
    printf("enter the day name:");
    scanf("%s", day-> name);
    printf("enter the date:");
    scanf("%d", day->date);
    printf("enter the activity for the day:");
    scanf("%[^\n]s",day-> activity);
}
void read(struct day * calendar,int size)
{
for (int i=0;i<size;i++)
{
    printf("enter details for the day %d:\n",i+1);
    create(&calendar[i]);
}
}
void display(struct day*calendar,int size)
{
    printf("day%d:\n",i+1);
    printf("day name:%s\n", calendar[i].day name);
    printf("date:%d\n", calendar[i].date);
    printf("activity:%s\n", calendar[i].activity);
    printf("\n");
}
void free memory(struct day*calendar,intsize)
{
for (int i=0, i<size;i++)
{
    free(calendar[i].dayname);
    free(calendar[i].activity);

}
}
int main()
{
    int size;
    printf("enter the number of days in the week:");
    scanf("%d",&size);
    struct day* calendar=(struct day*)malloc(size of (struct day)*size);
    if(calendar == null);
    {
        printf("memory allocation failed.exiting program\n");
        return 1;
    }
    read(calendar,size);
    display (calendar,size);free memory(calendar,size);
    free(calendar);
    return 0;
}
