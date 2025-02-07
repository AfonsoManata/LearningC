#include <stdio.h>
#include <string.h>


struct Player
{
  char name[12];
  int score;
};


int main()
{
  // Strucs are similar to classes in other languages 
  // but they dont have methods

  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "Afonso");
  player1.score = 5;
  
  strcpy(player2.name, "Maurício");
  player2.score = 5;

  printf("%s\n", player1.name);
  printf("%s\n", player2.name);


  printf("%d\n", player1.score);
  printf("%d\n", player2.score);

  return 0;
}
