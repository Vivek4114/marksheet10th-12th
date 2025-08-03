// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf("Enter Your name of Student :");
    scanf("%s", name);

    int class;
    printf("Choose your class \n *Enter 1 for 10th  Enter 2 for 12th*\n");
    scanf("%d", &class);

    char coll[50] = "G S G College,Umarkhed";

    if (class == 1)
    {
        int mar, hin, eng, math, sci, soc;
        printf("\n*Please Enter your marks as per the Below Table*\n");
        printf("Note - **Enter marks below or equal to 100**\n\n");
        printf("Enter your marks of Marathi:\n");
        scanf("%d", &mar);
        printf("Enter your marks of Hindi:\n");
        scanf("%d", &hin);
        printf("Enter your marks of English:\n");
        scanf("%d", &eng);
        printf("Enter your marks of Mathematics:\n");
        scanf("%d", &math);
        printf("Enter your marks of Science:\n");
        scanf("%d", &sci);
        printf("Enter your marks of social-science:\n");
        scanf("%d", &soc);
        int total = mar + eng + hin + math + sci + soc;
        float avg = total / 6.0;
        char Result[10];

        if ((mar <= 100 && mar >= 0) && (hin <= 100 && hin >= 00) && (eng <= 100 && eng >= 00) && (math <= 100 && math >= 0) && (sci <= 100 && sci >= 00) && (soc <= 100 && soc >= 00))
        {

            if ((mar <= 100 && mar >= 35) && (hin <= 100 && hin >= 35) && (eng <= 100 && eng >= 35) && (math <= 100 && math >= 35) && (sci <= 100 && sci >= 35) && (soc <= 100 && soc >= 35))
            {
                strcpy(Result, "Pass");
            }

            else if ((mar < 35 && mar >= 0) || (hin < 35 && hin >= 0) || (eng < 35 && eng >= 0) || (math < 35 && math >= 0) || (sci < 35 && sci >= 0) || (soc < 35 && mar >= 0))
            {
                strcpy(Result, "fail");
            }

            printf("|------------------------------------------------------------|\n");
            printf("|\tName  \t\t\t\t|\t\t %s \t\t\t\t\t\t |\n", name);
            printf("|------------------------------------------------------------|\n");
            printf("|\tClass  \t\t\t\t|\t\t 10 th \t\t\t\t\t\t |\n");
            printf("|------------------------------------------------------------|\n");
            printf("|\tCollege \t\t\t|\t\t %s \t |\n", coll);
            printf("|------------------------------------------------------------|\n");

            printf("|\t\tSR\t\t|\t\tSubject\t\t\t|\t Marks\t\t\t |\n");
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t1.\t\t|\t\tMarathi\t\t\t|\t %d \t\t\t |\n", mar);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t2.\t\t|\t\tHindi\t\t\t|\t %d \t\t\t |\n", hin);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t3.\t\t|\t\tEnglish\t\t\t|\t %d \t\t\t |\n", eng);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t4.\t\t|\t\tMathematics\t\t|\t %d \t\t\t |\n", math);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t5.\t\t|\t\tScience\t\t\t|\t %d \t\t\t |\n", sci);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t6.\t\t|\t\tSocial-science\t|\t %d \t\t\t |\n", soc);
            printf("|------------------------------------------------------------|\n");

            printf("|\t\t\tTotal \t\t\t\t|\t\t %d \t\t\t\t |\n", total);
            printf("|------------------------------------------------------------|\n");

            printf("|\t\t\tAverage \t\t\t|\t\t %.2f \t\t\t\t |\n", avg);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t\t Result\t\t\t\t|\t\t %s \t\t\t\t |\n", Result);
            printf("|------------------------------------------------------------|\n");
        }
        else
        {
            printf("Invalid marks Please Enter Again:");
        }
    }

    else if (class == 2)
    {

        int mar, bio, eng, math, phy, che;
        printf("\n*Please Enter your marks as per the Below Table*\n");
        printf("Note - **Enter marks below or equal to 100**\n\n");
        printf("Enter your marks of Marathi:\n");
        scanf("%d", &mar);
        printf("Enter your marks of English:\n");
        scanf("%d", &eng);
        printf("Enter your marks of Mathematics:\n");
        scanf("%d", &math);
        printf("Enter your marks of Chemistry:\n");
        scanf("%d", &che);
        printf("Enter your marks of Physics:\n");
        scanf("%d", &phy);
        printf("Enter your marks of Biology:\n");
        scanf("%d", &bio);

        int total = mar + eng + bio + math + phy + che;
        float avg = total / 6.0;
        char Result[10];

        if ((mar <= 100 && mar >= 00) && (bio <= 100 && bio >= 00) && (eng <= 100 && eng >= 00) && (math <= 100 && math >= 00) && (che <= 100 && che >= 00) && (phy <= 100 && phy >= 00))
        {

            if ((mar <= 100 && mar >= 35) && (bio <= 100 && bio >= 35) && (eng <= 100 && eng >= 35) && (math <= 100 && math >= 35) && (che <= 100 && che >= 35) && (phy <= 100 && phy >= 35))
            {

                strcpy(Result, "Pass");
            }

            else if ((mar < 35 && mar >= 0) || (bio < 35 && bio >= 0) || (eng < 35 && eng >= 0) || (math < 35 && math >= 0) || (che < 35 && che >= 0) || (phy < 35 && phy >= 0))
            {
                strcpy(Result, "fail");
            }

            printf("|------------------------------------------------------------|\n");
            printf("|\tName  \t\t\t\t|\t\t %s \t\t\t\t\t\t |\n", name);
            printf("|------------------------------------------------------------|\n");
            printf("|\tClass  \t\t\t\t|\t\t 12 th \t\t\t\t\t\t |\n");
            printf("|------------------------------------------------------------|\n");
            printf("|\tCollege \t\t\t|\t\t %s \t |\n", coll);
            printf("|------------------------------------------------------------|\n");

            printf("|\t\tSR\t\t|\t\tSubject\t\t\t|\t Marks\t\t\t |\n");
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t1.\t\t|\t\tMarathi\t\t\t|\t %d \t\t\t |\n", mar);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t2.\t\t|\t\tEnglish\t\t\t|\t %d \t\t\t |\n", eng);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t3.\t\t|\t\tMathematics\t\t|\t %d \t\t\t |\n", math);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t4.\t\t|\t\tChemistry\t\t|\t %d \t\t\t |\n", che);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t5.\t\t|\t\tPhysics\t\t\t|\t %d \t\t\t |\n", phy);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t6.\t\t|\t\tBiology\t\t\t|\t %d \t\t\t |\n", bio);
            printf("|------------------------------------------------------------|\n");

            printf("|\t\t\tTotal \t\t\t\t|\t\t %d \t\t\t\t |\n", total);
            printf("|------------------------------------------------------------|\n");

            printf("|\t\t\tAverage \t\t\t|\t\t %.2f \t\t\t\t |\n", avg);
            printf("|------------------------------------------------------------|\n");
            printf("|\t\t\t Result\t\t\t\t|\t\t %s \t\t\t\t |\n", Result);
            printf("|------------------------------------------------------------|\n");
        }
        else
        {
            printf("Invalid marks Please Enter Again:");
        }
    }
    else
    {
        printf("Invlid Class");
    }
    return 0;
}