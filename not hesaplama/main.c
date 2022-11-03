#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("WELCOME THE KOCAELI UNIVERSTY \n");
    printf("Please enter your results. \n");
    printf("___________________________________________\n");
    printf("                                           \n");
    int Math, Phy, Chem,a;

    printf("Enter your Math result:");
    scanf("%d",&Math);
    printf("Enter your Phy result:");
    scanf("%d",&Phy);
    printf("Enter your Chem result:");
    scanf("%d",&Chem);
    printf("tum notlarin toplmi : %d\n",Math+Phy+Chem);
    printf("notlarin ortalamasi : %d\n",(Math+Phy+Chem)/3);
    if(Math>=65)
        if(Phy>=55)
             if(Chem>=50)
                if((Math+Phy+Chem)>=190||(Math+Phy)>=140)
                   printf("The  candidate is eligible for admission. \n");
                else
                printf("The  candidate is not eligible for admission. \n");
             else
             printf("The  candidate is not eligible for admission. \n");
        else
        printf("The  candidate is not eligible for admission. \n");
    else
    printf("The  candidate is not eligible for admission. \n");
    printf("Please work harder ! \n");
    return 0;
}
