#include <stdio.h>
#include <stdlib.h>

void displayScore(FILE *file, int run, int wicket, int over, int ball)
{
    // fprintf(file, "\t<- Start ->\n\n");
    fprintf(file, "\tRuns : %d\n", run);
    fprintf(file, "\tWickets : %d\n", wicket);
    fprintf(file, "\tOvers : %d.%d\n", over, ball);
    fprintf(file, "|------------------|\n");
}

int main()
{
    int run = 0, over = 0, ball = 0, wicket = 0;

    FILE *outputFile = fopen("cricket_score.txt", "w");
    if (outputFile == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    while (1)
    {
        int score;
        printf("\nEnter score : ");
        scanf("%d", &score);
        fflush(stdin); //--> Clear input buffer

        switch (score)
        {
        case 0:
        {
            char dot;
            printf("Enter type of dot ball (..W for wicket, D for dot..) : ");
            scanf(" %c", &dot);
            fflush(stdin);

            if (dot == 'W' || dot == 'w')
            {
                wicket++;
                ball++;
                printf("Wicket taken!\n");
            }
            else if (dot == 'D' || dot == 'd')
            {
                ball++;
                printf("Dot ball.\n");
            }
            else
                printf("Invalid input\n");

            break;
        }

        case 1 ... 7:
        {
            char ballType;
            printf("Enter type of ball (..S for single, D for double, T for a triple, B for a boundary, X for Sixer, W for a wide ball, N for a No ball, R for a Run out..) : ");
            scanf(" %c", &ballType);
            fflush(stdin);

            switch (ballType)
            {
            case 'S':
            case 's':
            case 'D':
            case 'd':
            case 'T':
            case 't':
            case 'B':
            case 'b':
            case 'X':
            case 'x':
            {
                run += score;
                ball++;
                break;
            }

            case 'W':
            case 'w':
            {
                run += score;
                printf("Wide ball\n");
                break;
            }
            case 'N':
            case 'n':
            {
                run += score;
                // ball--;
                printf("No ball, Free hit.\n");
                break;
            }
            case 'R':
            case 'r':
            {
                run += score;
                ball++;
                wicket++;
                printf("Wicket gone\n");
                break;
            }
            default:
                printf("Invalid input\n");
                break;
            }
            break;
        }

        case 200:
            printf("Exiting...\n");
            fclose(outputFile);
            return 0;

        default:
            printf("Invalid input\n");
            continue; //--> Skip the rest of the loop and start over
        }

        //--> Display current score
        displayScore(outputFile, run, wicket, over, ball);

        //--> Check for end of innings
        if (ball == 6)
        {
            over += 1;
            ball = 0;
        }

        if (over == 10 || wicket == 10)
        {
            printf("Innings Ended\n");
            break;
        }
    }

    fclose(outputFile);
    return 0;
}
