#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    
    if(scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5)!=5){
        printf("Invalid Input");
        return 0;
    }
    if(s1<0||s1>100||
       s2<0||s2>100||
       s3<0||s3>100||
       s4<0||s4>100||
       s5<0||s5>100){
        printf("Invalid Input");
        return 0;
    }
    float per=(s1+s2+s3+s4+s5)/5.0;
    {
        if(per>=95)
        printf("%.2f%%\nGrade A",per);
        else if(per>=85)
        printf("%.2f%%\nGrade B",per);
        else if(per>=75)
        printf("%.2f%%\nGrade C",per);
        else if(per>=65)
        printf("%.2f%%\nGrade D",per);
        else if(per>=45)
        printf("%.2f%%\nGrade E",per);
        else
        printf("%.2f%%\nGrade F",per);
        
    }
}
