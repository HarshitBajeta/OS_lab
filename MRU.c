#include<stdio.h> 
 void main() {
 int i, j, k,n, f, pf=0, count=0, rs[25], m[10]; 
 printf("\n Enter the length of reference string -- "); 
 scanf("%d",&n);
 printf("\n Enter the reference string -- "); 
 for(i=0;i<n;i++) 
   scanf("%d",&rs[i]); 
 printf("\n Enter no. of frames -- "); 
 scanf("%d",&f); 
 for(i=0;i<f;i++) 
   m[i]=-1;
 printf("\n The Page Replacement Process is -- \n");
 for(i=0;i<n;i++) 
 { 
 for(k=0;k<f;k++) 
 { 
   if(m[k]==rs[i]) 
    {
        int temp=m[k];
        for(j=k;j<f-1;j++){
          m[j]=m[j+1];
        }
        m[f-1]=temp;
        break;
    }
  } 
 if(k==f) 
 { 
    if(count<f){
        m[count++]=rs[i];
    }
    else
       m[f-1]=rs[i];
  pf++; 
 } 

 for(j=0;j<f;j++)
   printf("\t%d",m[j]); 
 if(k==f) 
   printf("\tPF No. %d",pf); 
 printf("\n"); 
} 
 printf("\n The number of Page Faults using MRU are %d",pf);
}
