/**
* @file stdio.h
* @brief this header file will contain all standard
* library functions for input and outputs.
*/
#include<stdio.h>

/**
* @file conio.h
* @brief this header file declares several useful library functions for performing "console input and output" from a program.
* example: clrscr(),getch() etc...
*/
#include<conio.h>

/**
* @file ctype.h
* @brief The ctype. h header file of the C Standard Library declares several functions that are useful for testing and mapping characters.
* All the functions accepts int as a parameter, whose value must be EOF or representable as an unsigned char.
*/
#include<ctype.h>

/**
* @file stdlib.h
* @brief the stdlib.h header of the general purpose standard library of C programming language which includes functions involving
* memory allocation, process control, conversions and others.
*/
#include<stdlib.h>

/**
* @file string.h
* @brief contains macro definitions, constants and declarations of functions and types used not only for string handling
* but also various memory handling functions; the name is thus something of a misnomer.
*/
#include<string.h>

void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
    {
        int countr,r,i;         /// @param count this parameter is used to store the count of the questions asked.
        float score;            /// @param score is used to store the result in form of score.
        char choice;            /// @param choice is used to select from the multiple clues given to identify the right answer.
        char playername[20];    /// @param playername is used to store the name of the player upto 20 characters only.
        int playerage;          /// @param playerage is used to store the value of the age of the player.
        /** The game begins with here:
        * the home option displays on the screen the Welcome message to the game.
        * it also shows the various controls which have to be used in the game.
        * some of the controls are start, view, reset, help, quit....
        */
    mainhome:
        /// this statement is a stdlib.h function used to clear the screen.
        system("cls");
        printf("\n\n\n\n\t\t________________________________________");
        printf("\n\t\t\t           WELCOME ");
        printf("\n\t\t\t             to ");
        printf("\n\t\t\t    DO YOU THINK YOU KNOW?");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t________________________________________");
        printf("\n\t\t > Press S to start the game");
        printf("\n\n\t\t > Press V to view the highest score  ");
        printf("\n\n\t\t > Press R to reset score");
        printf("\n\n\t\t > press H for help            ");
        printf("\n\n\t\t > press Q to quit             ");
        printf("\n\t\t________________________________________\n\n");

        /// the toupper() function is used to convert lowercase alphabets to uppercase letters.
        /// When a lowercase alphabet is passed to the toupper() function it converts it to uppercase.
        /// it is a ctype function.
        /// getch() represents get character from keyboard, getch() is a nonstandard function and is present in conio.h header file.
        choice=toupper(getch());

        /** @param V is used to view the highest score of the game which is stored in the record function.
        * @param H is used to go to the help section of the game.
        * @param R is used to reset the score.
        * @param Q is used to quit the game.
        * @param S is used to start the game.
        */
        if (choice=='V')
        {
            show_record();
            goto mainhome;
            }
        else if (choice=='H')
        {
            help();getch();
            goto mainhome;
            }
        else if (choice=='R')
        {
            reset_score();
            getch();
            goto mainhome;
            }
        else if (choice=='Q')
            exit(1);
        else if(choice=='S')
        {
            system("cls");
            printf("\n\n\n\n\n\n\t\t\tResister your name:");
            /** the player has to enter his/her name when the game starts.
            *gets() Reads characters from the standard input and stores them as a string.
            */
            gets(playername);
            printf("\n\n\n\n\n\t\t\tEnter your age:");
            scanf("%d",&playerage); /// scanf() is a function that reads data with specified format from a given string stream source.
            /** This part of the program defines the eligibility of the player to play the game.
            * if he is above 18 years of age the player is eligible else they cannot play the game.
            */
            if (playerage>18)
            {
                printf("you are eligible to play the game");
            }
            else
            {
                printf("you are not eligible to play game. Better luck next time!!");
                exit(1);
                }
        /** if the player is eligible, he goes to the next stage of the game.
        * the player enters the main screen of the game Do You Think You Know?
        * it also displays few tips for the player to play easily
        */

        system("cls");
        printf("\n\n\t CONGRATULATIONS!!! %s you are eligible to play the game",playername);
        printf("\n\n ------------------  Welcome %s to DO YOU THINK YOU KNOW? -------------------------------",playername);
        printf("\n\n\n Here are some tips you might want know before playing:");
        printf("\n -------------------------------------------------------------------------------------");
        printf("\n\n\n >> Your game starts with the first question with multiple choice. \n In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch())=='Y')
        {
            goto game;
            }
        else
		{
            goto mainhome;
            system("cls");
            }

        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!"); /// the game starts, when the player presses any key.
        if(toupper(getch())=='p')
		{
		    goto game;  /// this takes the player to the game.
		    }
game:
    countr=0;           /// the game begins with the count of the question as zero.
    for(i=1;i<=10;i++)  /// the for loop is used for counting the questions the player has answered correctly and increment or goto the next question on giving the correct answer.
    {
        system("cls");
        r=i;            /// storing value of i in r used in switching the count cases countr.
        switch(r)       /// A switch statement allows a variable to be tested for equality against a list of values.
                        /// Each value is called a case, and the variable being switched on is checked for each switch case.
{
    case 1:
        printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");countr++;getch(); /// when the answer is correct the count is incremented.
                break;getch();  /// break When a break statement is reached, the switch terminates,
                                /// and the flow of control jumps to the next line following the switch statement.
                                ///Not every case needs to contain a break. If no break appears, the flow of control will fall through to subsequent cases
                                ///until a break is reached.
                }
		else
		       {
                    printf("\n\nWrong!!! The correct answer is C.Cricket");
                    getch();    /// when the answer is wrong the correct answer is displayed and then we goto the score function.
                    goto score;
                    break;      /// break comes out of the switch case 1.
                    }

		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");countr++;getch();
                break;
                }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
                goto score;
                break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{
			    printf("\n\n Correct!!!");countr++;getch();
                break;
                }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.8");getch();
                goto score;
                break;
                }

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");countr++;getch();
                break;
                }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
                goto score;
                break;
                }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");countr++;getch();
			    break;
			    }
		else
            {
                printf("\n\nWrong!!! The correct answer is B.Power");
                getch();
                goto score;
                break;
		       }

		case 6:
            printf("\n\n\nWhich element is found in Vitamin B12?");
            printf("\n\nA.Zinc\t\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
            if (toupper(getch())=='B' )
                {
                    printf("\n\nCorrect!!!");countr++;getch();
                    break;
                    }
            else
                {
                    printf("\n\nWrong!!! The correct answer is B.Cobalt");
                    goto score;
                    getch();
                    break;
                    }
        case 7:
            printf("\n\n\nWhat is the National Name of Japan?");
            printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
            if (toupper(getch())=='D')
                {
                    printf("\n\nCorrect!!!");countr++;getch();
                    break;
                    }
            else
                {
                    printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
                    goto score;
                    break;
                    }
        case 8:
            printf("\n\n\nHow many times a piece of paper can be folded at the most?");
            printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
            if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");countr++;getch();
                    break;
                    }
            else
                {
                    printf("\n\nWrong!!! The correct answer is B.7");getch();
                    goto score;
                    break;
                    }
        case 9:
            printf("\n\n\nWhat is the capital of Denmark?");
            printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
            if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");countr++; getch();
                    break;
                    }
            else
                {
                    printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
                    goto score;
                    break;
                    }
        case 10:
            printf("\n\n\nWhich is the longest River in the world?");
            printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
            if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");countr++;getch();
                    break;
                    }
            else
                {
                    printf("\n\nWrong!!! The correct answer is A.Nile");getch();
                    goto score;
                    break;
                    }
        case 11:
            printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
            printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
            if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");countr++;getch();
                    break;
                    }
            else
                {
                    printf("\n\nWrong!!! The correct answer is C.Orange");getch();
                    goto score;
                    break;
                }
        case 12:
            printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
            printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Meghalaya\t\tD.north-east India");
            if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");countr++;getch();
                    break;
                }
            else
                {
                    printf("\n\nWrong!!! The correct answer is A.Rome");getch();
                    goto score;
                    break;
                }
		case 13:
            printf("\n\n\nName the country where there no mosquitoes are found?");
            printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
            if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");countr++;getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.France");getch();
                goto score;
                break;
                }
        case 14:
            printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
            printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
            if (toupper(getch())=='A')
            {
			    printf("\n\nCorrect!!!");countr++;getch();
                break;}
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
                goto score;
                break;
                }
		case 15:
            printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
            printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
            if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");countr++;getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.AB");getch();
                goto score;
                break;}
		case 16:
            printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
            printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
                goto score;
                break;
                }
		case 17:
            printf("\n\n\nThe country famous for Samba Dance is........");
            printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
            if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Brazil");getch();
                goto score;
                break;
                }
		case 18:
            printf("\n\n\nWind speed is measure by__________?");
            printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
            if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();
                goto score;
                break;
                }
		case 19:
            printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
            printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();
                goto score;
                break;}
		case 20:
            printf("\n\n\nWhich hardware was used in the First Generation Computer?");
            printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
            if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Valves");getch();
                goto score;
                break;
                }
		case 21:
            printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
            printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
            if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;}
            else
            {
                printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();
                goto score;
                break;}
		case 22:
            printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
            printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
            if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Serena Williams");getch();
                goto score;
                break;
                }
		case 23:
            printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
            printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
            if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");countr++; getch();
                break;
                }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();goto score;
                break;
                }
        }
    }

