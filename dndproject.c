#include<stdio.h>

int main()
{   
    //variables

    int maxStatScore = 20;
    int minStatScore = 1;
    int pointBuyPool = 27;
    int strengthScore = 8;
    int dexterityScore = 8;
    int constitutionScore = 8;
    int intelligenceScore = 8;
    int wisdomScore = 8;
    int charismaScore = 8;
    int proficiencyBonus = 2;

    //function library

    int borderLine()
    {
        printf("\n------------------------------------------------------------------------------\n\n");
    }

   

    int strengthScoreInput()
    {
        //borderLine();
        printf("\nInput your strength score (a number between 1 and 20): "); 
        scanf("%d", &strengthScore);
        if(strengthScore > maxStatScore || strengthScore < minStatScore)
        {
            //borderLine();
            printf("That's an invalid input. Dont worry, you can try again.\n");
            fflush(stdin);
            strengthScoreInput();
    
        } else {
            fflush(stdin);
            printf("Great, your base strength score is %d.\n", strengthScore);
        }
    }
 
    int dexterityScoreInput()
    {
        //borderLine();
        printf("\nInput your dexterity score (a number between 1 and 20): ");
        scanf("%d", &dexterityScore);
        if(dexterityScore > maxStatScore || dexterityScore < minStatScore)
        {
            printf("That's an invalid input. Dont worry, you can try again.\n");
            fflush(stdin);
            dexterityScoreInput();
        } else {
            fflush(stdin);
            printf("Great, your base dexterity score is %d.\n", dexterityScore);
        }
    }

    int constitutionScoreInput()
    {
        //borderLine();
        printf("\nInput your constitution score (a number between 1 and 20): ");
        scanf("%d", &constitutionScore);
        if(constitutionScore > maxStatScore || constitutionScore < minStatScore)
            {
                printf("That's an invalid input. Dont worry, you can try again.\n");
                fflush(stdin);
                constitutionScoreInput();
            } else {
                fflush(stdin);
                printf("Great, your base constitution score is %d.\n", constitutionScore);
            }
    }

    int intelligenceScoreInput()
    {
        //borderLine();
        printf("\nInput your intelligence score (a number between 1 and 20): ");
        scanf("%d", &intelligenceScore);
        if(intelligenceScore > maxStatScore || intelligenceScore < minStatScore)
        {
            printf("That's an invalid input. Dont worry, you can try again.\n");
            fflush(stdin);
            intelligenceScoreInput();
        } else {
            fflush(stdin);
            printf("Great, your base Intelligence score is %d.\n", intelligenceScore);
        }
    }

    int wisdomScoreInput()
    {   
        //borderLine();
        printf("\nInput your wisdom score (a number between 1 and 20): ");
        scanf("%d", &wisdomScore);
        if(wisdomScore > maxStatScore || wisdomScore < minStatScore)
        {
            printf("That's an invalid input. Dont worry, you can try again.\n");
            fflush(stdin);
            wisdomScoreInput();
        } else {
            fflush(stdin);
            printf("Great, your base wisdom score is %d.\n", wisdomScore);
        }
    }

    int charismaScoreInput()
    {
        //borderLine();
        printf("\nInput your charisma score (a number between 1 and 20): ");
        scanf("%d", &charismaScore);
        if(charismaScore > maxStatScore || charismaScore < minStatScore)
        {
            printf("That's an invalid input. Dont worry, you can try again.\n");
            fflush(stdin);
            charismaScoreInput();
        } else {
            fflush(stdin);
            printf("Great, your base charisma score is %d.\n", charismaScore);
        }
    }

    int characterStatisticsPrintout()
    {
        borderLine();
        printf("Your base statistics:\n");
        if(strengthScore >= 0 && strengthScore <= 9)
        {
            printf("Strength:     %d     Intelligence: %d\n", strengthScore, intelligenceScore);
        } else {
            printf("Strength:     %d    Intelligence: %d\n", strengthScore, intelligenceScore);
        }
        if(dexterityScore >= 0 && dexterityScore <= 9){
            printf("Dexterity:    %d     Wisdom:       %d\n", dexterityScore, wisdomScore);
        } else {
            printf("Dexterity:    %d    Wisdom:       %d\n", dexterityScore, wisdomScore);
        }
        if(constitutionScore >= 0 && constitutionScore <= 9){
            printf("Constitution: %d     Charisma:     %d\n", constitutionScore, charismaScore);
        } else {
            printf("Constitution: %d    Charisma:     %d\n", constitutionScore, charismaScore);
        }
        borderLine();
    }

   

    int baseStatisticsInput()
    {
    int input;
    strengthScoreInput();
    dexterityScoreInput();
    constitutionScoreInput();
    intelligenceScoreInput();
    wisdomScoreInput();
    charismaScoreInput();
    characterStatisticsPrintout();
        printf("Are you happy with these statistics?\n\n");
        printf("1. Yes, I'd like to continue.\n");  
        printf("2. No, I'd like to redo them.\n\n");
        printf("Select an option and press enter: ");
        scanf("%d", &input);
        if(input == 1)
        {
            printf("placeholder text");
            fflush(stdin);
            return 0;
        } else if (input == 2)
        {   
            borderLine();
            printf("Which statistics would you like to redo?\n");
            printf("1. Strength     4. Intelligence\n");
            printf("2. Dexterity    5. Wisdom\n");
            printf("3. Constitution 6. Charisma\n");
            printf("7. All of them!\n");
            fflush(stdin);
            scanf("%d", &input);
            if(input == 7)
            {
                baseStatisticsInput();
            }
        }
    }

        
    int pointBuy()
    {
        int input;
        printf("Select an option to add or remove a point from a statistic.\n");
        printf("15 points is the maximum, 8 is the minimum.\n");
        printf("\n");
        printf("Point pool: %d\n", pointBuyPool);
        printf("\n");
        printf("1. Strength Up         3. Dexterity Up       5. Constitution Up\n");
        printf("2. Strength Down       4. Dexterity Down     6. Constitution Down\n");
        printf("\n");
        printf("7. Intelligence Up     9. Wisdom Up         11. Charisma Up\n");
        printf("8. Intelligence Down  10. Wisdom Down       12. Charisma Down\n");
        printf("\n");
        printf("Select a number and press enter: ");
        scanf("%d", &input);
        if(input < 1 || input > 12)
        {
            printf("Invalid input!");
            pointBuy();
        } else if (input == 1)
        {
            printf("test");
        }
    }
    int welcomeMessage()
    {
        int input;
        borderLine();
        printf("Hi, my name is Johnson! I am a friendly little chatbot!\n");
        printf("I am here to help you build your Dungeons and Dragons character!\n");
        printf("We'll be working in 5th edition for now (it's the only one I actually know).\n");
        printf("If you notice any Oxford commas or excessive useages of exclamation marks,\n");
        printf("those are probably conscious and deliberate ;)\n");
        printf("Let's get started!\n");
        printf("Would you like to roll your own statistics, or use the 'point buy' system?\n");
        printf("1. Roll own statistics  2. Point buy\n");
        scanf("%d", &input);
        if(input < 1 || input > 2)
        {
            printf("Invalid input.");
            fflush(stdin);
            welcomeMessage();
        } else if(input == 1)
        {
            fflush(stdin);
            baseStatisticsInput();    
        } else if(input == 2)
        {   
            fflush(stdin);
            pointBuy();
        }
    }
 
     //program body
    welcomeMessage();
    return 0;
}