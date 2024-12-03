
int main()
{
    int p[20],bt[20],pri[20],wt[20],tat[20],i,k,n,temp;
              float wtavg,tatavg;
    
    printf("enter the number of process--");
    scanf("%d,&n")
    for(i=0;i<n;i++)
    {
        p[i]=i;
        printf("enter the brust time & priority of process%d---",i);scanf(%d
        %d",&bt[i],&pri[i]);
    }
    for(i=0;i<n;i++) for(k=i+1;k<n;K++)
    if(Pri[i]>pri[k])
    {
    trmp=p[i];
    p[i]=p[k];
    p[k]=temp;
    temp=bt[k];
    bt[i]=bt[k];
    bt[k]=temp;
    temp=pri[i];
    pri[i]pri[k];
    pri[k]=temp;

    }
    wtavg=wt[0]=0;
    tatavg=tat[0]=bt[0];
    for(i=1;i<n;i++)
    {
    wt[i]=wt[0]=0;
    tatavg=tat[0]=bt[0];
    for(i=1;i<n;i++)
    {
    wt[i]=wt[i-1]+bt[i-1]
    tatavg=tatavg+tat[i];
    }
    printf("\nprocess\t\tpriority\brust time\waiting time\ttrunaround time");




    for(i=0;i<n;i++)
    print("\n%d\t\%d\t\t%d",p[i],pr[i],bt[i],bt[i],wt[i],tat[i]);
    printf("\average waiting time is -----%f",wtavg/n);printf("\naverageturnaround time is
    ---%f",tatavg/n);
    getch();
    }
    
