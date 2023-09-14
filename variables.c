#include <stdio.h>
#include <stdlib.h>

int main()
{

    char characterName[] = "Messi";
    int characterAge = 36;
    printf("There once was a man named %s who was %d years old\n", characterName, characterAge);
    printf("%s is the best football player in the world.\n", characterName);
    characterAge = 100; /*Testing age change mid*/
    printf("%s really loved his job.\n", characterName);
    printf("But did not like being %d.\n", characterAge);
    return 0;
}