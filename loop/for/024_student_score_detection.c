#include<stdio.h>
int main(){
    int total_subjects, subject_score;
    int average_score=0;
    int fail_subject=0;
    scanf("%d",&total_subjects);
    for(int i=0;i<total_subjects;i++){
        scanf("%d",&subject_score);
        if(subject_score<40){
            fail_subject++;
        }
        average_score+=subject_score;
    }
    printf("Average Score: %d\n",(average_score/total_subjects));
    printf("Failed Subjects: %d\n",fail_subject);
    return 0;
}
