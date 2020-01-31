#include <stdio.h>
#include <string.h>

/*This program was written by Andrew Lawson
This program's purpose is to give the user an easy answer to the question:
"Should I eat this food that I just dropped on the floor?"
The program follows several if-statements to determine whether or not the user
should eat the food he/she dropped on the floor.*/

int main(void){

  char str1[10], str2[10], str3[10], str4[10], str5[10], str6[10];

  printf("What did you drop on the floor? (meat, produce, bread, or junk-food)\n");

  scanf("%s", str1);

  if (strcmp(str1,"meat") == 0){
    printf("What kind of meat? (chicken, beef, or other)\n");
    scanf("%s", str2);
        if(strcmp(str2,"chicken") == 0){
          printf("Was it chicken nuggets?\n");
          scanf("%s", str3);
              if(strcmp(str3,"yes") == 0){
                printf("Was it on the floor for more than 3 seconds?\n");
                scanf("%s", str4);
                  if (strcmp(str4,"yes") == 0){
                    printf("Do NOT eat what was dropped!");
                  }
                  if(strcmp(str4,"no") == 0) {
                    printf("You can eat what was dropped");
                  }
                }
              if (strcmp(str3,"no") == 0){
                printf("Is the floor clean?\n");
                scanf("%s", str4);
                if(strcmp(str4,"yes") == 0){
                  printf("Was it on the floor for more than 3 seconds?\n");
                  scanf("%s", str5);
                  if(strcmp(str5,"yes") == 0){
                    printf("Do NOT eat what was dropped!");
                  }
                  if (strcmp(str5,"no") == 0){
                    printf("You can eat what was dropped.");
                  }
                }
                if(strcmp(str4,"no") == 0){
                  printf("Do NOT eat what was dropped!");
              }
            }
          }
        if(strcmp(str2,"beef") == 0) {
          printf("Was it steak?\n");
          scanf("%s", str3);
          if(strcmp(str3,"yes") == 0){
            printf("You can eat what was dropped.");
          }
          if(strcmp(str3,"no") == 0){
            printf("Is the floor clean?\n");
            scanf("%s", str4);
            if(strcmp(str4,"yes") == 0){
              printf("Was it on the floor for more than 3 seconds?\n");
              scanf("%s", str5);
              if(strcmp(str5,"yes") == 0){
                printf("Do NOT eat what was dropped.");
              }
              if(strcmp(str5,"no") == 0){
                printf("You can eat what was dropped.");
              }
            }
            if (strcmp(str4,"no") == 0){
              printf("Do NOT eat what was dropped.");
            }
          }
        }
        if(strcmp(str2,"other") == 0){
          printf("Is it leftovers or is it fresh?\n");
          scanf("%s", str3);
          if(strcmp(str3,"leftovers") == 0){
            printf("Was it on the floor for more than 3 seconds?\n");
            scanf("%s", str4);
            if(strcmp(str4,"yes") == 0){
              printf("Do NOT eat what was dropped.");
            }
            if(strcmp(str4,"no") == 0){
              printf("You can eat what was dropped.");
            }
          }
            if(strcmp(str3,"fresh") == 0){
              printf("Can you brush it off?\n");
              scanf("%s", str4);
              if(strcmp(str4,"yes") == 0){
                printf("You can eat what was dropped.");
              }
              if(strcmp(str4,"no") == 0){
                printf("Do NOT eat what was dropped.");
              }
            }
          }
        }


        if(strcmp(str1,"produce") == 0){
          printf("Did it grow in the ground?\n");
          scanf("%s", str2);
          if(strcmp(str2,"yes") == 0){
            printf("Was it on the floor for more than 3 seconds?\n");
            scanf("%s", str3);
            if(strcmp(str3,"yes") == 0){
              printf("Do NOT eat what was dropped.");
            }
            if (strcmp(str3,"no") == 0){
              printf("You can eat what was dropped.");
            }
          }
          if(strcmp(str2,"no") == 0){
            printf("Was it smashed or bruised?\n");
            scanf("%s",str3);
            if(strcmp(str3,"yes") == 0){
              printf("Do NOT eat what was dropped.");
            }
            if(strcmp(str3,"no") == 0){
              printf("Is the floor clean?\n");
              scanf("%s", str4);
              if(strcmp(str4,"yes") == 0){
                printf("You can eat what was dropped.");
              }
              if(strcmp(str4,"no") == 0){
                printf("Was it on the floor for more than 3 seconds?\n");
                scanf("%s", str5);
                if(strcmp(str5,"yes") == 0){
                  printf("Do NOT eat what was dropped.");
                }
                if (strcmp(str5,"no") == 0){
                  printf("You can eat what was dropped.");
                }
              }
            }
          }
        }


        if(strcmp(str1,"bread") == 0){
          printf("Was it buttered bread?\n");
          scanf("%s", str2);
          if(strcmp(str2,"yes") == 0){
            printf("Did it land butter side up?\n");
            scanf("%s", str3);
            if(strcmp(str3,"no") == 0){
              printf("Do NOT eat what was dropped.");
            }
            if(strcmp(str3,"yes") == 0){
              printf("Is the floor clean?\n");
              scanf("%s", str4);
              if(strcmp(str4,"no") == 0){
                printf("Do NOT eat what was dropped.");
              }
              if(strcmp(str4,"yes") == 0){
                printf("You can eat what was dropped.");
              }
            }
          }
          if(strcmp(str2,"no") == 0){
            printf("Is the floor clean?\n");
            scanf("%s", str3);
            if(strcmp(str3,"yes") == 0){
              printf("You can eat what was dropped.");
            }
            if (strcmp(str3, "no") == 0){
              printf("Do NOT eat what was dropped.");
            }
          }
        }
        if(strcmp(str1,"junk-food") == 0){
          printf("What kind of junk-food?\n");
          scanf("%s", str2);
          if(strcmp(str2,"candy") == 0){
            printf("Is the floor clean?\n");
            scanf("%s", str3);
            if(strcmp(str3,"yes") == 0){
              printf("You can eat what was dropped.\n");
            }
            if(strcmp(str3,"no") == 0){
              printf("Do NOT eat what was dropped.");
            }
          }
          if(strcmp(str2,"donuts") == 0){
            printf("Did it have sprinkles?\n");
            scanf("%s", str3);
            if(strcmp(str3,"no") == 0){
              printf("Was it on the floor for more than 3 seconds?\n");
              scanf("%s", str4);
              if(strcmp(str4,"no") == 0){
                printf("You can eat what was dropped.");
              }
              if(strcmp(str4,"yes") == 0){
                printf("Do NOT eat what was dropped.");
              }
            }
              if(strcmp(str3,"yes") == 0){
                printf("Is the floor clean?\n");
                scanf("%s", str4);
                if(strcmp(str4,"yes") == 0){
                  printf("You can eat what was dropped.");
                }
                if(strcmp(str4,"no") == 0){
                  printf("Can you brush it off?\n");
                  scanf("%s",str5);
                  if(strcmp(str5,"yes") == 0){
                    printf("Was it on the floor for more than 3 seconds?\n");
                    scanf("%s", str6);
                    if(strcmp(str6,"yes") == 0){
                      printf("Do NOT eat what was dropped.");
                    }
                    if(strcmp(str6,"no") == 0){
                      printf("You can eat what was dropped.");
                    }
                  }
                  if(strcmp(str5,"no") == 0){
                    printf("Do NOT eat what was dropped.");
                  }
                }
              }
            }
            if(strcmp(str2,"chips") == 0){
              printf("Can you brush it off?\n");
              scanf("%s", str3);
              if(strcmp(str3,"yes") == 0){
                printf("Was it on the floor for more than 3 seconds?\n");
                scanf("%s", str4);
                if(strcmp(str4,"yes") == 0){
                  printf("Do NOT eat what was dropped.");
                }
                if(strcmp(str4,"no") == 0){
                  printf("You can eat what was dropped.");
                }
              }
              if(strcmp(str3,"no") == 0){
                printf("Do NOT eat what was dropped.");
              }
            }
          }


  return 0;
}
