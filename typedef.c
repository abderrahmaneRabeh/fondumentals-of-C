#include <stdio.h>
#include <string.h>

typedef char array[10]; // define new type

typedef struct
{

    char email[25];
    char password[25];

} Login;

int main()
{

    array name = "john";
    // printf("%s", name);

    Login user1 = {"john", "12345"};
    Login user2 = {"rabeh", "password"};
    Login user3 = {"kamal", "anything"};

    // printf("EMAIL : %s \n", user1.email);
    // printf("PASSWORD : %s", user1.password);

    Login users[] = {user1, user2, user3};

    printf("\n---------------------------------------------\n");

    for (int i = 0; i < sizeof(users) / sizeof(users[0]); i++)
    {

        printf("EMAIL : %s \t | \t", users[i].email);
        printf("PASSWORD : %s", users[i].password);

        printf("\n---------------------------------------------\n");
    }

    return 0;
}