/**
* This method will be used to calculate the score of the player when he ends the game or gives a wrong answer.
* @author khushi
* @param score it prints the Score of the player and stores it in a file.
* @date 10/15/2020
*/
score:
    system("cls");
    score=(float)countr*100000;
    if(score>0.00 && score<1000000)
        {
            printf("\n\n\t\t**************** CONGRATULATIONS!!!! *****************");
            printf("\n\n\t You won $%.2f",score);goto go;
            }
        else if(score==1000000.00)
        {
            printf("\n\n\n \t\t**************** CONGRATULATION ****************");
            printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
            printf("\n\t\t You won $%.2f",score);
            printf("\t\t Thank You!!");
            }
        else
        {
            printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
            printf("\n\t\t Thanks for your participation");
            printf("\n\t\t TRY AGAIN");goto go;
            }

/**
* This method will be used to play the next game or quit.
* @author khushi
* @param go it allows the player to play the next game by pressing Y meaning yes, or goto the main menu.
* @date 10/15/2020
*/
go:
    puts("\n\n Press Y if you want to play next game");
    puts("\n\n Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
    {
        goto game;
    }
    else
        {
            edit_score(score,playername);
            goto mainhome;
            }
        }
    }

/**
* This method is used to show the records of the scores obtained by the various players.
* @author khushi
* @param show_record it stores all the scores of the players in a file for further reference and
* also displays the players name with the highest score.
* @date 10/15/2020
*/
void show_record()
    {
        system("cls");
        char name[20];
        float scr;
        FILE *f;
        f=fopen("score.txt","r");
        fscanf(f,"%s %f",&name,&scr);
        printf("\n\n\t\t*************************************************************");
        printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
        printf("\n\n\t\t*************************************************************");
        fclose(f);
        getch();
        }

