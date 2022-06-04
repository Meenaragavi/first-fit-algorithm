#include<stdio.h>
int main()
{
    int bn,bsize[10000],pn,psize[10000],flag[10000],temp,total,b_flag[10000];
    printf("\nEnter no of blocks: ");
    scanf("%d",&bn);
    for(int i=1;i<=bn;i++)
    {
        printf("\nEnter the size of the block%d: ",i);
        scanf("%d",&bsize[i]);
        b_flag[i]=0;
    }
    printf("\nEnter no of process: ");
    scanf("%d",&pn);
    for(int i=1;i<=pn;i++)
    {
        printf("\nEnter the size of the process%d: ",i);
        scanf("%d",&psize[i]);
        flag[i]=0;
    }
    for(int i=1;i<=pn;i++)
    {
        for(int j=1;j<=bn;j++)
        {
            if(bsize[j]>=psize[i] && flag[i]==0 && b_flag[j]==0)
            {
                printf("\nProcess%d of size %d is allocated to block%d of size %d",i,psize[i],j,bsize[j]);
                temp=bsize[j]-psize[i];
                total=total+temp;
                flag[i]=1;
                b_flag[j]=1;
                break;
            }
        }
    }
    printf("\nleft over space = %d",total);
}

