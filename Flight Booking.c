#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
char a[50],b[20],c[20],d[20],e[20],f[20],g[20],h[20],j[20],x[200],user[6],pas[6];
unsigned long first,counter,business,premium,economy,search,choice,promo,high,record,status,FAQ,pin,age,i,k,m,n,o,p,q,z;
time_t t;
char flight ='y';
void SetColor(int ForgC);
int main(){
    n = 4;
    q=1;
    srand((unsigned) time(&t));

    while ( strcmp( user, "guman")){
    while (pin != 1234) {
        SetColor(2);
        printf ("\tThis Program is made by Gumansingh Rajput.\n");
        SetColor(9);
        printf("\n\n\t\tENTER USER NAME: ");
		scanf("%s",&user);
		counter++;
		if( strcmp( user, "guman") == 0 ){
        printf("\t\tENTER PIN NUMBER: ");
		scanf("%li", &pin);
		SetColor(14);
		if (counter<=1){
		printf("\n\t\tYou have entered User Name & Pin Number in %li attempt!\n",counter);
		}else{
		printf("\n\t\tYou have entered User Name & Pin Number in %li attempts!\n",counter);
		}
    }else{
        SetColor(4);
		printf("\n\t\tPlease Enter Correct User Name!\n");
		if (counter>=3){
        SetColor(14);
        printf("\n\t\tYou have entered %li times Incorrect User Name! If you enter one more, it will be permanently locked.\n",counter);
        SetColor(6);
		printf("\n\t\tHint: What we call illusion in Urdu?\n");
        }else{
        printf("\n\t\t");
        }
        if (pin != 1234) {
        }else{
        printf ("\n\t\tPlease Enter Correct Pin Number\n");
        }
    }
        }
    }
do
	{
    SetColor(11);
    printf("=======================================================================================================================\n\n\n");
    printf("==========================================KARACHI AIRLINE RESERVATION MENU=============================================\n\n\n");
	printf("\t\t * * * * * * * * * * * * * * * * * * * * * * \n");
	printf("\t\t * Press \"1\" -\tFlight Booking             * \n");
	printf("\t\t * Press \"2\" -\tCheck Ticket Prices        * \n");
	printf("\t\t * Press \"3\" -\tEnter Promo Code           * \n");
	printf("\t\t * Press \"4\" -\tPassengers Record          * \n");
	printf("\t\t * Press \"5\" -\tSearch Passenger           * \n");
	printf("\t\t * Press \"6\" -\tCheck Class Prices         * \n");
	printf("\t\t * Press \"7\" -\tList of available Flights  * \n");
	printf("\t\t * Press \"8\" -\tFlight Status              * \n");
	printf("\t\t * Press \"9\" -\tAbout                      * \n");
	printf("\t\t * Press \"10\" -\tFAQs                       * \n");
	printf("\t\t * Press \"11\" -\tExit                       * \n");
    printf("\t\t * * * * * * * * * * * * * * * * * * * * * * \n");
    SetColor(6);
	printf("\n\t\tEnter your choice> ");
	scanf("%li", &choice);
	printf("\n");
switch (choice)
		{
case 1:
    SetColor(11);
    printf("=======================================================================================================================\n\n\n");
    printf("====================================================CHOOSE CLASS=======================================================\n\n\n");
	printf("\t\t* * * * * * * * * * * * * * * * *\n");
	printf("\t\t* Press \"1\" -\tFirst Class     *\n");
	printf("\t\t* Press \"2\" -\tBusiness Class  *\n");
	printf("\t\t* Press \"3\" -\tPremium Class   *\n");
	printf("\t\t* Press \"4\" -\tEconomy Class   *\n");
	printf("\t\t* Press \"5\" -\tExit            *\n");
    printf("\t\t* * * * * * * * * * * * * * * * *\n");
    SetColor(6);
	printf("\n\t\tEnter your choice> ");
	scanf("\t\t%li", &high);
	printf("\n");

  switch (high) {
case 1:
        SetColor(11);
        printf("\t\t * * * * * * * * * * * * * *\n");
	    printf("\t\t * Press \"1\" -\tTicket     *\n");
	    printf("\t\t * Press \"2\" -\tPromo Code *\n");
	    printf("\t\t * Press \"3\" -\tExit       *\n");
        printf("\t\t * * * * * * * * * * * * * *\n");
        SetColor(6);
        printf ("\n\t\tEnter Your choice> ");
        scanf ("%li",&promo);
    switch (promo){
case 1:
        SetColor(6);
        printf ("\n\t\tEnter Ticket Price> ");
        scanf ("%li",&p);
    if (p<5000){
        SetColor(4);
        printf ("\n\t\tPlease enter full amount!\n");
        printf ("\t\tYou have entered Rs %li, amount of Ticket is Rs 5000.\n",p);
    }else if (p>5000){
        printf ("\t\tYou have entered more than 5000!\n");
    }else{
        SetColor(3);
        printf ("\n\t\tCongratulations! You have successfully avail First Class Ticket.\n" "\t\tEnter further details to get Ticket.\n");
        printf ("Name:\n");
        scanf  ("%s",&a);
        printf ("Surname:\n");
        scanf  ("%s",&b);
        printf ("Gender:\n");
        scanf  ("%s",&c);
        printf ("Date of Birth:\n");
        scanf  ("%s",&d);
        printf ("From:\n");
        scanf  ("%s",&e);
        printf ("To:\n");
        scanf  ("%s",&f);
        printf ("Depart Date:\n");
        scanf  ("%s",&g);
        printf ("Return Date:\n");
        scanf  ("%s",&h);
        printf ("Passport No:\n");
        scanf  ("%li",&i);
        printf ("Nationality:\n");
        scanf  ("%s",&j);
        SetColor(14);
        printf ("\nYour Ticket is Ready.\n\nName:\t\t\t%s\nSurname:\t\t%s\nGender:\t\t\t%s\nDate of Birth:\t\t%s\nFrom:\t\t\t%s\nTo:\t\t\t%s\nDepart Date:\t\t%s\nReturn Date:\t\t%s\nPassport No:\t\t%li\nNationality:\t\t%s\n",a,b,c,d,e,f,g,h,i,j);
        printf ("Duration Time:          One Week\n");
        printf ("Departure Time:         10:00 am\n");
        printf ("Arrival Time:           07:00 pm\n");
        printf ("Seat Number:            2143\n");
        printf ("Flight Number:          PK-584\n");
        printf ("Passport Type:          P\n");
        printf ("Passport Expiry Date:   15-06-2024\n");
    }
    break;
case 2:
        SetColor(7);
        printf ("\n\t\tEnter a Promo Code if you have or go to Promo Code and generate a Promo, make sure\n\t\tyou have used our services more than 5 times.\n");
        SetColor(13);
        printf ("\n\t\tEnter 4 digit Promo Code> ");
        scanf ("%li",&z);
 if (z>=2000 && z<=3000){
    SetColor(12);
    printf ("\n\t\tYour Promo Code is Successfully registered, now you can get Rs 1000 Discount on First Class Ticket.\n");
    printf ("\n\t\tEnter Ticket Price> ");
    scanf ("%li",&p);
    if (p<4000){
        SetColor(4);
        printf ("\n\t\tPlease enter full amount!\n");
        printf ("\t\tYou have entered Rs %li, amount of Ticket is Rs 4000.\n",p);
    }else if (p>4000){
    printf ("\t\tYou have entered more than 4000!\n");
    }else{
        SetColor(3);
        printf ("\n\t\tCongratulations! You have successfully avail First Class Ticket.\n" "\t\tEnter further details to get Ticket.\n");
        printf ("Name:\n");
        scanf  ("%s",&a);
        printf ("Surname:\n");
        scanf  ("%s",&b);
        printf ("Gender:\n");
        scanf  ("%s",&c);
        printf ("Date of Birth:\n");
        scanf  ("%s",&d);
        printf ("From:\n");
        scanf  ("%s",&e);
        printf ("To:\n");
        scanf  ("%s",&f);
        printf ("Depart Date:\n");
        scanf  ("%s",&g);
        printf ("Return Date:\n");
        scanf  ("%s",&h);
        printf ("Passport No:\n");
        scanf  ("%li",&i);
        printf ("Nationality:\n");
        scanf  ("%s",&j);
        SetColor(14);
        printf ("\nYour Ticket is Ready.\n\nName:\t\t\t%s\nSurname:\t\t%s\nGender:\t\t\t%s\nDate of Birth:\t\t%s\nFrom:\t\t\t%s\nTo:\t\t\t%s\nDepart Date:\t\t%s\nReturn Date:\t\t%s\nPassport No:\t\t%li\nNationality:\t\t%s\n",a,b,c,d,e,f,g,h,i,j);
        printf ("Duration Time:          One Week\n");
        printf ("Departure Time:         10:00 am\n");
        printf ("Arrival Time:           07:00 pm\n");
        printf ("Seat Number:            2143\n");
        printf ("Flight Number:          PK-584\n");
        printf ("Passport Type:          P\n");
        printf ("Passport Expiry Date:   15-06-2024\n");
    }
    }else{
        SetColor(4);
       printf ("\n\t\tYou have entered an Incorrect Promo Code!\n");
}
  break;
case 3:
    exit(0);
    break;
default:
    SetColor(4);
    printf ("\n\t\tInvalid Choice!\n");
     break;
    }

   break;
case 2:
        SetColor(11);
        printf("\t\t * * * * * * * * * * * * * *\n");
	    printf("\t\t * Press \"1\" -\tTicket     *\n");
	    printf("\t\t * Press \"2\" -\tPromo Code *\n");
	    printf("\t\t * Press \"3\" -\tExit       *\n");
        printf("\t\t * * * * * * * * * * * * * *\n");
        SetColor(6);
        printf ("\n\t\tEnter Your choice> ");
        scanf ("%li",&promo);
    switch (promo){
case 1:
        SetColor(6);
        printf ("\n\t\tEnter Ticket Price> ");
        scanf ("%li",&p);
    if (p<4000){
        SetColor(4);
        printf ("\n\t\tPlease enter full amount!\n");
        printf ("\t\tYou have entered Rs %li, amount of Ticket is Rs 4000.\n",p);
    }else if (p>4000){
        printf ("\t\tYou have entered more than 4000!\n");
    }else{
        SetColor(3);
        printf ("\n\t\tCongratulations! You have successfully avail Business Class Ticket.\n" "\t\tEnter further details to get Ticket.\n");
        printf ("Name:\n");
        scanf  ("%s",&a);
        printf ("Surname:\n");
        scanf  ("%s",&b);
        printf ("Gender:\n");
        scanf  ("%s",&c);
        printf ("Date of Birth:\n");
        scanf  ("%s",&d);
        printf ("From:\n");
        scanf  ("%s",&e);
        printf ("To:\n");
        scanf  ("%s",&f);
        printf ("Depart Date:\n");
        scanf  ("%s",&g);
        printf ("Return Date:\n");
        scanf  ("%s",&h);
        printf ("Passport No:\n");
        scanf  ("%li",&i);
        printf ("Nationality:\n");
        scanf  ("%s",&j);
        SetColor(14);
        printf ("\nYour Ticket is Ready.\n\nName:\t\t\t%s\nSurname:\t\t%s\nGender:\t\t\t%s\nDate of Birth:\t\t%s\nFrom:\t\t\t%s\nTo:\t\t\t%s\nDepart Date:\t\t%s\nReturn Date:\t\t%s\nPassport No:\t\t%li\nNationality:\t\t%s\n",a,b,c,d,e,f,g,h,i,j);
        printf ("Duration Time:          5 days\n");
        printf ("Departure Time:         09:45 pm\n");
        printf ("Arrival Time:           07:15 am\n");
        printf ("Seat Number:            4543\n");
        printf ("Flight Number:          PK-235\n");
        printf ("Passport Type:          P\n");
        printf ("Passport Expiry Date:   01-11-2019\n");
    }
    break;
case 2:
        SetColor(7);
        printf ("\n\t\tEnter a Promo Code if you have or go to Promo Code and generate a Promo, make sure\n\t\tyou have used our services more than 5 times.\n");
        SetColor(13);
        printf ("\n\t\tEnter 4 digit Promo Code> ");
        scanf ("%li",&z);
 if (z>=2000 && z<=3000){
        SetColor(12);
        printf ("\n\t\tYour Promo Code is Successfully registered, now you can get Rs 1000 Discount on Business Class Ticket.\n");
        SetColor(13);
        printf ("\n\t\tEnter Ticket Price> ");
        scanf ("%li",&p);
    if (p<3000){
        SetColor(4);
        printf ("\n\t\tPlease enter full amount!\n");
        printf ("\t\tYou have entered Rs %li, amount of Ticket is Rs 3000.\n",p);
    }else if (p>3000){
    printf ("\t\tYou have entered more than 3000!\n");
    }else{
        SetColor(3);
        printf ("\n\t\tCongratulations! You have successfully avail First Class Ticket.\n" "\t\tEnter further details to get Ticket.\n");
        printf ("Name:\n");
        scanf  ("%s",&a);
        printf ("Surname:\n");
        scanf  ("%s",&b);
        printf ("Gender:\n");
        scanf  ("%s",&c);
        printf ("Date of Birth:\n");
        scanf  ("%s",&d);
        printf ("From:\n");
        scanf  ("%s",&e);
        printf ("To:\n");
        scanf  ("%s",&f);
        printf ("Depart Date:\n");
        scanf  ("%s",&g);
        printf ("Return Date:\n");
        scanf  ("%s",&h);
        printf ("Passport No:\n");
        scanf  ("%li",&i);
        printf ("Nationality:\n");
        scanf  ("%s",&j);
        SetColor(14);
        printf ("\nYour Ticket is Ready.\n\nName:\t\t\t%s\nSurname:\t\t%s\nGender:\t\t\t%s\nDate of Birth:\t\t%s\nFrom:\t\t\t%s\nTo:\t\t\t%s\nDepart Date:\t\t%s\nReturn Date:\t\t%s\nPassport No:\t\t%li\nNationality:\t\t%s\n",a,b,c,d,e,f,g,h,i,j);
        printf ("Duration Time:          3 days\n");
        printf ("Departure Time:         09:40 pm\n");
        printf ("Arrival Time:           07:15 am\n");
        printf ("Seat Number:            4543\n");
        printf ("Flight Number:          PK-235\n");
        printf ("Passport Type:          P\n");
        printf ("Passport Expiry Date:   01-11-2019\n");
    }
    }else{
       SetColor(4);
       printf ("\n\t\tYou have entered an Incorrect Promo Code!\n");
}
  break;
case 3:
    exit(0);
    break;
default:
    SetColor(4);
    printf ("\n\t\tInvalid Choice!\n");
     break;
    }
   break;
case 3:
        SetColor(11);
        printf("\t\t * * * * * * * * * * * * * *\n");
	    printf("\t\t * Press \"1\" -\tTicket     *\n");
	    printf("\t\t * Press \"2\" -\tPromo Code *\n");
	    printf("\t\t * Press \"3\" -\tExit       *\n");
        printf("\t\t * * * * * * * * * * * * * *\n");
        SetColor(6);
        printf ("\n\t\tEnter Your choice> ");
        scanf ("%li",&promo);
    switch (promo){
case 1:
        SetColor(6);
        printf ("\n\t\tEnter Ticket Price> ");
        scanf ("%li",&p);
    if (p<3000){
        SetColor(4);
        printf ("\n\t\tPlease enter full amount!\n");
        printf ("\t\tYou have entered Rs %li, amount of Ticket is Rs 3000.\n",p);
    }else if (p>3000){
        printf ("\t\tYou have entered more than 3000!\n");
    }else{
        SetColor(3);
        printf ("\n\t\tCongratulations! You have successfully avail Premium Class Ticket.\n" "\t\tEnter further details to get Ticket.\n");
        printf ("Name:\n");
        scanf  ("%s",&a);
        printf ("Surname:\n");
        scanf  ("%s",&b);
        printf ("Gender:\n");
        scanf  ("%s",&c);
        printf ("Date of Birth:\n");
        scanf  ("%s",&d);
        printf ("From:\n");
        scanf  ("%s",&e);
        printf ("To:\n");
        scanf  ("%s",&f);
        printf ("Depart Date:\n");
        scanf  ("%s",&g);
        printf ("Return Date:\n");
        scanf  ("%s",&h);
        printf ("Passport No:\n");
        scanf  ("%li",&i);
        printf ("Nationality:\n");
        scanf  ("%s",&j);
        SetColor(14);
        printf ("\nYour Ticket is Ready.\n\nName:\t\t\t%s\nSurname:\t\t%s\nGender:\t\t\t%s\nDate of Birth:\t\t%s\nFrom:\t\t\t%s\nTo:\t\t\t%s\nDepart Date:\t\t%s\nReturn Date:\t\t%s\nPassport No:\t\t%li\nNationality:\t\t%s\n",a,b,c,d,e,f,g,h,i,j);
        printf ("Duration Time:          3 Weeks\n");
        printf ("Departure Time:         11:35 pm\n");
        printf ("Arrival Time:           05:00 am\n");
        printf ("Seat Number:            4623\n");
        printf ("Flight Number:          QT-787\n");
        printf ("Passport Type:          P\n");
        printf ("Passport Expiry Date:   22-01-2022\n");
    }
    break;
case 2:
        SetColor(7);
        printf ("\n\t\tEnter a Promo Code if you have or go to Promo Code and generate a Promo, make sure\n\t\tyou have used our services more than 5 times.\n");
        SetColor(13);
        printf ("\n\t\tEnter 4 digit Promo Code> ");
        scanf ("%li",&z);
    if (z>=2000 && z<=3000){
        SetColor(12);
        printf ("\n\t\tYour Promo Code is Successfully registered, now you can get Rs 1000 Discount on Premium Class Ticket.\n");
        SetColor(6);
        printf ("\n\t\tEnter Ticket Price> ");
        scanf ("%li",&p);
    if (p<2000){
        SetColor(4);
        printf ("\n\t\tPlease enter full amount!\n");
        printf ("\t\tYou have entered Rs %li, amount of Ticket is Rs 2000.\n",p);
    }else if (p>2000){
    printf ("\t\tYou have entered more than 2000!\n");
    }else{
        SetColor(3);
        printf ("\n\t\tCongratulations! You have successfully avail Premium Class Ticket.\n" "\t\tEnter further details to get Ticket.\n");
        printf ("Name:\n");
        scanf  ("%s",&a);
        printf ("Surname:\n");
        scanf  ("%s",&b);
        printf ("Gender:\n");
        scanf  ("%s",&c);
        printf ("Date of Birth:\n");
        scanf  ("%s",&d);
        printf ("From:\n");
        scanf  ("%s",&e);
        printf ("To:\n");
        scanf  ("%s",&f);
        printf ("Depart Date:\n");
        scanf  ("%s",&g);
        printf ("Return Date:\n");
        scanf  ("%s",&h);
        printf ("Passport No:\n");
        scanf  ("%li",&i);
        printf ("Nationality:\n");
        scanf  ("%s",&j);
        SetColor (14);
        printf ("\nYour Ticket is Ready.\n\nName:\t\t\t%s\nSurname:\t\t%s\nGender:\t\t\t%s\nDate of Birth:\t\t%s\nFrom:\t\t\t%s\nTo:\t\t\t%s\nDepart Date:\t\t%s\nReturn Date:\t\t%s\nPassport No:\t\t%li\nNationality:\t\t%s\n",a,b,c,d,e,f,g,h,i,j);
        printf ("Duration Time:          3 Weeks\n");
        printf ("Departure Time:         11:35 pm\n");
        printf ("Arrival Time:           05:00 am\n");
        printf ("Seat Number:            4623\n");
        printf ("Flight Number:          QT-787\n");
        printf ("Passport Type:          P\n");
        printf ("Passport Expiry Date:   22-01-2022\n");

    }
    }else{
       SetColor(4);
       printf ("\n\t\tYou have entered an Incorrect Promo Code!\n");
}
  break;
case 3:
    exit(0);
    break;
default:
    SetColor(4);
    printf ("\n\t\tInvalid Choice!\n");
     break;
    }

   break;
case 4:
    SetColor(14);
    printf ("\n\t\tThere is no Discount on Economy Class Ticket.\n");
    SetColor(6);
    printf ("\t\tEnter Ticket Price.\n");
    scanf ("%li",&p);
  if (p<2000){
    SetColor(4);
    printf ("\t\tPlease Enter full amount!\n");
    printf ("\t\tYou have entered Rs %li," " ticket price is Rs 2000.\n",p);
  }else if (p>2000){
    printf ("\t\tYou have entered more than 2000!");
  }else{
        SetColor(3);
        printf ("\t\tCongratulations You have successfully avail Economy Class ticket.\n" "\t\tEnter further details to get ticket.\n");
        printf ("Name:\n");
        scanf  ("%s",&a);
        printf ("Surname:\n");
        scanf  ("%s",&b);
        printf ("Gender:\n");
        scanf  ("%s",&c);
        printf ("Date of Birth:\n");
        scanf  ("%s",&d);
        printf ("From:\n");
        scanf  ("%s",&e);
        printf ("To:\n");
        scanf  ("%s",&f);
        printf ("Depart Date:\n");
        scanf  ("%s",&g);
        printf ("Return Date:\n");
        scanf  ("%s",&h);
        printf ("Passport No:\n");
        scanf  ("%li",&i);
        printf ("Nationality:\n");
        scanf  ("%s",&j);
        SetColor(14);
        printf ("\nYour Ticket is Ready.\n\nName:\t\t\t%s\nSurname:\t\t%s\nGender:\t\t\t%s\nDate of Birth:\t\t%s\nFrom:\t\t\t%s\nTo:\t\t\t%s\nDepart Date:\t\t%s\nReturn Date:\t\t%s\nPassport No:\t\t%li\nNationality:\t\t%s\n",a,b,c,d,e,f,g,h,i,j);
        printf ("Duration Time:          2 days\n");
        printf ("Departure Time:         03:15 am\n");
        printf ("Arrival Time:           11:40 pm\n");
        printf ("Seat Number:            8753\n");
        printf ("Flight Number:          PK-746\n");
        printf ("Passport Type:          P\n");
        printf ("Passport Expiry Date:   11-12-2027\n");
    break;
case 5:
        exit(0);
  }
  break;
default:
        SetColor(4);
        printf ("\t\tInvalid Input!");
    break;
}
    break;

case 2:
        SetColor(14);
        printf("=====================================================TICKET PRICES======================================================\n");
        printf ("\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        printf ("\t\t  * SNO:    COUNTRY    CAPITAL         TICKET PRICE   *\n");
        printf ("\t\t  * 1.      USA        Washington DC   50000          *\n");
        printf ("\t\t  * 2.      India      New Delhi       30000          *\n");
        printf ("\t\t  * 3.      France     Paris           80000          *\n");
        printf ("\t\t  * 4.      UAE        Dubai           20000          *\n");
        printf ("\t\t  * 5.      Italy      Rome            60000          *\n");
        printf ("\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");

    break;
case 3:
       while(promo != 7){
        SetColor(11);
        printf("\n======================================================PROMO CODE=======================================================\n");
        printf("\t\t * * * * * * * * * * * * * * * * * * * \n");
	    printf("\t\t * Press \"1\" -\tEnter Promo Code     *\n");
	    printf("\t\t * Press \"2\" -\tGenerate Promo Code  *\n");
        printf("\t\t * Press \"3\" -\tPrevious Flights     *\n");
        printf("\t\t * Press \"4\" -\tExit                 *\n");
        printf("\t\t * * * * * * * * * * * * * * * * * * * \n");
        SetColor(2);
        printf("\n\t\tEnter 7 to back to Main Menu!\n");
        SetColor(11);
        printf ("\n\t\tEnter your Choice> ");
        scanf ("%d",&promo);
    switch (promo){
case 1:
        SetColor(7);
        printf ("\n\t\tEnter 4 digit Promo Code, to get Discount of Rs 1000 on any ticket> ");
        scanf ("%li",&z);
    if (z>=2000 && z<3000){
        SetColor(3);
        printf ("\n\t\tYour Promo code %li is registered successfully, now you can avail Discount of Rs 1000 on any ticket:\n",z);
  } else {
        SetColor(4);
        printf ("\n\t\tPlease Enter valid Promo Code!\n");
    }
    break;
case 2:
        SetColor(13);
        printf ("\n\t\tEnter your Name> ");
        scanf ("%s",&a);
    if( strcmp( a, "guman") == 0 ){
        SetColor(13);
        printf ("\n\t\tPromo Code is successfully generated ",rand() % 5);
    for( o = 0 ; o < n ; o++ ) {
        printf("%li", rand() % 5);
    }
    printf ("\n\n\t\tGuman, You have used Karachi Airline Service 13 times, Enter this Promo Code when you book\n\t\ta Ticket and get Rs 1000 Discount on it.\n");
    }else if( strcmp( a, "kashif") == 0 ){
        printf ("\n\t\tPromo Code is successfully generated ",rand() % 5);
    for( o = 0 ; o < n ; o++ ) {
        printf("%li", rand() % 5);
    }
    printf ("\n\n\t\tKashif, You have used Karachi Airline Service 5 times, Enter this Promo Code when you book\n\t\ta Ticket and get Rs 1000 Discount on it.\n");
    }else if( strcmp( a, "manish") == 0 ){
        printf ("\n\t\tPromo Code is successfully generated ",rand() % 5);
    for( o = 0 ; o < n ; o++ ) {
        printf("%li", rand() % 5);
    }
        printf ("\n\n\t\tManish, You have used Karachi Airline Service 8 times, Enter this Promo Code when you book\n\t\ta Ticket and get Rs 1000 Discount on it.\n");
    }else if( strcmp( a, "jarnail") == 0 ){
        printf ("\n\t\tPromo Code is successfully generated ",rand() % 5);
    for( o = 0 ; o < n ; o++ ) {
         printf("%li", rand() % 5);
    }
         printf ("\n\n\t\tJarnail, You have used Karachi Airline Service 6 times, Enter this Promo Code when you book\n\t\ta Ticket and get Rs 1000 Discount on it.\n");
    }else{
        SetColor(15);
         printf ("\n\t\t%s, you can't generate Promo Code!, you have used Karachi Airline Service less than 5 times,""\n\t\tYou can generate Promo Code, if have used our Service at least 5 times.\n",a);
   }

    break;
case 3:
         SetColor(2);
         printf ("\n\t\tYou have used Karachi Airline Service ",rand() % 10);
       for( o = 0 ; o < q ; o++ ) {
         printf("%li", rand() % 10);
         printf (" times!");
       }
       break;
case 4:
     exit(0);
    break;
case 7:
    SetColor(2);
    printf("\n\t\tPlease wait, we are redirecting you to Main Menu!\n");
    break;
default:
        SetColor(4);
        printf ("\n\t\tInvalid Choice!\n");
    }
       }
    break;
case 4:
        SetColor(14);
        printf("\t\tPassengers Record is Password Protected!\n");
        SetColor(6);
        printf("\n\t\tENTER USER NAME> ");
        scanf("%s",&user);
    if( strcmp( user, "rajput") == 0 ){
        printf("\n\t\tENTER PASSWORD> ");
        scanf("%s",&pas);
    if( strcmp( pas, "guman") == 0 ){
while (record != 7){
    SetColor(11);
    printf("\n===================================================PASSENGER RECORDS===================================================\n\n\n");
	printf("\t\t* * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t* Press \"1\" -\tFirst Class Passengers      *\n");
	printf("\t\t* Press \"2\" -\tBusiness Class Passengers   *\n");
	printf("\t\t* Press \"3\" -\tPremium Class Passengers    *\n");
	printf("\t\t* Press \"4\" -\tEconomy Class Passengers    *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * *\n");
    SetColor(2);
    printf("\n\t\tEnter 7 to back to Main Menu!\n");
    SetColor(6);
	printf("\n\t\tEnter your choice> ");
	scanf("%li",&record);
	printf("\n");

  switch(record) {
case 1:

    SetColor(14);
    printf("\n=============================================FIRST CLASS PASSENGERS LIST===============================================\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t* SNo: NAME          S/NAME        AGE    CITY       COUNTRY      TICKET No.*\n");
    printf("\t\t* 1.   Guman Singh   Rajput        19     Karachi    Pakistan     1812297   *\n");
    printf("\t\t* 2.   Jarnail       Valasai       19     Karachi    Pakistan     1812300   *\n");
    printf("\t\t* 3.   Manish        Lohano        22     Karachi    Pakistan     5495987   *\n");
    printf("\t\t* 4.   Kashif        Muhammad      18     Karachi    Pakistan     1812309   *\n");
    printf("\t\t* 5.   Ritik         Maheshwari    19     Karachi    Pakistan     5862674   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n\t\tEnter Passenger First Name> ");
    scanf("%s",&a);
   if( strcmp( a, "guman") == 0 ){
    printf("\n\t\tName:           Gumansingh\n"
           "\t\tSurname:        Rajput\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03327305601\n"
           "\t\tEmail:          guman390@gmail.com\n"
           "\t\tAddress:        DHA Phase I, Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  30 June 1999\n"
           "\t\tPlace of Birth: Kertee, Tharparkar, Sindh\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812297\n");
   }
   else if( strcmp( a, "jarnail") == 0 ){
    printf("\n\t\tName:           Jarnail\n"
           "\t\tSurname:        Valasai\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03313656352\n"
           "\t\tEmail:          jvalasai@gmail.com\n"
           "\t\tAddress:        Street 12 Badar commerical area, DHA Phase 5, Karachi\n"
           "\t\tDate of Birth:  05 Nov 1999\n"
           "\t\tPlace of Birth: Kaloi, Tharparkar, Sindh\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812300\n");
   }
   else if( strcmp( a, "manish") == 0 ){
    printf("\n\t\tName:           Manish\n"
           "\t\tSurname:        Lohano\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03312064979\n"
           "\t\tEmail:          manishlohano321@gmail.com\n"
           "\t\tAddress:        Defence, Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Mirpurkhas\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "kashif") == 0 ){
    printf("\n\t\tName:           Kashif\n"
           "\t\tSurname:        Muhammad\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03103488563\n"
           "\t\tEmail:          evenbetter6@gmail.com\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  3 June 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812309\n");
   }
   else if( strcmp( a, "ritik") == 0 ){
    printf("\n\t\tName:           Ritik\n"
           "\t\tSurname:        Maheshwari\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03312542187\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Amarkot, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Tharparkar, Sindh\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
    printf("\n\t\tThis person is no more with us!\n");
   }else{
   SetColor(4);
   printf ("\n\t\tError! Record not Found of %s!",a);
   }
   break;
case 2:
    SetColor(14);
    printf("\n===========================================BUSINESS CLASS PASSENGERS LIST==============================================\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t* SNo NAME         S/NAME      AGE    CITY       COUNTRY      TICKET No.*\n");
    printf("\t\t* 6.  Huzaifa      Jafri       19     Karachi    Pakistan     4562674   *\n");
    printf("\t\t* 7.  Sajjad       Hussain     21     Karachi    Pakistan     1812318   *\n");
    printf("\t\t* 8.  Moiz         Sugriyo     20     Karachi    Pakistan     8895987   *\n");
    printf("\t\t* 9.  Khetsingh    Rajput      18     Karachi    Pakistan     1812301   *\n");
    printf("\t\t* 10. Asad         Ismail      19     Karachi    Pakistan     3162674   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n\t\tEnter Passenger First Name> ");
    scanf("%s",&a);
   if( strcmp( a, "huzaifa") == 0 ){
    printf("\n\t\tName:           Huzaifa\n"
           "\t\tSurname:        Jafri\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03326798021\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "sajjad") == 0 ){
    printf("\n\t\tName:           Sajjad\n"
           "\t\tSurname:        Hussain\n"
           "\t\tAge:            21\n"
           "\t\tPhone Number:   03142469176\n"
           "\t\tEmail:          Shbama1997@gmail.com\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  24 Fab 1997\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812318\n");
   }
   else if( strcmp( a, "moiz") == 0 ){
    printf("\n\t\tName:           Moiz\n"
           "\t\tSurname:        Sugriyo\n"
           "\t\tAge:            20\n"
           "\t\tPhone Number:   03314567891\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Badar commerical area, DHA Phase 5, Karachi\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "khetsingh") == 0 ){
    printf("\n\t\tName:           Khetsingh\n"
           "\t\tSurname:        Rajput\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03363031029\n"
           "\t\tEmail:          khetsodharajput9@gmail.com\n"
           "\t\tAddress:        Street No:8, Akhtar Colony, Karachi\n"
           "\t\tDate of Birth:  11 Fab 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812301\n");
   }
   else if( strcmp( a, "asad") == 0 ){
    printf("\n\t\tName:           Asad\n"
           "\t\tSurname:        Ismail\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   0333755775\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }else{
   SetColor(4);
   printf ("\n\t\tError! Record not Found of %s!",a);
   }
   break;
case 3:
    SetColor(14);
    printf("\n============================================PREMIUM CLASS PASSENGERS LIST==============================================\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t* SNo  NAME          S/NAME    AGE    CITY       COUNTRY      TICKET No.*\n");
    printf("\t\t* 11.  Abdul         Jabbar    21     Karachi    Pakistan     5762674   *\n");
    printf("\t\t* 12.  Arslan                  20     Karachi    Pakistan     7812784   *\n");
    printf("\t\t* 13.  Areeb         Abbasi    20     Karachi    Pakistan     4554587   *\n");
    printf("\t\t* 14.  Rayyan        Zaidi     20     Karachi    Pakistan     1812323   *\n");
    printf("\t\t* 15.  Ali Ahmed     Samoo     23     Karachi    Pakistan     4676774   *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n\t\tEnter Passenger First Name> ");
    scanf("%s",&a);
   if( strcmp( a, "jabbar") == 0 ){
    printf("\n\t\tName:           Jabbar\n"
           "\t\tSurname:        Not Available\n"
           "\t\tAge:            21\n"
           "\t\tPhone Number:   0367834567\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "arslan") == 0 ){
    printf("\n\t\tName:           Arslan\n"
           "\t\tSurname:        Not Available\n"
           "\t\tAge:            20\n"
           "\t\tPhone Number:   0334678902\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "areeb") == 0 ){
    printf("\n\t\tName:           Areeb\n"
           "\t\tSurname:        Abbasi\n"
           "\t\tAge:            20\n"
           "\t\tPhone Number:   0331437756\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "rayyan") == 0 ){
    printf("\n\t\tName:           Rayyan\n"
           "\t\tSurname:        Zaidi\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03412156509\n"
           "\t\tEmail:          zaidir97@gmail.com\n"
           "\t\tAddress:        Empire center, Jauhar Mohar, Karachi\n"
           "\t\tDate of Birth:  16 Oct 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812323\n");
   }
   else if( strcmp( a, "ali") == 0 ){
    printf("\n\t\tName:           Ali Ahmed\n"
           "\t\tSurname:        Samoo\n"
           "\t\tAge:            23\n"
           "\t\tPhone Number:   0333764768\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Kayumabad, Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }else{
   SetColor(4);
   printf ("\n\t\tError! Record not Found of %s!",a);
   }
    break;
case 4:
    SetColor(14);
    printf("\n=============================================ECONOMY CLASS PASSENGERS LIST=============================================\t");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t* SNo  NAME         S/NAME    AGE    CITY       COUNTRY      TICKET No. *\n");
    printf("\t\t* 16.  Abdullah     Siddique  18     Karachi    Pakistan     1812306    *\n");
    printf("\t\t* 17.  Shahid       Khan      20     Karachi    Pakistan     1812319    *\n");
    printf("\t\t* 18.  Ambreen      Malik     18     Karachi    Pakistan     6695987    *\n");
    printf("\t\t* 19.  Yusra        Zaidi     17     Karachi    Pakistan     6562674    *\n");
    printf("\t\t* 20.  Aiman        Naqvi     18     Karachi    Pakistan     9862674    *\n");
    printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n\t\tEnter Passenger First Name> ");
    scanf("%s",&a);
   if( strcmp( a, "abdullah") == 0 ){
    printf("\n\t\tName:           Abdullah\n"
           "\t\tSurname:        Siddique\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03132943910\n"
           "\t\tEmail:          as3383213@gmail.com\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  8 Aug 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "shahid") == 0 ){
    printf("\n\t\tName:           Shahid\n"
           "\t\tSurname:        Ullah\n"
           "\t\tAge:            20\n"
           "\t\tPhone Number:   03431262680\n"
           "\t\tEmail:          shahidkhan@gmail.com\n"
           "\t\tAddress:        HR 846, sec 11-B North Karachi\n"
           "\t\tDate of Birth:  03 July 1998\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812319\n");
   }
   else if( strcmp( a, "ambreen") == 0 ){
    printf("\n\t\tName:           Ambreen\n"
           "\t\tSurname:        Malik\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03314634564\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "yusra") == 0 ){
    printf("\n\t\tName:           Yusra\n"
           "\t\tSurname:        Shahid\n"
           "\t\tAge:            17\n"
           "\t\tPhone Number:   0319867678\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }
   else if( strcmp( a, "aiman") == 0 ){
    printf("\n\t\tName:           Aiman\n"
           "\t\tSurname:        Naqvi\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03327890712\n"
           "\t\tEmail:          Not Available\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  Not Available\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
   }else{
   SetColor(4);
   printf ("\n\t\tError! Record not Found of %s!",a);
   }
   break;
case 7:
    SetColor(2);
    printf("\n\t\tPlease wait, we are redirecting you to Main Menu!\n");
    break;
default:
    SetColor(4);
    printf ("\t\tInvalid Choice!");
  }
    }
   break;
   }else{
    SetColor(4);
    printf("\t\tPlease Enter valid Password!\n");
    SetColor(6);
    printf("\t\tHint: What we call illusion in Urdu?\n");
}
   }else{
    SetColor(4);
    printf("\n\t\tPlease Enter valid User Name!\n");
    SetColor(6);
    printf("\t\tHint: Surname of Gumansingh!\n");
   }
   break;
case 5:
    SetColor(11);
    printf("\n===================================================Search Passenger====================================================\n");
    while (search != 7){
    SetColor(6);
    printf ("\n\t\tEnter Passenger's Passport Number> ");
    scanf ("%li",&search);
    SetColor(2);
    printf ("\n\t\tEnter 7 to back to Main Menu!\n");
   switch(search){
case 1812297:
    SetColor(14);
    printf("\n\t\tName:           Gumansingh\n"
           "\t\tSurname:        Rajput\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03327305601\n"
           "\t\tEmail:          guman390@gmail.com\n"
           "\t\tAddress:        DHA Phase I, Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  30 June 1999\n"
           "\t\tPlace of Birth: Kertee, Tharparkar, Sindh\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812297\n");
   break;
case 1812319:
    SetColor(14);
    printf("\n\t\tName:           Shahid\n"
           "\t\tSurname:        Ullah\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03431262680\n"
           "\t\tEmail:          shahidkhan@gmail.com\n"
           "\t\tAddress:        HR 846, sec 11-B North Karachi\n"
           "\t\tDate of Birth:  03 July 1998\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812319\n");
    break;
case 1812300:
    SetColor(14);
    printf("\n\t\tName:           Jarnail\n"
           "\t\tSurname:        Valasai\n"
           "\t\tAge:            19\n"
           "\t\tPhone Number:   03313656352\n"
           "\t\tEmail:          jvalasai@gmail.com\n"
           "\t\tAddress:        Street 12 Badar commerical area, DHA Phase 5, Karachi\n"
           "\t\tDate of Birth:  05 Nov 1999\n"
           "\t\tPlace of Birth: Kaloi, Tharparkar, Sindh\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812300\n");
   break;
case 1812309:
     SetColor(14);
     printf("\n\t\tName:           Kashif\n"
           "\t\tSurname:        Muhammad\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03103488563\n"
           "\t\tEmail:          evenbetter6@gmail.com\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  3 June 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812309\n");
    break;
case 1812318:
     SetColor(14);
     printf("\n\t\tName:           Sajjad\n"
           "\t\tSurname:        Hussain\n"
           "\t\tAge:            21\n"
           "\t\tPhone Number:   03142469176\n"
           "\t\tEmail:          Shbama1997@gmail.com\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  24 Fab 1997\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812318\n");
    break;
case 1812301:
     SetColor(14);
     printf("\n\t\tName:           Khetsingh\n"
           "\t\tSurname:        Rajput\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03363031029\n"
           "\t\tEmail:          khetsodharajput9@gmail.com\n"
           "\t\tAddress:        Street No:8, Akhtar Colony, Karachi\n"
           "\t\tDate of Birth:  11 Fab 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812301\n");
    break;
case 1812323:
     SetColor(14);
     printf("\n\t\tName:           Rayyan\n"
           "\t\tSurname:        Zaidi\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03412156509\n"
           "\t\tEmail:          zaidir97@gmail.com\n"
           "\t\tAddress:        Empire center, Jauhar Mohar, Karachi\n"
           "\t\tDate of Birth:  16 Oct 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812323\n");
    break;
case 1812306:
     SetColor(14);
     printf("\n\t\tName:           Abdullah\n"
           "\t\tSurname:        Siddique\n"
           "\t\tAge:            18\n"
           "\t\tPhone Number:   03132943910\n"
           "\t\tEmail:          as3383213@gmail.com\n"
           "\t\tAddress:        Karachi, Sindh, Pakistan\n"
           "\t\tDate of Birth:  8 Aug 2000\n"
           "\t\tPlace of Birth: Karachi\n"
           "\t\tOccupation:     Student\n"
           "\t\tPassport No:    1812306\n");
    break;
case 7:
     SetColor(2);
     printf("\n\t\tPlease wait, we are redirecting you to Main Menu!\n");
    break;
default:
     SetColor(4);
     printf ("\n\t\tError! Record not Found of %li!\n",search);
    break;
   }
		}
    break;
case 6:
    SetColor(14);
    printf ("\n=====================================================CLASS PRICES======================================================\n");
    printf ("\t\t* * * * * * * * * * * * * * *\n");
    printf ("\t\t* CLASS            PRICE    *\n");
    printf ("\t\t* First Class      Rs 5000  *\n");
    printf ("\t\t* Business Class   Rs 4000  *\n");
    printf ("\t\t* Premium Class    Rs 3000  *\n");
    printf ("\t\t* Economy Class    Rs 2000  *\n");
    printf ("\t\t* * * * * * * * * * * * * * *\n");
   break;
case 7:
    SetColor(14);
    printf("\n============================================LIST OF AVAILABLE FLIGHTS============================================\t");
    printf ("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf ("\t\t* SNo.   FLIGHT      FROM         TO          ECONOMIC FAIR  EXECUTIVE FAIR *\n");
    printf ("\t\t* 1.     PK-247      Karachi      Paris       50000           60000         *\n");
    printf ("\t\t* 2.     IT-686      Karachi      Venice      60000           70000         *\n");
    printf ("\t\t* 3.     IN-253      Karachi      Delhi       30000           40000         *\n");
    printf ("\t\t* 4.     US-357      Karachi      New York    80000           90000         *\n");
    printf ("\t\t* 5.     AU-582      Karachi      Canberra    40000           50000         *\n");
    printf ("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
   break;
case 8:
    while(status != 7)
    {
    SetColor(11);
    printf ("\n=====================================================FLIGHT STATUS=====================================================\n");
    printf ("\t\t * * * * * * * * * * * * * * \n");
	printf ("\t\t * Press \"1\" -\tDeparture  *\n");
	printf ("\t\t * Press \"2\" -\tArrivals   *\n");
    printf ("\t\t * Press \"3\" -\tExit       *\n");
    printf ("\t\t * * * * * * * * * * * * * * \n");
    SetColor(2);
    printf ("\n\t\tEnter 7 to back to Main Menu!\n");
    SetColor(6);
    printf ("\t\tEnter your Choice> ");
    scanf ("%d",&status);
  switch (status){
case 1:
    SetColor(14);
    printf ("\n======================================================DEPARTURES=======================================================\n");
    printf ("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf ("\t\t* SNo.   TIME        FLIGHT     TO            GATE NO:   REMARKS  *\n");
    printf ("\t\t* 1.     12:00 pm    PK-259     Islamabad     12         On Time  *\n");
    printf ("\t\t* 2.     12:15 pm    FA-697     Paris         09         Delayed  *\n");
    printf ("\t\t* 3.     12:30 pm    IT-290     Rome          10         On Time  *\n");
    printf ("\t\t* 4.     12:45 pm    IN-723     Delhi         07         On Time  *\n");
    printf ("\t\t* 5.     12:50 pm    AU-237     Canberra      03         Canceled *\n");
    printf ("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
  break;
case 2:
    SetColor(14);
    printf ("\n=======================================================ARRIVALS========================================================\n");
    printf ("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf ("\t\t* SNo.   TIME        FLIGHT     FROM            GATE NO:   REMARKS  *\n");
    printf ("\t\t* 1.     13:05 pm    IN-456     Kolkata         05         On Time  *\n");
    printf ("\t\t* 2.     13:20 pm    BD-698     Dhaka           11         Canceled *\n");
    printf ("\t\t* 3.     13:25 pm    IT-854     Venice          08         On Time  *\n");
    printf ("\t\t* 4.     13:35 pm    PK-453     Lahore          15         Delayed  *\n");
    printf ("\t\t* 5.     13:40 pm    US-235     New York        01         Canceled *\n");
    printf ("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
   break;
case 3:
    exit (0);
   break;
case 7:
    SetColor(2);
    printf("\n\t\tPlease wait, we are redirecting you to Main Menu!\n");
    break;
default:
    SetColor(4);
    printf ("\n\t\tInvalid Choice!");
  }
    }
   break;
   case 9:
 SetColor(14);
 printf ("\n=======================================================ABOUT============================================================\n");
 printf ("\t\tThis Program is made by Gumansingh Rajput.\n"
         "\t\tEmail: guman390@gmail.com\n"
         "\t\tNumber: 03327305601\n");

 printf("\n\t\tThis program is about Flight Booking, You can book a Flight to anywhere, We have 4 classes,\n"
         "\t\tyou can Check Class prices by entering 5, For Booking have to choose a Class, after that you\n"
         "\t\tyou need to Enter Class Price, We have also Discounts on Promo Codes, If you have Promo Code\n"
         "\t\tYou can enter while booking else you can also generate by pressing 3, You can generate Promo\n"
         "\t\tif you have used Karachi Airline Service at least 5 times, after entering full amount, You \n"
         "\t\tetc, will be asked to Enter further details your Name, Age, Gender, Nationality, Passport Number\n"
         "\t\tYou can also check Ticket Prices of different countries by entering 2.\n"
         "\t\tAnother option is Passenger Records, We have all passenger records sorted by Class Names, But\n"
         "\t\tYou need to Enter User Name and Database Password to check records, otherwise you can't access.\n"
         "\t\tYou can also Check Flight Status of Departures and Arrivals, Time, Flight, Gate Number everything.\n"
         "\t\tList of Available Flights, will guide you, which flight is suppose to take off and where to.\n");
   break;
case 10:
    SetColor(11);
    printf ("\n========================================================FAQs============================================================\n");
    printf("\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t * Press \"1\" -\tHow to generate Promo Code?                                *\n");
	printf("\t\t * Press \"2\" -\tHow to check Class prices?                                 *\n");
	printf("\t\t * Press \"3\" -\tFlights will today arrive at 1 am?                         *\n");
	printf("\t\t * Press \"4\" -\tHow many times I have used Karachi Airline Service?        *\n");
	printf("\t\t * Press \"5\" -\tHow much is Ticket price of USA?                           *\n");
	printf("\t\t * Press \"6\" -\tWhy can't I generate Promo Code?                           *\n");
    printf("\t\t * Press \"7\" -\tWho is the creator of this Program?                        *\n");
    printf("\t\t * Press \"8\" -\tWhy I am unable to enter details in Flight Booking option? *\n");
    printf("\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    SetColor(6);
    printf ("\t\tEnter your Query Number> ");
    scanf ("%li",&FAQ);
    switch (FAQ){
case 1:
    SetColor(14);
    printf ("\n\t\tGo to Promo Code -> Generate Promo Code -> Enter your Name.\n\t\tIt will generate a Promo Code if you have"
    "used Karachi Airline Service more than 5 times.\n");
   break;
case 2:
    printf ("\t\tGo to Class Prices -> First Class.\n");
    break;
case 3:
    printf ("\t\tGo to Flight Status -> Arrivals -> 1 am.\n");
    break;
    case 4:
    printf ("\t\t Go to Promo Code -> Previous Flights.\n");
    break;
case 5:
    printf ("\t\tGo to Ticket Prices -> USA.\n");
    break;
case 6:
    printf ("\t\tYou can generate Promo Code if you have used Karachi Airline Service at least 5 times.\n");
    break;
case 7:
    printf ("\t\tThis Program is made with teamwork by Gumansingh Rajput, Khetsingh Sodha, Sajjad Hussain Janani(SJ).\n"
    "\t\tEmail 1:  guman390@gmail.com\n"
    "\t\tEmail 2:  shbama1997@gmail.com\n"
    "\t\tEmail 3:  khetsodharajput9@gmail.com\n"
    "\t\tNumber :  03327305601\n");
    break;
case 8:
    printf ("\t\tBefore proceeding to further details, You need to enter full class price,\n"
    "\t\tif you don't know class prices, Go to Class prices option no: 5.\n");
    break;
default:
    SetColor(4);
    printf ("\t\tInvalid Choice!\n");
    }
   break;
case 11:
    SetColor(14);
    printf ("\n\t\tThank you for using Karachi Airline Service.\n");
    exit (0);
   break;
default:
    SetColor(4);
    printf("\n\t\tInvalid Choice!\n");
    break;
    }
    SetColor(14);
    printf("\n\n\n\t\tDo you want to use our other Services?y/n\n" "\t\tEnter any key to Continue, Enter N to Exit>");
    fflush(stdin);
    scanf("%c", &flight);
if (flight == 'n'|| flight == 'N')
                k = 1;
	} while (!k);
    SetColor(14);
	printf("\n\n\t\tThank You for using Karachi Airline Service.\n");
return 0;
}
void SetColor(int ForgC)
{
     WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
