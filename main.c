#include "election.h"
# include "stdio.h"


int main(){
    while(1){
        printf("\n\t\t\t   1.Student panel \n\t\t\t   2.Admin panel \n\t\t\t   3.Exit \n\t\t\t   Option:");
		int input;
        scanf("%d",&input);

        switch(input){
            case 1:
                studentPanel();
                break;
            case 2:
                adminPanel();
                break;
            case 3:
                return 0;
            default:
                printf("\nInvalid option");
                break;
        }
    }
    return 0;
}