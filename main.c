#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nub;
    printf("enter the size of the arayy:\n");
    scanf("%d" , &nub);

    int x ,y,i, tb[nub];

    for (x=0;x<nub;x++){
        printf("enter the wages:\n");
        scanf("%d" , &tb[x]);
    }
    //SELECTION SORT
    for (x=0;x<nub;x++) {
            printf("the value=%d\n\n" , tb[x]);
        }
        for(x=0;x<nub-1;x++){
    for(y=x+1;y<nub;y++){

        if(tb[x]>tb[y]){
            i=tb[x];
            tb[x]=tb[y];
            tb[y]=i;
        }

    } }
    printf("\tsorted list\n");
    for (x=0;x<nub;x++) {
            printf("the value=%d\n\n", tb[x]);}
            int sum=0,k=0,a=0;
            do {
                sum=sum+tb[k];
                k++;
            } while(k<nub);
                        while (a<nub){
                            a++;
                        }printf("sum is =%d" ,sum);
        return 0;
}
