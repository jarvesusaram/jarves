#include<unistd.h>
#include<conio.h>
#include<iostream>

int main()
{

    int a,m,s,h;
    start1:
  std::cout<<"enter the number which is multilple of 10 and below 50 to start1 stopwatch or press any key\n";
  std::cin>>a;
  switch (a)
  {
  case 10:
  
    for(h=0;h<23;h++)
    {
         for(m=0;m<59;m++)
         {
              for(s=0;s<59;s++)
              {
                   std::cout<<h<<":"<<m<<":"<<s;
                     sleep(1);
                     system("cls");
                     if(s==5)
                     {
                         goto start1;
                     }
              }
         }
    
    }
      break;
case 20:

    for(h=0;h<23;h++)
    {
         for(m=0;m<59;m++)
         {
              for(s=0;s<59;s++)
              {
                   std::cout<<h<<":"<<m<<":"<<s;
                     sleep(1);
                     system("cls");
                     if(s==20)
                     {
                      goto start1;
                     }
              }
         }
    
    }
break;
case 30:

    for(h=0;h<23;h++)
    {
         for(m=0;m<59;m++)
         {
              for(s=0;s<59;s++)
              {
                   std::cout<<h<<":"<<m<<":"<<s;
                     sleep(1);
                     system("cls");
                     if(s==30)
                     {
                         goto start1;
                     }
              }
         }
    
    }
  
  default:
    
    for(h=0;h<23;h++)
    {
         for(m=0;m<59;m++)
         {
              for(s=0;s<59;s++)
              {
                   std::cout<<h<<":"<<m<<":"<<s;
                     sleep(1);
                     system("cls");
                     
              }
         }
    
    }
  }
     return(0);
  }

 


