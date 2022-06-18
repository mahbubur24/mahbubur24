#include<stdio.h>
#include<string.h>

int CtoN(char);
int main(){
    char s1[100],s2[100];
    printf("Enter the first number :\n\t");
    scanf("%s",s1);
    printf("Enter the second number :\n\t");
    scanf("%s",s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i,c=0;
    int n1[len1];
    int n2[len2];
// for first string assign to an array
        for(i=0;i<=len1;i++){
            if(i<1)
                n1[i]=0;
            else
                n1[i]=CtoN(s1[i-1]);
        }
// for second string assign to an array
    for(i=0;i<=len2;i++){
            if(i<1)
                n2[i]=0;
            else
                n2[i]=CtoN(s2[i-1]);
        }
// calculation
    for(i=0;i<=len2;i++){
        int sum=0;
            sum =n1[len1-i]+n2[len2-i]+c;
           if(sum>9){
            n1[len1-i]=sum%10;
            c=sum/10;
           }
           else{
            n1[len1-i]=sum;
            c=0;
           }
    }
    // print the result
printf("The sum is : \n\t");
  for ( i=0;i<=len1;i++){
       if(n1[i]==0 && i<1) continue;
       printf("%d",n1[i]);
    }
return 0;
}

int CtoN(char x){
    return (((int)x)-'0');
}
