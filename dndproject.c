#include<stdio.h>

int main()
{   
    //variables

    int maxStatScore = 20;
    int minStatScore = 1;
    int strengthScore;
    int dexterityScore;
    int constitutionScore;
    int intelligenceScore;
    int wisdomScore;
    int charismaScore;
    int proficiencyBonus = 2;

    //function library

    int strengthScoreInput()
    {
    printf("Input your strength score (a number between 1 and 20): "); 
    scanf("%d", &strengthScore);

    if(strengthScore > maxStatScore || strengthScore < minStatScore)
    {
        printf("Invalid input.\n");
        fflush(stdin);
        strengthScoreInput();
    
    } else {
        fflush(stdin);
        printf("Great, your base strength score is %d.\n", strengthScore);
    }
    }
 
    int dexterityScoreInput()
    {
    printf("Input your dexterity score (a number between 1 and 20): ");
    scanf("%d", &dexterityScore);
    if(dexterityScore > maxStatScore || dexterityScore < minStatScore)
    {
        printf("Invalid input.\n");
        fflush(stdin);
        dexterityScoreInput();
    } else {
        fflush(stdin);
        printf("Great, your base dexterity score is %d.\n", dexterityScore);
    }
    }

    int constitutionScoreInput()
    {
        printf("Input your constitution score (a number between 1 and 20): ");
        scanf("%d", &constitutionScore);
        if(constitutionScore > maxStatScore || constitutionScore < minStatScore)
    {
        printf("Invalid input.\n");
        fflush(stdin);
        constitutionScoreInput();
    } else {
        fflush(stdin);
        printf("Great, your base constitution score is %d.\n", constitutionScore);
    }
    }

    int intelligenceScoreInput()
    {
    printf("Input your intelligence score (a number between 1 and 20): ");
    scanf("%d", &intelligenceScore);
    if(intelligenceScore > maxStatScore || intelligenceScore < minStatScore)
    {
        printf("Invalid input.\n");
        fflush(stdin);
        intelligenceScoreInput();
    } else {
        fflush(stdin);
        printf("Great, your base Intelligence score is %d.\n", intelligenceScore);
    }
    }

    int wisdomScoreInput()
    {
        printf("Input your wisdom score (a number between 1 and 20): ");
        scanf("%d", &wisdomScore);
        if(wisdomScore > maxStatScore || wisdomScore < minStatScore)
    {
        printf("Invalid input.\n");
        fflush(stdin);
        wisdomScoreInput();
    } else {
        fflush(stdin);
        printf("Great, your base wisdom score is %d.\n", wisdomScore);
    }
    }

    int charismaScoreInput()
    {
        printf("Input your charisma score (a number between 1 and 20): ");
        scanf("%d", &charismaScore);
        if(charismaScore > maxStatScore || charismaScore < minStatScore)
    {
        printf("Invalid input.\n");
        fflush(stdin);
        charismaScoreInput();
    } else {
        fflush(stdin);
        printf("Great, your base charisma score is %d.\n", charismaScore);
    }
    }

    int characterStatisticsPrintout()
    {
        printf("Your base statistics:\n");
        if(strengthScore >= 0 && strengthScore <= 9){
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
    }

    int welcomeMessage()
    {
        printf("Welcome to this DND adventure.\n");
    }

    int baseStatisticsInput()
    {
    strengthScoreInput();
    dexterityScoreInput();
    constitutionScoreInput();
    intelligenceScoreInput();
    wisdomScoreInput();
    charismaScoreInput();
    characterStatisticsPrintout();
    }

    int redoStats()
    {
        int input;
        printf("Are you happy with these statistics?\n");
        printf("1. Yes, I'd like to continue.\n");  
        printf("2. No, I'd like to redo them.\n");
        printf("Select an option and press enter: ");
        scanf("%d", &input);
        if(input == 1)
        {
            printf("placeholder text");
            fflush(stdin);
            return 0;
        } else if (input == 2)
        {   
            
            printf("Which statistics would you like to redo?\n");
            printf("7. All of them!");
            fflush(stdin);
            scanf("%d", &input);
            if(input == 7)
            {
                baseStatisticsInput();
            }
        }
    }

   

     //program body
    welcomeMessage();
    baseStatisticsInput();
    redoStats();
    return 0;
}