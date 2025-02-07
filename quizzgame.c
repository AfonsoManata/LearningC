#include <stdio.h>
#include <ctype.h>

int main()
{
  char questions[][100] = {"1. Wich country has won the most FIFA World Cups?: ",
                           "2. Who won the Ballon d'Or in 2021?: ",
                           "3. Wich club has won the most UEFA Champions League titles?: "};

  char options[][100] = {"A. Germany", "B. Brazil", "C. Argentina", "D. Italy",
                         "A. Robert Levandowski", "B. Lionel Messi", "C. Cristiano Ronaldo", "D. Karim Benzema",
                         "A. Manchester United", "B. Bayern Munich", "C. Real Madrid", "D. AC Milan",};


  char answers[3] = {'B', 'B', 'C'};

  int numberOFQuestions = sizeof(questions)/sizeof(questions[0]);

  char guess;
  int score;

  printf("Welcome to my Football Quizz Game!\n");

  for (int i = 0; i < numberOFQuestions ;i++)
  {
    printf("*****************************************\n");
    printf("%s\n", questions[i]);   
    printf("*****************************************\n");

    // Loop to show the options
    
    for ( int j = (i*4); j < (i*4) + 4 ; j++)
    {
      printf("%s\n", options[j]);   
    }
    
    printf("Write the letter of the correct answer: ");
    scanf(" %c", &guess);
    
    guess = toupper(guess); // accept lower case too
    
    if (guess == answers[i])
    {
      printf("You are right!\n");
      score++;
    }
    
    else{
      printf("Wrong answer ;(\n");
    }

  }
   
    printf("*****************************************\n");
    printf("Your Final Score: %d / %d \n", score, numberOFQuestions);
    printf("*****************************************\n");

  return 0;
}
