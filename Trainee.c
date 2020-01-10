#include <stdio.h>

struct Trainee 
{ 
      int empid;
      char name[20];
      int age;
      double scores[5];
};

int main()
{
      struct Trainee t[10];    
      int i,j,x,y;
      double avg=0,sum=0,avt=0;
      printf("Enter Details:-\n");
      for(i=0;i<2;i++)
      {  
        printf("EmpID:-");
        scanf("%d",&t[i].empid);
        printf("Name:-");
        scanf("%s",t[i].name);
        printf("Age:-");
        scanf("%d",&t[i].age);
        printf("Scores:-\n");
        for(j=0;j<5;j++)
        {    
          printf("%d:-",(j+1));  
          scanf("%lf",&t[i].scores[j]);
        }
        printf("\n");
      }
      printf("Enetr empid of trainee whoses total score is needed:-");
      scanf("%d",&x);
      for(i=0;i<2;i++)
      {  
        if(x==t[i].empid)
        {    
          for(j=0;j<5;j++)  
          {      
            sum=sum+t[i].scores[j];
          }  
          printf("Total Score of %s is %lf\n",t[i].name,sum);  
          break;
        }
		// else
         
			//   printf("Wrong empid\n");
      }
      printf("Enter module whose Average score is needed:-");
      scanf("%d",&y);
      for(i=0;i<2;i++)
      {
        avg=avg+t[i].scores[y];
      }
      avg=avg/2;
      printf("Average score of %d module is %lf\n",y,avg);
      for(i=0;i<2;i++)
      {  
      	for(j=0;j<5;j++)
	{    
	  avt=avt+t[i].scores[j];
	}
      }
      avt=avt/2;
      printf("Average total of all Employee is %lf",avt);
      return 0;
}