/**
* This method is used to reset the score to zero obtained by the various players.
* @author khushi
* @param reset_score it resets all the scores of the players in the file to zero.
* @date 10/15/2020
*/
void reset_score()
    {
        system("cls");              /// cls is used to clear the screen.
        float sc;
        char nm[20];                /// nm means name and sc means score
        FILE *f;
        f=fopen("score.txt","r+");  /// fopen() it opens the file to display the player name with the highest score.
        fscanf(f,"%s%f",&nm,&sc);   /// The fscanf() function is used to read set of characters from file.
                                    ///It reads a word from the file and returns EOF at the end of file.
        sc=0;
        fprintf(f,"%s,%.2f",nm,sc); /// fprintf() is used to print the string content in file but not on stdout console
        fclose(f);                  /// fclose()is used for closing the stream and at the same time all the buffers are also flushed.
        }

/**
* This method is used to provide help.
* @author khushi
* @param help is used to display on the screen tips or the rules to follow the game whenever the player needs.
* @date 10/15/2020
*/
void help()
	{
	    system("cls");
        printf("\n\n                              HELP");
        printf("\n -------------------------------------------------------------------------");
        printf("\n -------------------------------------------------------------------------");
        printf("\n\n >> Your game starts with the first question, with multiple choice.\n\t >> In this round you will be asked");
        printf("\n\t\t  total 10 questions each right answer will be awarded $100,000.");
        printf("\n\n >> By this way you can win upto ONE MILLION cash prize in USD...............");
        printf("\n\n >> You will be given 4 options and you have to press A, B ,C or D for the right option");
        printf("\n\n >> You will be asked questions continuously if you keep giving the right answers.");
        printf("\n\n >> No negative marking for wrong answers");
        printf("\n -------------------------------------------------------------------------");
        printf("\n\n\t*********************BEST OF LUCK*********************************");
        printf("\n -------------------------------------------------------------------------");
        }

/**
* This method is used to edit the score.
* @author khushi
* @param help is used to display on the screen tips or the rules to follow the game whenever the player needs.
* @date 10/15/2020
*/
void edit_score(float score, char plnm[20]) /// plnm is the playername
	{
	    system("cls");
        float sc;
        char nm[20];
        FILE *f;
        f=fopen("score.txt","r");
        fscanf(f,"%s %f",&nm,&sc);
        /** if the score obtained by the player is higher than the previous player it stores it in the file as the highest score.
        * it is used to edit the score value along with the player name in the records.
        */
        if (score>=sc)
            {
                sc=score;
                fclose(f);
                f=fopen("score.txt","w");
                fprintf(f,"%s\n%.2f",plnm,sc);
                fclose(f);
                }
        }
