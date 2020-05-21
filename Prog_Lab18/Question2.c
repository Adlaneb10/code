/*Write a structure template for each of the following
a) A playing card such as five of diamonds
b) stock record consisting of a stock number(integer), a stock description[20], and stock quantity(int)
c)a library book record consisting of ISBN [13], book title[30],author[25] and price (float)
d)a customer record with a cust number(unsigned int), a name[25], addres[45]and outstanding balance(double)
e)a transaction record with transaction type [1], date of the transaction(3 int) and amount (float)
f) time of day using the 12 hour format ie hours,minutes,seconds and either a.m. p.m.
g) the longitude and latitude co-ordinates of a geographical position consiting of degrees (int) minutes(int) and direction
N, S , E, W
h) thirty teams in a league, For each team store team name[20] and the number of wins, draws and losses
for both away games
Auhtor : Adlane Boulmelh
Date:26/03/2020 */
#include <stdio.h>
#include <string.h>
//Structure templates for each question
struct card_game
{
    char type[15];
    char colour[10];
    int card_num;
};

struct stock_record
{
    int stock_number;
    char stock_description[21];
    int quantity;
    float price;
};

struct library_record
{
    char ISBN[13];
    char title[30];
    char author[25];
    float price;
};

struct cust_record
{
    unsigned int customer_num;
    char name[25];
    char address[45];
    double outstanding_balance;
};

struct date
{
    int day;
    int month;
    int year;
};

struct transaction
{
    char type[1];
    struct date transaction;
    float amount;

};  

struct time
{
    int hours,minutes,seconds;
};

struct clock
{
    struct time format;
    char format_type[3];
};

struct geo
{
    int degrees, minutes;
};

struct location
{
    struct geo co_ordinates;
    char direction[2];
};

struct league
{
    char team_name[20];
    int wins_home;
    int draw_home;
    int loss_home;
    int wins_away, draw_away, loss_away;
};

int main()
{   
    //Call structure stock record and assign data to it following same order as template
    struct stock_record stock_item = {1234,"Chocolate chip",85,1.50};

    printf("stock id = %d\n Description --> ", stock_item.stock_number);
    puts(stock_item.stock_description);
    printf("Quantity available %d\n price is %.2f\n\n", stock_item.quantity, stock_item.price);
    
    struct date current_date = {26,3,2020};
    current_date.day++;
    printf("Date %d/%d/%d\n",current_date.day,current_date.month,current_date.year);
    return 0;
}