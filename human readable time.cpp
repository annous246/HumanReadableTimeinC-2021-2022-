#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int lg(int n){
  int k=0;
  while(n){k++;
          n/=10;}
  return k;
}
int m(int t[]){
  int m=0;
  for(int i=0;i<5;i++){
    if(t[i]>m)
      m=t[i];
  }
  return m;
}
int nn(int t[]){
  int m=0;
  for(int i=0;i<5;i++){
    if(t[i]!=0)
      m++;
  }
  return m;
}
void aff(int t[]){
	for(int i=0;i<5;i++){
		printf("%d",t[i]);
	}
}
void init(int t[]){
	for(int i=0;i<5;i++){
		t[i]=0;
	}
}

int main(){
do{

puts("Provide time in seconds\n");int n;scanf("%d",&n);
  int scnds,min,hours,days,years;years=n/31536000;n%=31536000;days=n/86400;n%=86400;hours=n/3600;n%=3600;min=n/60;n%=60;scnds=n;
  int t[5];
  t[0]=lg(years);
  t[1]=lg(days);
  t[2]=lg(hours);
  t[3]=lg(min);
  t[4]=lg(scnds);
  int mx=m(t),s=nn(t);
  char *c=(char*)malloc(sizeof(char)*(mx*5+52));
  c[0]='\0';
  if(s==0){sprintf(c,"now");}
  if(s>2){
  	 for(int i=0;i<5;i++){if(s>2){
      if(t[i]){
        switch(i+1){
            case(1):if(years==1){sprintf(c +strlen(c),"1 year, ");}else{sprintf(c+strlen(c),"%d years, ",years);};break;
            case(2):if(days==1){sprintf(c+strlen(c),"1 day, ");}else{sprintf(c+strlen(c),"%d days, ",days);};break;
            case(3):if(hours==1){sprintf(c+strlen(c),"1 hour, ");}else{sprintf(c+strlen(c),"%d hours, ",hours);};break;
            case(4):if(min==1){sprintf(c+strlen(c),"1 minute, ");}else{sprintf(c+strlen(c),"%d minutes, ",min);};break;
        }s--;
      }
    }
    else if(s==2){
      if(t[i]){
        switch(i+1){
            case(2):if(days==1){sprintf(c+strlen(c),"1 day and ");}else{sprintf(c+strlen(c),"%d days and ",days);};break;
            case(3):if(hours==1){sprintf(c+strlen(c),"1 hour and ");}else{sprintf(c+strlen(c),"%d hours and ",hours);};break;
            case(4):if(min==1){sprintf(c+strlen(c),"1 minute and ");}else{sprintf(c+strlen(c),"%d minutes and ",min);};break;
        }s--;
      }
    	
	}
	else{
      if(t[i]){
        switch(i+1){
            case(2):if(days==1){sprintf(c+strlen(c),"1 day");}else{sprintf(c+strlen(c),"%d days",days);};break;
            case(3):if(hours==1){sprintf(c+strlen(c),"1 hour");}else{sprintf(c+strlen(c),"%d hours",hours);};break;
            case(4):if(min==1){sprintf(c+strlen(c),"1 minute");}else{sprintf(c+strlen(c),"%d minutes",min);};break;
            case(5):if(scnds==1){sprintf(c+strlen(c),"1 second");}else{sprintf(c+strlen(c),"%d seconds",scnds);};break;
        }s--;
      }
	}
	  }
    
  }
  else if(s==2){int j=0;    for(int i=0;i<5;i++){
      if(t[i]&&j==0){
        switch(i+1){
            case(1):if(years==1){sprintf(c,"1 year and ");}else{sprintf(c,"%d years and ",years);};break;
            case(2):if(days==1){sprintf(c,"1 day and ");}else{sprintf(c,"%d days and ",days);};break;
            case(3):if(hours==1){sprintf(c,"1 hour and ");}else{sprintf(c,"%d hours and ",hours);};break;
            case(4):if(min==1){sprintf(c,"1 minute and ");}else{sprintf(c,"%d minutes and ",min);};break;
        }
  j++;
      }
    else if(t[i]){
      switch(i+1){
            case(2):if(days==1){sprintf(c+strlen(c),"1 day");}else{sprintf(c+strlen(c),"%d days",days);};break;
            case(3):if(hours==1){sprintf(c+strlen(c),"1 hour");}else{sprintf(c+strlen(c),"%d hours",hours);};break;
            case(4):if(min==1){sprintf(c+strlen(c),"1 minute");}else{sprintf(c+strlen(c),"%d minutes",min);};break;
            case(5):if(scnds==1){sprintf(c+strlen(c),"1 second");}else{sprintf(c+strlen(c),"%d seconds",scnds);};break;
        }}
    }
  }
  else{for(int i=0;i<5;i++){
  	if(t[i]){
      switch(i+1){
            case(1):if(years==1){sprintf(c+strlen(c),"1 year");}else{sprintf(c+strlen(c),"%d years",years);};break;
            case(2):if(days==1){sprintf(c+strlen(c),"1 day");}else{sprintf(c+strlen(c),"%d days",days);};break;
            case(3):if(hours==1){sprintf(c+strlen(c),"1 hour");}else{sprintf(c+strlen(c),"%d hours",hours);};break;
            case(4):if(min==1){sprintf(c+strlen(c),"1 minute");}else{sprintf(c+strlen(c),"%d minutes",min);};break;
            case(5):if(scnds==1){sprintf(c+strlen(c),"1 second");}else{sprintf(c+strlen(c),"%d seconds",scnds);};break;
        }}
	  }
  
    }
  puts(c);
Sleep(1000);
puts("Exit? yes(1) no(0)\n");scanf("%d",&n);
if(n==1)break;
}while(1);
puts("Bye <3");
  
}
