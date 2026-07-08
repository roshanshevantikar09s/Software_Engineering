#include<stdio.h>
#include<conio.h>

int main()
{
    int music[7];
    int i, choice;
    FILE*fp;
    
    int total = 0;
    int highest = 0;
    int value;
    float average;
    	

    while(1)
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Music Minutes\n");
        printf("2. View Weekly Report\n");
        printf("3. Reset data\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            	fp = fopen("music_log.txt","w");
                for(i=0;i<7;i++)
                {
                    printf("Enter music minutes for Day %d: ",i+1);
                    scanf("%d",&music[i]);
                    fprintf(fp,"%d\n",music[i]);
                }
                
                fclose(fp);
                break;

            case 2:

                 fp = fopen("music_log.txt","r");

                    total = 0;
                    highest = 0;

                    for(i=0; i<7; i++)
                    {
                      fscanf(fp,"%d",&value);

                      total = total + value;

                      if(value > highest)
                    {
                          highest = value;
                  }
           }

    average = total / 7.0;

    printf("\n===== Weekly Report =====\n");
    printf("Total Minutes = %d\n", total);
    printf("Average Minutes = %.2f\n", average);
    printf("Highest Minutes = %d\n", highest);

    fclose(fp);
    break;

           case 3:
           {
             char ch;

              printf("Are you sure you want to reset data? (Y/N): ");
              scanf(" %c", &ch);

              if(ch=='Y' || ch=='y')
             {
                 fp = fopen("music_log.txt","w");
                 fclose(fp);

                 printf("Data Reset Successfully!\n");
             }
            else
             {
            printf("Reset Cancelled!\n");
            }   

            break;
          }
          
          case 4:
           printf("Thank You!\n");
           return 0;
        }
    }

    return 0;
} 
