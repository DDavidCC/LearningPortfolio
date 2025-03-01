#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    //Character Array for Names
    char name[][20] = {"David", "Omen", "Jimmy", "Saint"};

    //Array for Numbers
    long long number[] = {12408896667, 15678987770, 17895509990, 14456678889};

  //create search variable
    char search_name[20];

    //Enter Input
    printf("Enter Name Here: ");
    scanf("%19s", search_name);


    //Search and compare the name

    for (int i = 0; i < 4; i++) {
        if (strcmp(search_name, name[i]) == 0) { //print found 
            printf("%s found: %lld", name[i], number[i]);
            return 0;
        }
    }

    //print not found
  
    printf("%19s Not Found", search_name);
    return 1;

}
