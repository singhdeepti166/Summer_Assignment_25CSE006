 //QUESTION NO 104
  #include<stdio.h>
  int main(){
    char question[3][100]={
        "1. Capital of India?",
        "2. C language was developed by?",
        "3. How many days are there in a leap year?",
    };
    
    char option[3][4][50]={
        {"1. Mumbai","2. Delhi","3.Kolkata","4.Chennai"},
        {"1. Dennis Ritchie","2. Bjarne strous trup","3. James Gosling","4. Einstein"},
        {"1. 364","2. 365","3. 366","4. 367"}
    };
    int correct[3]={2,1,3};
    int answer,score=0,i,j;
    
     printf("===== QUIZ APPLICATION =====\n");

    for(i = 0; i < 3; i++) {
        printf("\n%s\n", question[i]);

        for(j = 0; j < 4; j++) {
            printf("%s\n", option[i][j]);
        }

        printf("Enter your answer: ");
        scanf("%d", &answer);

        if(answer == correct[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong!\n");
        }
    }

    printf("\nYour Final Score = %d/3\n", score);
      return 0;
  }



