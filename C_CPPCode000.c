/*WAP to take inputs of name, size, number of persons to serve and retail price of a pizza ordered and to display the receipt message as output?*/

#include<stdio.h>
#include<unistd.h>
int main()
{
    char name[30];
    char size;
    int personItServes;
    float retailPrice;

    printf("Enter pizza name: ");
    scanf("%[^\n]%*c", name);

    printf("Enter the size of the pizza as either 'S', 'M' or 'L': ");
    scanf("%c", &size); // or size = getchar(); - To take user input
    printf("%c", size); // or putchar(size); - To Print the character

    printf("Enter the number of persons it serves: ");
    scanf("%d", &personItServes);

    printf("Enter the retail Price: ");
    scanf("%f", &retailPrice);

    printf("\n Generating message...\n");

    usleep(1000);

    printf("Yay! You have ordered a %s pizza of size %c that serves %d. \n please"
    "pay Rs. %.1f to the delivery person.", name, size, personItServes, retailPrice);
    printf("\n\n Sending SMS.....\n");

    usleep(1000);

    printf("\n\n****SMS SENT****\n\n");
    return 0;

}