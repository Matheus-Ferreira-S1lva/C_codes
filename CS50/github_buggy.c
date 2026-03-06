/* #include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }

}
*/

/*
// Buggy example for debug50
#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h; 
    
    printf("Height: ");
    scanf("%i", &h);
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}
*/
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50]; 

    printf("What's your name? ");
    scanf("%s", name);
    printf("hello, %s\n", name);
}
*/

/*
// Averages three (hardcoded) numbers
#include <stdio.h>

int main(void)
{
    int score[3];
    score[0] = 72;
    score[1] = 73;
    score[2] = 33;

    printf("Average: %f\n", (score[0] + score[1] + score[2]) / 3.0);

    return 0;

}
*/

/*
// Averages three numbers using an array and a loop
#include <stdio.h>

int main(void)
{

    int scores[3];
    for (int i = 0; i < 3; i++)
    {   
    printf("Score: ");
    scanf("%i", &scores[i]);
    }
o 
printf("Average: %f\n",(scores[0] + scores[1] + scores[2]) / 3.0);

}
*/

/*
#include <stdio.h>

const int N = 3;

float average(int length, int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        scanf("%i", &scores[i]);
    }

    printf("Average: %f\n", average(N, scores));
}

float average(int lenght, int array[])
{
    int sum = 0; 
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }

    return sum / (float) lenght;
}
*/

/*
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3);
}

//output: HI!

// esse de cima a mesma coisa desse debaixo, so que com peculiaridade diferentes!

//output: 72 73 33

*/
/*
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3);
}
*/
/*
// Prints string

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[6] = "HI!";
    printf("%s\n", s);
}
*/

// Treats string as array
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[6]= "HI!";
    printf("%i%i%i\n", s[0], s[1], s[2], s[3]);
}
*/

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
}
*/

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

   printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}
*/


 /*
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt for user's name
    char name[50];
    printf("Name: ");
    scanf("%s", name);

    // Count number of characters up until '\0' (aka NUL)
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}

*/


/*
#include <stdio.h>

// 1. O protótipo deve dizer que a função recebe um ARRAY de caracteres (char s[])
int char_length(char s[]);

int main(void)
{
    char name[40]; 
    
    printf("Name: ");
    // 2. No scanf puro, usamos %s para strings. 
    // O texto "name: " dentro do scanf não funciona como o get_string do CS50.
    scanf("%s", name); 

    // 3. Chamamos a função passando o array
    int length = char_length(name);
    
    printf("%i\n", length);
    
    return 0;
}

// 4. Aqui a função aceita o array completo para percorrer
int char_length(char s[])
{
    int n = 0;
    // O loop continua enquanto não achar o caractere de parada '\0'
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
    */



#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}