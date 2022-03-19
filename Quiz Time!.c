#include <stdio.h>
#include <stdlib.h>

int main() {
    char ans1[10];
    char ans2[10];
    char ans3[10];
    int ans4;
    int ans5;
    int points = 0;

    printf("Quiz Time!\n");
    
    printf("What blood type is a universal doner?\n");
    scanf("%s", ans1);
    if(strcmp(ans1, "O-") == 0 || strcmp(ans1, "o-") == 0){
        printf("You are correct!\n");
        points++;
    } else{
        printf("You are wrong!\n");
        printf("The correct answer is O-\n");
        points == points;
    }
    
    printf("What is the national bird of India?\n");
    scanf("%s", ans2);
    if(strcmp(ans2, "Peacock") == 0 || strcmp(ans2, "peacock") == 0){
        printf("You are correct!\n");
        points++;
    } else{
        printf("You are wrong!\n");
        printf("The correct answer is Peacock\n");
        points == points;
    }
    
    printf("What is Jupiter's most recognised moon's name?\n");
    scanf("%s", ans3);
    if(strcmp(ans3, "Titan") == 0 || strcmp(ans3, "titan") == 0){
        printf("You are correct!\n");
        points++;
    } else{
        printf("You are wrong!\n");
        printf("The correct answer is Titan\n");
        points == points;
    }
    
    printf("How many moons does Jupiter have?\n");
    scanf("%d", &ans4);
    if(ans4 == 72){
        printf("You are correct!\n");
        points++;
    } else{
        printf("You are wrong!\n");
        printf("The correct answer is 72\n");
        points == points;
    }
    
    printf("How many hours are there in a year?\n");
    scanf("%d", &ans5);
    if(ans5 == 8760){
        printf("You are correct!\n");
        points++;
    } else{
        printf("You are wrong!\n");
        printf("The correct answer is 8760\n");
        points == points;
    }
    
    printf("You scored %d points out of 5!\n", points);
    
   if(points == 5){
       printf("You did great!");
   }else if(points == 4){
       printf("You did well!");
   }else if(points == 3){
       printf("You did ok...");
   }else if(points == 2){
       printf("You need to Putin more work!");
   }else if(points == 1){
       printf("You did bad!");
   }else if(points == 0){
       printf("You failed!");
   }
   
    return 0;
}