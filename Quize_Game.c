#include <stdio.h>
#include <ctype.h>

int main()
{

    char Quize__Questions[][100] = {
        "A) Who is creator of REACT ?\n",
        "B) LARAVEL is framework of ?\n",
        "C) Method POST is used for ?\n",
    };

    char Quize__Options[][100] = {
        "1) Facebook\n",
        "2) Google\n",
        "3) Amazon\n",
        "4) Microsoft\n",
        "1) JavaScript\n",
        "2) Python\n",
        "3) PHP\n",
        "4) C++\n",
        "1) Server\n",
        "2) Client\n",
        "3) Both\n",
        "4) None\n",
    };

    int Quize__Answers[3] = {1, 3, 1};

    int NumberOfQuestions = sizeof(Quize__Questions) / sizeof(Quize__Questions[0]);

    int guess_Answer;
    int Correct_Answers = 0;

    // logic

    printf("\n --------------------------WELCOME TO THE QUIZE GAME !! -------------------------- \n");

    for (int i = 0; i < NumberOfQuestions; i++)
    {
        printf("--------------------\n");
        printf("%s", Quize__Questions[i]);
        printf("--------------------\n");

        for (int j = (i * 4); j < ((i * 4) + 4); j++)
        {

            printf("\n\t %s ", Quize__Options[j]);
        };

        printf("\nEnter your answer : ");

        scanf("%d", &guess_Answer);

        if (guess_Answer == Quize__Answers[i])
        {
            printf("Correct Answer !! \n");
            Correct_Answers++;
        }
        else
        {
            printf("Wrong Answer !! \n");
        }
    }

    printf("--------------------\n");
    printf("Your Score : %d/%d \n", Correct_Answers, NumberOfQuestions);
    printf("--------------------\n");

    return 0;
}
