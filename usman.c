#include <stdio.h>
int main()
{
    int topic, score = 0;
    int case1q1, case1q2, case1q3, case1q4, case1q5, case1q6, case1q7, case1q8, case1q9, case1q10;
    int case2q1, case2q2, case2q3, case2q4, case2q5, case2q6, case2q7, case2q8, case2q9, case2q10;
    int case3q1, case3q2, case3q3, case3q4, case3q5, case3q6, case3q7, case3q8, case3q9, case3q10;
    int case4q1, case4q2, case4q3, case4q4, case4q5, case4q6, case4q7, case4q8, case4q9, case4q10;
    int case5q1, case5q2, case5q3, case5q4, case5q5, case5q6, case5q7, case5q8, case5q9, case5q10;
    int case6q1, case6q2, case6q3, case6q4, case6q5, case6q6, case6q7, case6q8, case6q9, case6q10;
    int case7q1, case7q2, case7q3, case7q4, case7q5, case7q6, case7q7, case7q8, case7q9, case7q10;
    int case8q1, case8q2, case8q3, case8q4, case8q5, case8q6, case8q7, case8q8, case8q9, case8q10;
    int case9q1, case9q2, case9q3, case9q4, case9q5, case9q6, case9q7, case9q8, case9q9, case9q10;
    int case10q1, case10q2, case10q3, case10q4, case10q5, case10q6, case10q7, case10q8, case10q9, case10q10;

    printf("\nWelcome to the C programming Quiz!\n");
    printf("Test your skills and see how much you know.\n\n");

    printf("There are 10 Multiple Choice Question in each Selected topic.\n");
    printf("You will get 1 point for each correct Answer.\n\n");

    printf("There are various topics for Quiz\n");
    printf("1: General Knowledge\n2: Sports\n3: Chemistry\n4: Physics\n5: Mathematics\n6: History\n7: Computer Science\n8: Biology\n9: Programming\n10: IQ\n");

    printf("Enter the Number of the topic you want to Quiz yourself\n");
    scanf("%d", &topic);

    switch (topic)
    {
    case 1:
        printf("\nYou have choosed General Knowledge\n");

        // Question 1
        printf("\nQuestion 1: \n");
        printf("How many continents are there?\n");
        printf("1: 5 \t 2: 6\n3: 7\t 4: 8\n");
        scanf("%d", &case1q1);
        if (case1q1 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("What is the capital of the United States?\n");
        printf("1: New York \t 2: Washington, D.C.\n3: Los Angeles\t 4: Chicago\n");
        scanf("%d", &case1q2);
        if (case1q2 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("What is the smallest country in the world?\n");
        printf("1: Monaco \t 2: Vatican City\n3: San Marino\t 4: Liechtenstein\n");
        scanf("%d", &case1q3);
        if (case1q3 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("Which is the longest river in the world?\n");
        printf("1: Amazon \t2: Nile\n3: Nile\t\t4: Mississippi\n");
        scanf("%d", &case1q4);
        if (case1q4 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("Which country is known as the \"Land of the Midnight Sun\"?\n");
        printf("1: Iceland \t 2: Finland\n3: Sweden\t 4: Norway\n");
        scanf("%d", &case1q5);
        if (case1q5 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("What is the capital of Japan?\n");
        printf("1: Tokyo \t 2: Seoul\n3: Beijing\t 4: Bangkok\n");
        scanf("%d", &case1q6);
        if (case1q6 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("Which is the largest ocean on Earth?\n");
        printf("1: Atlantic Ocean \t 2: Indian Ocean\n3: Pacific Ocean\t 4: Arctic Ocean\n");
        scanf("%d", &case1q7);
        if (case1q7 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("What is the tallest mountain in the world?\n");
        printf("1: Mount Kilimanjaro \t 2: K2\n3: Mount Elbrus\t\t 4: Mount Everest\n");
        scanf("%d", &case1q8);
        if (case1q8 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("Which country gifted the Statue of Liberty to the United States?\n");
        printf("1: England \t 2: France\n3: Spain\t 4: Italy\n");
        scanf("%d", &case1q9);
        if (case1q9 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("Who painted the \"Mona Lisa\"?\n");
        printf("1: Vincent van Gogh \t 2: Pablo Picasso\n3: Leonardo da Vinci\t 4: Claude Monet\n");
        scanf("%d", &case1q10);
        if (case1q10 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }

        break;

    case 2:
        printf("\nYou have choosed Sports\n");

        // Question 1
        printf("\nQuestion 1: \n");
        printf("Which country has won the most FIFA World Cups in football?\n");
        printf("1: Germany \t 2: Brazil\n3: Italy\t 4: Argentina\n");
        scanf("%d", &case2q1);
        if (case2q1 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("Who is known as the \"Lightning Bolt\" in athletics?\n");
        printf("1: Carl Lewis \t 2: Mo Farah\n3: Usain Bolt\t 4: Michael Johnson\n");
        scanf("%d", &case2q2);
        if (case2q2 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("Which country has won the most Cricket World Cups?\n");
        printf("1: India \t 2: England\n3: West Indies\t 4: Austraila\n");
        scanf("%d", &case2q3);
        if (case2q3 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("What is the duration of a standard football match?\n");
        printf("1: 60 minutes \t2: 80 minutes\n3: 90 minutes\t4: 120 minutes\n");
        scanf("%d", &case2q4);
        if (case2q4 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("Who holds the record for the most goals in football history?\n");
        printf("1: Pele \t\t 2: Lionel Messi\n3: Diego Maradona\t 4: Cristiano Ronaldo\n");
        scanf("%d", &case2q5);
        if (case2q5 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("Which country won the first-ever FIFA World Cup?\n");
        printf("1: Uruguay \t 2: Brazil\n3: Germany\t 4: Argentina\n");
        scanf("%d", &case2q6);
        if (case2q6 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("What is the nickname of the New Zealand rugby team?\n");
        printf("1: Springboks \t 2: Wallabies\n3: Kiwis\t 4: All Blacks\n");
        scanf("%d", &case2q7);
        if (case2q7 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("Which bowler has the most wickets in Test cricket history?\n");
        printf("1: Shane Warne \t\t 2: Muttiah Muralitharan\n3: James Anderson\t 4: Glenn McGrath\n");
        scanf("%d", &case2q8);
        if (case2q8 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("Who won the first ICC Cricket World Cup in 1975?\n");
        printf("1: England \t 2: India\n3: Australia\t 4: West Indies\n");
        scanf("%d", &case2q9);
        if (case2q9 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("What is the duration of a standard professional boxing round?\n");
        printf("1: 2 minutes \t 2: 3 minutes\n3: 4 minutes\t 4: 5 minutes\n");
        scanf("%d", &case2q10);
        if (case2q10 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 3:
        printf("\nYou have choosed Chemistry\n");

        // Question 1
        printf("\nQuestion 1: \n");
        printf("What is the chemical symbol for water?\n");
        printf("1: H2O2\t 2: H2O\n3: HO2\t 4: HO\n");
        scanf("%d", &case3q1);
        if (case3q1 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("Which gas is most abundant in the Earth's atmosphere?\n");
        printf("1: Oxygen \t 2: Carbon Dioxide\n3: Nitrogen\t 4: Hydrogen\n");
        scanf("%d", &case3q2);
        if (case3q2 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("Which element is known as the \"king of chemicals\"?\n");
        printf("1: Carbon \t 2: Sulfur\n3: Hydrogen\t 4: Chlorine\n");
        scanf("%d", &case3q3);
        if (case3q3 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("What is formed when an acid reacts with a base?\n");
        printf("1: Water only \t\t2: Salt and water\n3: Gas and water\t4: Hydrogen gas\n");
        scanf("%d", &case3q4);
        if (case3q4 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("What type of bond involves the sharing of electrons?\n");
        printf("1: Ionic Bond \t\t 2: Covalent Bond\n3: Hydrogen Bond\t 4: Metallic Bond\n");
        scanf("%d", &case3q5);
        if (case3q5 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("Which compound is known as quicklime?\n");
        printf("1: CaO \t 2: CaCO3\n3: MgO\t 4: Na2CO3\n");
        scanf("%d", &case3q6);
        if (case3q6 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("What are elements in Group 18 of the periodic table called?\n");
        printf("1: Alkali Metals \t 2: Hallogens\n3: Noble Gases\t\t 4: Transition Metals\n");
        scanf("%d", &case3q7);
        if (case3q7 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("What is the lightest element?\n");
        printf("1: Helium \t 2: Hydrogen\n3: Oxygen\t 4: Lithium\n");
        scanf("%d", &case3q8);
        if (case3q8 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("Which acid is commonly found in vinegar?\n");
        printf("1: Citric Acid \t\t 2: Sulphuric Acid\n3: Hydrochloric Acid\t 4: Acetic Acid\n");
        scanf("%d", &case3q9);
        if (case3q9 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("Which radioactive element did Marie Curie discover?\n");
        printf("1: Uranium \t 2: Polonium\n3: Thorium\t 4: Radium\n");
        scanf("%d", &case3q10);
        if (case3q10 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 4:
        printf("\nYou have choosed Physics");
       
         // Question 1
        printf("\nQuestion 1: \n");
        printf("What is the unit of force?\n");
        printf("1: Joule\t 2: Watt\n3: Newton\t 4: Pascal\n");
        scanf("%d", &case4q1);
        if (case4q1 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("What is the speed of light in a vacuum?\n");
        printf("1: 3 x 10^6 m/s \t 2: 3 x 10^8 m/s\n3: 3 x 10^5 m/s \t 4: 3 x 10^3 m/s\n");
        scanf("%d", &case4q2);
        if (case4q2 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("Which physical quantity is measured in joules?\n");
        printf("1: Power \t 2: Energy\n3: Force\t 4: Pressure\n");
        scanf("%d", &case4q3);
        if (case4q3 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("What does the first law of thermodynamics state?\n");
        printf("1: Energy is created \t2: Energy is destroyed\n3: Energy is infinite\t4: Energy is conserved\n");
        scanf("%d", &case4q4);
        if (case4q4 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("What does inertia depend on?\n");
        printf("1: Velocity \t 2: Mass\n3: Force\t 4: Acceleration\n");
        scanf("%d", &case4q5);
        if (case4q5 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("Which law explains the motion of a rocket?\n");
        printf("1: Newton's First Law \t 2: Newton's Second Law\n3: Newton's Third Law\t 4: Law of Conservation of Energy\n");
        scanf("%d", &case4q6);
        if (case4q6 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("What is the term for the product of mass and velocity?\n");
        printf("1: Work \t 2: Momentum\n3: Force \t 4: Energy\n");
        scanf("%d", &case4q7);
        if (case4q7 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("What is the unit of temperature in the SI system?\n");
        printf("1: Celcius \t 2: Fahrenheit\n3: Kelvin\t 4: Joule\n");
        scanf("%d", &case4q8);
        if (case4q8 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("What is absolute zero?\n");
        printf("1: 0 C \t\t 2: 0 K\n3: -273 K \t 4: 100 C\n");
        scanf("%d", &case4q9);
        if (case4q9 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("What is the bending of light called?\n");
        printf("1: Reflection \t 2: Refraction\n3: Diffraction \t 4: Dispersion\n");
        scanf("%d", &case4q10);
        if (case4q10 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 5:
        printf("\nYou have choosed Mathematics\n");
        
         // Question 1
        printf("\nQuestion 1: \n");
        printf("What is (x + 2)(x - 3)?\n");
        printf("1: x^2 - x - 6 \t 2: x^2 + x - 6\n3: x^2 + x + 6 \t 4: x^2 - x + 6\n");
        scanf("%d", &case5q1);
        if (case5q1 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("Solve for x: 2x+5=15\n");
        printf("1: 5 \t 2: 10\n3: 2.5 \t 4: 8\n");
        scanf("%d", &case5q2);
        if (case5q2 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("What is the area of a rectangle with length 10 and width 5?\n");
        printf("1: 25 \t 2: 50\n3: 30 \t 4: 15\n");
        scanf("%d", &case5q3);
        if (case5q3 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("What is the formula for the area of a circle?\n");
        printf("1: (pi)r^2 \t 2: 2(pi)r\n3: (pi)r^2 \t 4: (pi)d\n");
        scanf("%d", &case5q4);
        if (case5q4 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("What is the hypotenuse of a right triangle with legs 3 and 4?\n");
        printf("1: 5 \t 2: 6\n3: 7 \t 4: 8\n");
        scanf("%d", &case5q5);
        if (case5q5 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("What is the mean of 5, 10, 15, and 20?\n");
        printf("1: 10 \t 2: 12.5\n3: 15 \t 4: 25\n");
        scanf("%d", &case5q6);
        if (case5q6 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("If a die is rolled, what is the probability of rolling a 6?\n");
        printf("1: 1/6 \t 2: 1/3\n3: 1/2 \t 4: 2/3\n");
        scanf("%d", &case5q7);
        if (case5q7 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("Is 17 a prime number?\n");
        printf("1: Yes \t 2: No\n");
        scanf("%d", &case5q8);
        if (case5q8 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("If a coin is tossed, what is the probability of getting heads??\n");
        printf("1: 1/2 \t 2: 1/3\n3: 1 \t 4: 1/4\n");
        scanf("%d", &case5q9);
        if (case5q9 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("What is the probability of rolling an even number on a standard six-sided die?\n");
        printf("1: 1/2 \t 2: 1/3\n3: 2/3 \t 4: 1/6\n");
        scanf("%d", &case5q10);
        if (case5q10 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 6:
        printf("\nYou have choosed History\n");

         // Question 1
        printf("\nQuestion 1: \n");
        printf("The Great Wall of China was built primarily to protect against which group?\n");
        printf("1: Huns \t 2: Mongols\n3: Japanese \t 4: Koreans\n");
        scanf("%d", &case6q1);
        if (case6q1 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("Who is known as the \"Father of History\"?\n");
        printf("1: Herodotus \t 2: Socrates\n3: Aristotle \t 4: Plato\n");
        scanf("%d", &case6q2);
        if (case6q2 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("Which civilization is credited with the invention of writing?\n");
        printf("1: Egyptians \t 2: Greeks\n3: Sumerians \t 4: Indus Valley Civilization\n");
        scanf("%d", &case6q3);
        if (case6q3 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("Who was the Muslim leader during the Crusades known for recapturing Jerusalem?\n");
        printf("1: Salauddin \t\t 2: Genghis Khan\n3: Sultan Suleiman \t 4: Timur\n");
        scanf("%d", &case6q4);
        if (case6q4 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("Who discovered America in 1492?\n");
        printf("1: Amerigo Vespucci \t 2: Christopher Columbus\n3: Vasco da Gamma \t 4: Ferdinand Magellan\n");
        scanf("%d", &case6q5);
        if (case6q5 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("The French Revolution began in which year?\n");
        printf("1: 1789 \t 2: 1793\n3: 1804 \t 4: 1815\n");
        scanf("%d", &case6q6);
        if (case6q6 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("Who was the first President of the United States?\n");
        printf("1: Abraham Lincoln \t 2: John Adams\n3: Thomas Jefferson \t 4: George Washington\n");
        scanf("%d", &case6q7);
        if (case6q7 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("In which year did the Industrial Revolution begin?\n");
        printf("1: 16th century \t 2: 17th century\n3: 18th century \t 4: 19th century\n");
        scanf("%d", &case6q8);
        if (case6q8 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("Who was the German leader during World War II?\n");
        printf("1: Otto von Bismarck \t 2: Kaiser Wilhelm II\n3: Heinrich Himmler \t 4: Adolf Hitler\n");
        scanf("%d", &case6q9);
        if (case6q9 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("When was the World War II started\n");
        printf("1: 1941 \t 2: 1940\n3: 1939 \t 4: 1938\n");
        scanf("%d", &case6q10);
        if (case6q10 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 7:
        printf("\nYou have choosed Computer Science\n");
        
         // Question 1
        printf("\nQuestion 1: \n");
        printf("Which part of the computer performs calculations?\n");
        printf("1: Monitor \t 2: CPU\n3: GPU \t\t 4: RAM\n");
        scanf("%d", &case7q1);
        if (case7q1 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("What does RAM stand for?\n");
        printf("1: Random Access Memory \t 2: Read-Only Memory\n3: Rapid Access Memory \t\t 4: Run Access Memory\n");
        scanf("%d", &case7q2);
        if (case7q2 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("What is the smallest unit of data in a computer?\n");
        printf("1: Byte \t 2: Bit\n3: Nibble \t 4: Word\n");
        scanf("%d", &case7q3);
        if (case7q3 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("What is the main function of an operating system?\n");
        printf("1: Virus Protection \t 2: Manage hardware and software resources\n3: Wite code \t\t 4: Play music\n");
        scanf("%d", &case7q4);
        if (case7q4 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("What does GUI stand for?\n");
        printf("1: General User Interface \t 2: Graphical User Interface\n3: Graphical Utility Interface \t 4: General Utility Interface\n");
        scanf("%d", &case7q5);
        if (case7q5 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("Which of these is an open-source operating system?\n");
        printf("1: Windows \t 2: Linux\n3: MacOS \t 4: iOS\n");
        scanf("%d", &case7q6);
        if (case7q6 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("What does IP stand for in networking?\n");
        printf("1: Internet Protocol \t 2: Inter Protocol\n3: Intranet Protocol \t 4: Internal Protocol\n");
        scanf("%d", &case7q7);
        if (case7q7 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("What does DNS stand for?\n");
        printf("1: Domain Name Service \t\t 2: Domain Name System\n3: Digital Network System \t 4: Data Name Service\n");
        scanf("%d", &case7q8);
        if (case7q8 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("What is the full form of LAN?\n");
        printf("1: Large Area Network \t 2: Local Area Network\n3: Long Access Network \t 4: Low Area Network\n");
        scanf("%d", &case7q9);
        if (case7q9 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("What does BUS stand for in computer architecture?\n");
        printf("1: Binary User System \t 2: Built-in Universal System\n3: Binary Unit System \t 4: None of these\n");
        scanf("%d", &case7q10);
        if (case7q10 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 8:
        printf("\nYou have choosed Biology\n");
        
         // Question 1
        printf("\nQuestion 1: \n");
        printf("What is the basic unit of life?\n");
        printf("1: Tissue \t 2: Cell\n3: Organ \t 4: Organism\n");
        scanf("%d", &case8q1);
        if (case8q1 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("What is the powerhouse of the cell?\n");
        printf("1: Ribosome \t 2: Nucleus\n3: Golgi body \t 4: Mitochondria\n");
        scanf("%d", &case8q2);
        if (case8q2 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("Which part of the brain controls balance and coordination?\n");
        printf("1: Cerebrum \t 2: Cerebellum\n3: Brainstem \t 4: Hypothalamus\n");
        scanf("%d", &case8q3);
        if (case8q3 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("What type of tissue transports water in plants?\n");
        printf("1: Phloem \t 2: Xylem\n3: Epidermis \t 4: Cambium\n");
        scanf("%d", &case8q4);
        if (case8q4 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("What are the reproductive structures in flowers called?\n");
        printf("1: Leaves \t\t 2: Petals\n3: Stigma and stamen \t 4: Stem\n");
        scanf("%d", &case8q5);
        if (case8q5 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("How many chromosomes are there in a normal human cell?\n");
        printf("1: 23 \t 2: 46\n3: 48 \t 4: 25\n");
        scanf("%d", &case8q6);
        if (case8q6 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("What is the genetic material of a virus?\n");
        printf("1: Proteins \t 2: Carbohydrates\n3: Lipids \t 4: DNA or RNA\n");
        scanf("%d", &case8q7);
        if (case8q7 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("Which type of blood group is called the universal donor?\n");
        printf("1: A \t 2: B\n3: AB \t 4: O\n");
        scanf("%d", &case8q8);
        if (case8q8 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("What is the study of fungi called?\n");
        printf("1: Zoology \t 2: Botany\n3: Mycology \t 4: Ecology\n");
        scanf("%d", &case8q9);
        if (case8q9 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("Which organ is responsible for detoxifying chemicals in the human body?\n");
        printf("1: Heart \t 2: Kidney\n3: Lungs \t 4: Liver\n");
        scanf("%d", &case8q10);
        if (case8q10 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 9:
        printf("\nYou have choosed Programming\n");
        
         // Question 1
        printf("\nQuestion 1: \n");
        printf("Which of the following is not a programming language?\n");
        printf("1: Python \t 2: HTML\n3: JavaScript \t 4: Java\n");
        scanf("%d", &case5q1);
        if (case5q1 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("What is the main function of a variable in programming?\n");
        printf("1: Store data \t\t 2: Perform Calculations\n3: Display Output \t 4: Debug errors\n");
        scanf("%d", &case5q2);
        if (case5q2 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("What is an algorithm?\n");
        printf("1: A programming language \t 2: A set of rules ot steps to solve a problem\n3: A debugging tool \t\t 4: A type of data structure\n");
        scanf("%d", &case5q3);
        if (case9q3 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("What does a break statement do in a loop?\n");
        printf("1: Skips the next iteration \t 2: Restart the loop immediately\n3: Restart the loop \t\t 4: Does nothing\n");
        scanf("%d", &case9q4);
        if (case9q4 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("Which of these is a conditional operator in C?\n");
        printf("1: && \t 2: ?:\n3: == \t 4: =\n");
        scanf("%d", &case9q5);
        if (case9q5 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("Which loop executes at least once, regardless of condition?\n");
        printf("1: for loop \t\t 2: while loop\n3: do-while loop \t 4: infinte loop\n");
        scanf("%d", &case9q6);
        if (case9q6 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("Which data type is used to store decimal values in C?\n");
        printf("1: int \t\t 2: char\n3: double \t 4: float\n");
        scanf("%d", &case9q7);
        if (case9q7 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("What does IDE stand for in programming?\n");
        printf("1: Integrated Development Environment \t 2: Internal Debugging Environment\n3: Independent Development Emulator \t 4: Integrated Debugging Emulator\n");
        scanf("%d", &case9q8);
        if (case9q8 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("What is the full form of API?\n");
        printf("1: Application Process Interface \t 2: Application Protocol Interface\n3: Application Programming Interface \t 4: Application Process Integration\n");
        scanf("%d", &case9q9);
        if (case9q9 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("Which symbol is used to terminate a statement in C++?\n");
        printf("1: , \t 2: .\n3: : \t 4: ;\n");
        scanf("%d", &case9q10);
        if (case9q10 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    case 10:
        printf("\nYou have choosed IQ\n");
        
         // Question 1
        printf("\nQuestion 1: \n");
        printf("If you rearrange the letters \"CIFAIPC,\" you get the name of a:\n");
        printf("1: Country \t 2: Ocean\n3: City \t 4: Animal\n");
        scanf("%d", &case10q1);
        if (case10q1 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 2
        printf("\n\nQuestion 2: \n");
        printf("What comes next in the sequence: 1, 4, 9, 16, 25, ...?\n");
        printf("1: 30 \t 2: 64\n3: 36 \t 4: 49\n");
        scanf("%d", &case10q2);
        if (case10q2 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 3
        printf("\n\nQuestion 3: \n");
        printf("Which number should replace the question mark: 3, 6, 9, ?, 15?\n");
        printf("1: 10 \t 2: 11\n3: 12 \t 4: 13\n");
        scanf("%d", &case10q3);
        if (case10q3 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 4
        printf("\n\nQuestion 4: \n");
        printf("Which is the odd one out?\n");
        printf("1: Triangle \t 2: Circle\n3: Rectangle \t 4: Cube\n");
        scanf("%d", &case10q4);
        if (case10q4 == 4)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 5
        printf("\n\nQuestion 5: \n");
        printf("A car travels at 60 km/h for 2 hours. How far does it travel?\n");
        printf("1: 60 km \t 2: 100 km\n3: 120 km \t 4: 150 km\n");
        scanf("%d", &case10q5);
        if (case10q5 == 3)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 6
        printf("\n\nQuestion 6: \n");
        printf("What comes next in the series: A, C, E, G, ...?\n");
        printf("1: H \t 2: I\n3: J \t 4: K\n");
        scanf("%d", &case10q6);
        if (case10q6 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 7
        printf("\n\nQuestion 7: \n");
        printf("What comes next in the pattern: 2, 5, 10, 17, 26, ...?\n");
        printf("1: 35 \t 2: 37\n3: 38 \t 4: 39\n");
        scanf("%d", &case10q7);
        if (case10q7 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 8
        printf("\n\nQuestion 8: \n");
        printf("Which letter is missing: _BCD, EFGH, IJKL?\n");
        printf("1: A \t 2: M\n3: X \t 4: N\n");
        scanf("%d", &case10q8);
        if (case10q8 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 9
        printf("\n\nQuestion 9: \n");
        printf("Which word is a synonym of \"happy\"?\n");
        printf("1: Sad \t\t 2: Joyful\n3: Angry \t 4: Tired\n");
        scanf("%d", &case10q9);
        if (case10q9 == 2)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        // Question 10
        printf("\n\nQuestion 10: \n");
        printf("If \"CAT\" is coded as 3120, how is \"DOG\" coded?\n");
        printf("1: 4150 \t 2: 4170\n3: 4151 \t 4: 5121\n");
        scanf("%d", &case10q10);
        if (case10q10 == 1)
        {
            printf("\nRight Answer");
            score++;
        }
        else
        {
            printf("\nWrong Answer");
        }

        printf("\n\nYour score is %d\n", score);

        if (score >= 8)
        {
            printf("\nWelldone!\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\nGood!\n");
        }
        else
        {
            printf("\nFair!\n");
        }
        break;

    default:
        printf("\nInvalid option\n");
      break;
    }
    return 0;
}   