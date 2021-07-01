#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

string ari(string x){
 int c=0,w=0,s=0;
  for(int i=0;i<strlen(x);i++){
   if(isalnum(x[i]))
       c++;
   if(x[i]==' ')
     w++;
   if(x[i]=='.' || x[i]=='?')
    s++;
   if(x[i]=='!')
     s++;   }
    float index= 4.71*(float)c/w + 0.5*(float)w/s -21.43;
    int ARI=ceil(index);
      

    switch(ARI) { 
    case 1:return("Kindergarten");
           break;
    case 2:return("First/Second Grade");
           break;
    case 3:return("Third Grade");
           break;
    case 4:return("Fourth Grade");
           break;
    case 5:return("Fifth Grade");
           break;                            
    case 6:return("Sixth Grade");
           break;       
    case 7:return("Seventh Grade");
           break;
    case 8:return("Eighth Grade");
           break;       
    case 9:return("Ninth Grade");
           break;
    case 10:return("Tenth Grade");
           break;
    case 11:return("Eleventh Grade");
           break;
    case 12:return("Twelfth grade");
           break;
    case 13:return("College student");
           break;
    case 14:return("Professor");
           break;  
    default:return("Not in the list");                       
           }
          }
