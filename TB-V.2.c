#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DYNAMIC TABLE
    int nub;
    printf("enter the size of the array:\n");
    scanf("%d" , &nub);

    int x ,y,i;
    int *tb=malloc(nub*sizeof(int));
    *tb=nub;

    for (x=0;x<nub;x++){
        printf("enter the value:\n\n");
        scanf("%d" , &tb[x]);
    }
    for (x=0;x<nub;x++) {
            printf("\n");
        }
        //SELECTION SORT===>THE METHOD
        for(x=0;x<nub-1;x++){
    for(y=x+1;y<nub;y++){

        if(tb[x]<tb[y]){
            i=tb[x];
            tb[x]=tb[y];
            tb[y]=i;
            }
         }
        }
        printf("\t sorted list\n\n");

    for (x=0;x<nub;x++) {
            printf("the value %d = %d\n\n",x+1,tb[x]);
            printf("the adress value is :%d" , *tb[x]);
            }
            // TOTAL===>
            int sum=0,k=0,a=0;
            do {
                sum=sum+tb[k];
                k++;
            } while(k<nub);
                        while (a<nub){
                            a++;
                        }printf("\t sum is =%d\n\n" ,sum);
           //
            int num,m,b,e;
            printf("enter the number of the array:\n");
            scanf("%d" , &num);
            int tab[num];
            for (m=0;m<num;m++){
                printf("enter the value:\n\n");
                scanf("%d" , &tab[m]);
            }
            for (m=0;m<num;m++) {
            printf("\n");
            }

            //INSERTION SORT===>THE METHOD
            for (m=1;m<num;m++){
                e=tab[m];
                b=m-1;
                while ((e<tab[b]) && (b>=0)){
                    tab[b+1]=tab[b];
                    b=b-1;
                }
                tab[b+1]=e;
            }
            printf("the sorted array:\n\n");
            for (m=0;m<num;m++){
                printf("the value %d = %d\n\n" ,m+1,tab[m]);
            }

            //BANIRRY SEARCH====>
            int z,low,high,mid;
            printf("enter the value to find:\n");
            scanf("%d" , &z);
            low=0;
            high=num-1;
            mid=(low+high)/2;
            while (low<=high){
                if(tab[mid]<z)
                    low=mid+1;
                else if (tab[mid]==z)
                {
            printf("the value %d is in %d\n" , z,mid+1);
            break;
                }
                else
                    high=mid-1;
                mid=(low+high)/2;
            }
            if (low>high)
            printf("%d is not exist in the array/n" , z);

        return 0;
}
