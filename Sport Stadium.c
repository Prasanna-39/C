
#include<stdio.h> 
#include<stdlib.h> 
typedef struct __event 
{ 
 int s,e; 
}
event; 
event event[100005]; 
int compare(const void *a,const void *b) 
{ 
 event *x1=(_event*)a;
 event *x2=(_event*)b; 
 if((*x1).e<(*x2).e)return -1; 
 else return 1; 
} 
int main() 
{ 
 int n,i,lastIndex,num; 
 scanf("%d",&n); 
 for(i=0;i<n;i++) 
 { 
 scanf("%d %d",&event[i].s,&event[i].e);  event[i].e=event[i].s+event[i].e-1;  } 
 qsort(event,n,sizeof(_event),&compare);  lastIndex=event[0].e; 
 num=1; 
 for(i=0;i<n;i++) 
 { 
 if(event[i].s>lastIndex+1) 
{ 
 num++; 
 lastIndex=event[i].e; 
}
 } 
 printf("%d\n",num); 
 return 0; 
} 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 

