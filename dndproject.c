#include<stdio.h>

int main()
{   
    //variables

    int maxStatScore = 20;
    int minStatScore = 1;
    int pointPool = 27;
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

    int pointAllocation()
            {
            int input;
            borderLine();
            printf("Select an option to add or remove a point from a statistic.\n");
            printf("15 points is the maximum, 8 is the minimum.\n");
            printf("\n");
            printf("Point pool: %d\n", pointPool);
            printf("\n\n");
            printf("Scores:\n");
            if(strengthScore >= 0 && strengthScore <= 9)
            {
                printf("Strength:     %d     1. Strength Up         7. Strength Down\n", strengthScore);
            } else {
                printf("Strength:     %d    1. Strength Up         7. Strength Down\n", strengthScore);
            }
            if(dexterityScore >= 0 && dexterityScore <= 9)
            {
                printf("Dexterity:    %d     2. Dexterity Up        8. Dexterity Down\n", dexterityScore);
            } else {
                printf("Dexterity:    %d    2. Dexterity Up        8. Dexterity Down\n", dexterityScore);
            }
            if(constitutionScore >= 0 && constitutionScore <= 9)
            {
                printf("Constitution: %d     3. Constitution Up     9. Constitution Down\n", constitutionScore);
            } else {
                printf("Constitution: %d    3. Constitution Up     9. Constitution Down\n", constitutionScore);
            }
            if(intelligenceScore >= 0 && intelligenceScore <= 9)
            {
                printf("Intelligence: %d     4. Intelligence Up     10. Intelligence Down\n", intelligenceScore);
            } else {
                printf("Intelligence: %d    4. Intelligence Up     10. Intelligence Down\n", intelligenceScore);
            }
            if(wisdomScore >= 0 && wisdomScore <= 9)
            {
                printf("Wisdom:       %d     5. Wisdom Up           11. Wisdom Down\n", wisdomScore);
            } else {
                printf("Wisdom:       %d    5. Wisdom Up           11. Wisdom Down\n", wisdomScore);
            }
            if(charismaScore >= 0 && charismaScore <= 9)
            {
                printf("Charisma:     %d     6. Charisma Up         12. Charisma Down\n", charismaScore);
            } else {
                printf("Charisma:     %d    6. Charisma Up         12. Charisma Down\n", charismaScore);
            }
            printf("\n");
            if(pointPool == 0)
            {
                borderLine();
                printf("Are you happy with these statistics?\n");
                printf("1. Yes 2. No\n");
                fflush(stdin);
                scanf("%d", &input);
                if(input == 1)
                {
                    printf("placeholder text for species selection\n");
                } else if (input == 2)
                {
                    printf("Reset your ability scores and start over?\n");
                    printf("1. Yes  2. No\n");
                    fflush(stdin);
                    scanf("%d", &input);
                    if(input < 1 || input > 2)
                    {
                        printf("Invalid input\n");
                        pointAllocation();
                    }
                    if(input == 1)
                    {
                        strengthScore = 8;
                        dexterityScore = 8;
                        constitutionScore = 8;
                        intelligenceScore = 8;
                        wisdomScore = 8;
                        charismaScore = 8;
                        pointPool = 27;
                        pointAllocation();
                    } else if (input == 2)
                    {
                        pointAllocation();
                    }
                }
            }
            printf("Select a number and press enter: ");
            scanf("%d", &input);
            if(input < 1 || input > 12)
            {
                printf("Invalid input!");
                pointAllocation();
            } else if (input == 1)
            {
                if(strengthScore <= 12)
                {
                    borderLine();
                    printf("\n");
                    printf("Strength increased by 1 point.\n");
                    pointPool--;
                    strengthScore++;
                    pointAllocation();
                } else if (strengthScore == 13) 
                {
                    borderLine();
                    printf("\n");
                    printf("Strength increased by 1 point.\n");
                    pointPool -= 2;
                    strengthScore++;
                    pointAllocation();    
                }   else if (strengthScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Strength increased by 1 point.\n");
                    pointPool -= 3;
                    strengthScore++;
                    pointAllocation();
                }   else if (strengthScore >= 15)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 7)
            {
                if(strengthScore == 15)
                {
                    borderLine();
                    printf("\n");
                    printf("Strength decreased by 1 point.\n");
                    pointPool += 3;
                    strengthScore--;
                    pointAllocation();
                } else if (strengthScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Strength decreased by 1 point.\n");
                    pointPool += 2;
                    strengthScore--;
                    pointAllocation();  
                } else if (strengthScore <= 13 && strengthScore != 8)
                {
                    borderLine();
                    printf("\n");
                    printf("Strength decreased by 1 point.\n");
                    pointPool++;
                    strengthScore--;
                    pointAllocation();
                } else if(strengthScore == 8)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 2)
            {
                if(dexterityScore <= 12)
                {
                    borderLine();
                    printf("\n");
                    printf("Dexterity increased by 1 point.\n");
                    pointPool--;
                    dexterityScore++;
                    pointAllocation();
                } else if (dexterityScore == 13) 
                {
                    borderLine();
                    printf("\n");
                    printf("Dexterity increased by 1 point.\n");
                    pointPool -= 2;
                    dexterityScore++;
                    pointAllocation();    
                }   else if (dexterityScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Dexterity increased by 1 point.\n");
                    pointPool -= 3;
                    dexterityScore++;
                    pointAllocation();
                }   else if (dexterityScore >= 15)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 8)
            {
                if(dexterityScore == 15)
                {
                    borderLine();
                    printf("\n");
                    printf("Dexterity decreased by 1 point.\n");
                    pointPool += 3;
                    dexterityScore--;
                    pointAllocation();
                } else if (dexterityScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Dexterity decreased by 1 point.\n");
                    pointPool += 2;
                    dexterityScore--;
                    pointAllocation();  
                } else if (dexterityScore <= 13 && dexterityScore != 8)
                {
                    borderLine();
                    printf("\n");
                    printf("Dexterity decreased by 1 point.\n");
                    pointPool++;
                    dexterityScore--;
                    pointAllocation();
                } else if(dexterityScore == 8)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 3)
            {
                if(constitutionScore <= 12)
                {
                    borderLine();
                    printf("\n");
                    printf("Constitution increased by 1 point.\n");
                    pointPool--;
                    constitutionScore++;
                    pointAllocation();
                } else if (constitutionScore == 13) 
                {
                    borderLine();
                    printf("\n");
                    printf("Constitution increased by 1 point.\n");
                    pointPool -= 2;
                    constitutionScore++;
                    pointAllocation();    
                }   else if (constitutionScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Constitution increased by 1 point.\n");
                    pointPool -= 3;
                    constitutionScore++;
                    pointAllocation();
                }   else if (constitutionScore >= 15)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 9)
            {
                if(constitutionScore == 15)
                {
                    borderLine();
                    printf("\n");
                    printf("Constitution decreased by 1 point.\n");
                    pointPool += 3;
                    constitutionScore--;
                    pointAllocation();
                } else if (constitutionScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Constitution decreased by 1 point.\n");
                    pointPool += 2;
                    constitutionScore--;
                    pointAllocation();  
                } else if (constitutionScore <= 13 && constitutionScore != 8)
                {
                    borderLine();
                    printf("\n");
                    printf("Constitution decreased by 1 point.\n");
                    pointPool++;
                    constitutionScore--;
                    pointAllocation();
                } else if(constitutionScore == 8)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 4)
            {
                if(intelligenceScore <= 12)
                {
                    borderLine();
                    printf("\n");
                    printf("Intelligence increased by 1 point.\n");
                    pointPool--;
                    intelligenceScore++;
                    pointAllocation();
                } else if (intelligenceScore == 13) 
                {
                    borderLine();
                    printf("\n");
                    printf("Intelligence increased by 1 point.\n");
                    pointPool -= 2;
                    intelligenceScore++;
                    pointAllocation();    
                }   else if (intelligenceScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Intelligence increased by 1 point.\n");
                    pointPool -= 3;
                    intelligenceScore++;
                    pointAllocation();
                }   else if (intelligenceScore >= 15)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 10)
            {
                if(intelligenceScore == 15)
                {
                    borderLine();
                    printf("\n");
                    printf("Intelligence decreased by 1 point.\n");
                    pointPool += 3;
                    intelligenceScore--;
                    pointAllocation();
                } else if (intelligenceScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Intelligence decreased by 1 point.\n");
                    pointPool += 2;
                    intelligenceScore--;
                    pointAllocation();  
                } else if (intelligenceScore <= 13 && intelligenceScore != 8)
                {
                    borderLine();
                    printf("\n");
                    printf("Intelligence decreased by 1 point.\n");
                    pointPool++;
                    intelligenceScore--;
                    pointAllocation();
                } else if(intelligenceScore == 8)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 5)
            {
                if(wisdomScore <= 12)
                {
                    borderLine();
                    printf("\n");
                    printf("Wisdom increased by 1 point.\n");
                    pointPool--;
                    wisdomScore++;
                    pointAllocation();
                } else if (wisdomScore == 13) 
                {
                    borderLine();
                    printf("\n");
                    printf("Wisdom increased by 1 point.\n");
                    pointPool -= 2;
                    wisdomScore++;
                    pointAllocation();    
                }   else if (wisdomScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Wisdom increased by 1 point.\n");
                    pointPool -= 3;
                    wisdomScore++;
                    pointAllocation();
                }   else if (wisdomScore >= 15)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 11)
            {
                if(wisdomScore == 15)
                {
                    borderLine();
                    printf("\n");
                    printf("Wisdom decreased by 1 point.\n");
                    pointPool += 3;
                    wisdomScore--;
                    pointAllocation();
                } else if (wisdomScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Wisdom decreased by 1 point.\n");
                    pointPool += 2;
                    wisdomScore--;
                    pointAllocation();  
                } else if (wisdomScore <= 13 && wisdomScore != 8)
                {
                    borderLine();
                    printf("\n");
                    printf("Wisdom decreased by 1 point.\n");
                    pointPool++;
                    wisdomScore--;
                    pointAllocation();
                } else if(wisdomScore == 8)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 6)
            {
                if(charismaScore <= 12)
                {
                    borderLine();
                    printf("\n");
                    printf("Charisma increased by 1 point.\n");
                    pointPool--;
                    charismaScore++;
                    pointAllocation();
                } else if (charismaScore == 13) 
                {
                    borderLine();
                    printf("\n");
                    printf("Charisma increased by 1 point.\n");
                    pointPool -= 2;
                    charismaScore++;
                    pointAllocation();    
                }   else if (charismaScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Charisma increased by 1 point.\n");
                    pointPool -= 3;
                    charismaScore++;
                    pointAllocation();
                }   else if (charismaScore >= 15)
                {
                    borderLine();
                    pointAllocation();
                }
            } else if (input == 12)
            {
                if(charismaScore == 15)
                {
                    borderLine();
                    printf("\n");
                    printf("Charisma decreased by 1 point.\n");
                    pointPool += 3;
                    charismaScore--;
                    pointAllocation();
                } else if (charismaScore == 14)
                {
                    borderLine();
                    printf("\n");
                    printf("Charisma decreased by 1 point.\n");
                    pointPool += 2;
                    charismaScore--;
                    pointAllocation();  
                } else if (charismaScore <= 13 && charismaScore != 8)
                {
                    borderLine();
                    printf("\n");
                    printf("Charisma decreased by 1 point.\n");
                    pointPool++;
                    charismaScore--;
                    pointAllocation();
                } else if(charismaScore == 8)
                {
                    borderLine();
                    pointAllocation();
                }
            }
        }
        
    int pointBuyInitialise()
    {
        int input;
        int strengthScore = 8;
        int dexterityScore = 8;
        int constitutionScore = 8;
        int intelligenceScore = 8;
        int wisdomScore = 8;
        int charismaScore = 8;
        pointAllocation();
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
            pointBuyInitialise();
        }
    }
 
     //program body
    welcomeMessage();
    return 0;
}