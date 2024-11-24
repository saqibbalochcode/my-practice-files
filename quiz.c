#include <stdio.h>
int main()
{
    int topic, score = 0;
    int topic1q1, topic1q2, topic1q3, topic1q4, topic1q5, topic1q6, topic1q7, topic1q8, topic1q9, topic1q10;
    int topic2q1, topic2q2, topic2q3, topic2q4, topic2q5, topic2q6, topic2q7, topic2q8, topic2q9, topi2cq10;
    int topic3q1, topic3q2, topic3q3, topic3q4, topic3q5, topic3q6, topic3q7, topic3q8, topic3q9, topic3q10;
    int topic4q1, topic4q2, topic4q3, topic4q4, topic4q5, topic4q6, topic4q7, topic4q8, topic4q9, topic4q10;
    int topic5q1, topic5q2, topic5q3, topic5q4, topic5q5, topic5q6, topic5q7, topic5q8, topic5q9, topic5q10;

    printf("\t\t\tWELCOME TO THE QUIZ!!!\n\n");
    printf("Enter the Topic number you're interested in: \n");
    printf("1:World History.\n2:Basic Math.\n3:Famous Books and Authors.\n4:Space and Astronomy.\n5:General Science.\n\n\n");
    scanf("%d", &topic);
    switch (topic)
    { // TOPIC ONE
    case 1:
        printf("\n>>> You've chosen the World History quiz!\n\n");
        // Q1
        while (1)
        {

            printf("a)Who was the first emperor of Rome?\n");
            printf("\n1: Julius Caesar\n2: Augustus\n3: Nero\n4: Constantine\n\n");
            scanf("%d", &topic1q1);
            if (topic1q1 >= 1 && topic1q1 <= 4)
            {
                if (topic1q1 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Augustus\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q2
        while (1)
        {
            printf("b)What was the name of the ship that transported the Pilgrims to America in 1620?\n");
            printf("\n1: Mayflower\n2: Santa Maria\n3: Titanic\n4: Endeavour\n\n");
            scanf("\n%d", &topic1q2);
            if (topic1q2 >= 1 && topic1q2 <= 4)
            {
                if (topic1q2 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer!! Correct Answer is 1: Mayflower\n");
                }
                break;
            }
            else
            {
                printf("Enter an Answer between 1-4.");
            }
        }
        // Q3
        while (1)
        {

            printf("c)Which war was fought between the North and South regions of the United States?\n");
            printf("\n1: Revolutionary War\n2: Civil War\n3: Vietnam War\n4: World War II\n\n");
            scanf("%d", &topic1q3);
            if (topic1q3 >= 1 && topic1q3 <= 4)
            {
                if (topic1q3 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Civil War\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q4
        while (1)
        {

            printf("d)What year did World War I begin?\n");
            printf("\n1: 1910\n2: 1914\n3: 1923\n4: 1912\n\n");
            scanf("%d", &topic1q4);
            if (topic1q4 >= 1 && topic1q4 <= 4)
            {
                if (topic1q4 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: 1914\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q5
        while (1)
        {

            printf("e)Who was the first emperor of China?\n");
            printf("\n1: Qin Shi Huang\n2: Genghis Khan\n3: Alexander the Great\n4: Augustus\n\n");
            scanf("%d", &topic1q5);
            if (topic1q5 >= 1 && topic1q5 <= 4)
            {
                if (topic1q5 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Qin Shi Huang\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q6
        while (1)
        {

            printf("f)Which ancient civilization built the pyramids in Egypt?\n");
            printf("\n1: Romans\n2: Egyptians\n3: Mesopotamians\n4: Greeks\n\n");
            scanf("%d", &topic1q6);
            if (topic1q6 >= 1 && topic1q6 <= 4)
            {
                if (topic1q6 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Egyptians\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q7
        while (1)
        {

            printf("g)What event marked the start of the French Revolution?\n");
            printf("\n1: The signing of the Magna Carta\n2: The Storming of the Bastille\n3: The Battle of Waterloo\n4: The Reign of Terror\n\n");
            scanf("%d", &topic1q7);
            if (topic1q7 >= 1 && topic1q7 <= 4)
            {
                if (topic1q7 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: The Storming of the Bastille\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q8
        while (1)
        {

            printf("h)Who was the leader of the Soviet Union during World War II?\n");
            printf("\n1: Vladimir Lenin\n2: Nikita Khrushchev\n3: Joseph Stalin\n4: Mikhail Gorbachev\n\n");
            scanf("%d", &topic1q8);
            if (topic1q8 >= 1 && topic1q8 <= 4)
            {
                if (topic1q8 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: Joseph Stalin\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q9
        while (1)
        {

            printf("j)What was the primary cause of the American Civil War?\n");
            printf("\n1: Slavery\n2: Industrialization\n3: The Great Depression\n4: Territorial expansion\n\n");
            scanf("%d", &topic1q9);
            if (topic1q9 >= 1 && topic1q9 <= 4)
            {
                if (topic1q9 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Slavery\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q10
        while (1)
        {

            printf("k)Which empire was ruled by Julius Caesar?\n");
            printf("\n1: Roman Empire\n2: Byzantine Empire\n3: Ottoman Empire\n4: Mongol Empire\n\n");
            scanf("%d", &topic1q10);
            if (topic1q10 >= 1 && topic1q10 <= 4)
            {
                if (topic1q10 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Roman Empire\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        break;
        //TOPIC 2
        case 2:
        printf("\n>>> You've chosen the Basic Math quiz!\n\n");
        // Q1
        while (1)
        {

            printf("a)What is the value of 7 + 5 * 2?\n");
            printf("\n1: 14\n2: 17\n3: 19\n4: 24\n\n");
            scanf("%d", &topic1q1);
            if (topic1q1 >= 1 && topic1q1 <= 4)
            {
                if (topic1q1 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: 17\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q2
        while (1)
        {
            printf("b)What is 3/5 + 2/5?\n");
            printf("\n1: 1/5\n2: 5/10\n3: 1\n4: 5/5\n\n");
            scanf("\n%d", &topic1q2);
            if (topic1q2 >= 1 && topic1q2 <= 4)
            {
                if (topic1q2 == 3 && topic1q2 == 4)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer!! Correct Answer is 3: 1 or 4: 5/5\n");
                }
                break;
            }
            else
            {
                printf("Enter an Answer between 1-4.");
            }
        }
        // Q3
        while (1)
        {

            printf("c)What is the square of 12?\n");
            printf("\n1: 124\n2: 142\n3: 144\n4: 164\n\n");
            scanf("%d", &topic1q3);
            if (topic1q3 >= 1 && topic1q3 <= 4)
            {
                if (topic1q3 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: 144\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q4
        while (1)
        {

            printf("d)Simplify: 15 − (3+2).\n");
            printf("\n1: 10\n2: 8\n3: 12\n4: 9\n\n");
            scanf("%d", &topic1q4);
            if (topic1q4 >= 1 && topic1q4 <= 4)
            {
                if (topic1q4 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: 10\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q5
        while (1)
        {

            printf("e)What is 45 ÷ 5 + 3 ?\n");
            printf("\n1: 9\n2: 11\n3: 12\n4: 15\n\n");
            scanf("%d", &topic1q5);
            if (topic1q5 >= 1 && topic1q5 <= 4)
            {
                if (topic1q5 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: 12\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q6
        while (1)
        {

            printf("f)Convert 0.25 to a fraction.\n");
            printf("\n1: 1/4\n2: 2/5\n3: 3/8\n4: 1/2\n\n");
            scanf("%d", &topic1q6);
            if (topic1q6 >= 1 && topic1q6 <= 4)
            {
                if (topic1q6 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: 1/4\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q7
        while (1)
        {

            printf("g)What is the 20 percent of 50?\n");
            printf("\n1: 5\n2: 10\n3: 15\n4: 20\n\n");
            scanf("%d", &topic1q7);
            if (topic1q7 >= 1 && topic1q7 <= 4)
            {
                if (topic1q7 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: 10\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q8
        while (1)
        {

            printf("h)Simplify: 3^2 + 4^2\n");
            printf("\n1: 12\n2: 18\n3: 25\n4: 35\n\n");
            scanf("%d", &topic1q8);
            if (topic1q8 >= 1 && topic1q8 <= 4)
            {
                if (topic1q8 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: 25\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q9
        while (1)
        {

            printf("j) What is the LCM of 4 and 6?\n");
            printf("\n1: 12\n2: 24\n3: 18\n4: 8\n\n");
            scanf("%d", &topic1q9);
            if (topic1q9 >= 1 && topic1q9 <= 4)
            {
                if (topic1q9 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: 12\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q10
        while (1)
        {

            printf("k)Solve: 5/6 - 1/3.\n");
            printf("\n1: 2/6\n2: 1/2\n3: 3/6\n4: 4/6\n\n");
            scanf("%d", &topic1q10);
            if (topic1q10 >= 1 && topic1q10 <= 4)
            {
                if (topic1q10 == 4)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 4: 4/6\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        break;
        //TOPIC 3
        case 3: 
        printf("\n>>> You've chosen the Famous Books and Authors quiz!\n\n");
        // Q1
        while (1)
        {

            printf("a)Who wrote Pride and Prejudice?\n");
            printf("\n1: Charlotte Brontë\n2: Jane Austen\n3: Emily Dickinson\n4: Emily Dickinson\n\n");
            scanf("%d", &topic1q1);
            if (topic1q1 >= 1 && topic1q1 <= 4)
            {
                if (topic1q1 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Jane Austen\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q2
        while (1)
        {
            printf("b)Which book was authored by George Orwell?\n");
            printf("\n1: Brave New World\n2: Animal Farm\n3: The Great Gatsby\n4: Of Mice and Men\n\n");
            scanf("\n%d", &topic1q2);
            if (topic1q2 >= 1 && topic1q2 <= 4)
            {
                if (topic1q2 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer!! Correct Answer is 2: Animal Farm\n");
                }
                break;
            }
            else
            {
                printf("Enter an Answer between 1-4.");
            }
        }
        // Q3
        while (1)
        {

            printf("c)Who is the author of To Kill a Mockingbird?\n");
            printf("\n1: Harper Lee\n2: Mark Twain\n3: J.D. Salinger\n4: Ernest Hemingway\n\n");
            scanf("%d", &topic1q3);
            if (topic1q3 >= 1 && topic1q3 <= 4)
            {
                if (topic1q3 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Harper Lee\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q4
        while (1)
        {

            printf("d)Which famous book was written by J.R.R. Tolkien?\n");
            printf("\n1: The Catcher in the Rye\n2: The Chronicles of Narnia\n3: The Hobbit\n4: The Grapes of Wrath\n\n");
            scanf("%d", &topic1q4);
            if (topic1q4 >= 1 && topic1q4 <= 4)
            {
                if (topic1q4 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: The Hobbit\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q5
        while (1)
        {

            printf("e)Who wrote 1984?\n");
            printf("\n1: Aldous Huxley\n2: Franz Kafka\n3: George Orwell\n4: Arthur C. Clarke\n\n");
            scanf("%d", &topic1q5);
            if (topic1q5 >= 1 && topic1q5 <= 4)
            {
                if (topic1q5 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: George Orwell\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q6
        while (1)
        {

            printf("f)Which of the following books was written by Gabriel García Márquez?\n");
            printf("\n1: Love in the Time of Cholera\n2: A Tale of Two Cities\n3: The Picture of Dorian Gray\n4: Crime and Punishment\n\n");
            scanf("%d", &topic1q6);
            if (topic1q6 >= 1 && topic1q6 <= 4)
            {
                if (topic1q6 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Love in the Time of Cholera\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q7
        while (1)
        {

            printf("g)Who authored The Old Man and the Sea?\n");
            printf("\n1:  William Faulkner\n2: John Steinbeck\n3: Ernest Hemingway\n4: F. Scott Fitzgerald\n\n");
            scanf("%d", &topic1q7);
            if (topic1q7 >= 1 && topic1q7 <= 4)
            {
                if (topic1q7 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: Ernest Hemingway\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q8
        while (1)
        {

            printf("h)Which author is known for the Harry Potter series?\n");
            printf("\n1: Suzanne Collins\n2: J.K. Rowling\n3: Rick Riordan\n4: Philip Pullman\n\n");
            scanf("%d", &topic1q8);
            if (topic1q8 >= 1 && topic1q8 <= 4)
            {
                if (topic1q8 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: J.K. Rowling\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q9
        while (1)
        {

            printf("j)Who wrote Moby-Dick?\n");
            printf("\n1: Herman Melville\n2: Nathaniel Hawthorne\n3: Mark Twain\n4: James Fenimore Cooper\n\n");
            scanf("%d", &topic1q9);
            if (topic1q9 >= 1 && topic1q9 <= 4)
            {
                if (topic1q9 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Herman Melville\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q10
        while (1)
        {

            printf("k)Who is the author of The Alchemist?\n");
            printf("\n1: Paulo Coelho\n2: Khaled Hosseini\n3: Dan Brown\n4: Haruki Murakami\n\n");
            scanf("%d", &topic1q10);
            if (topic1q10 >= 1 && topic1q10 <= 4)
            {
                if (topic1q10 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Paulo Coelho\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        break;
        //TOPIC 4
        case 4:
        printf("\n>>> You've chosen the Space and Astronomy quiz!\n\n");
        // Q1
        while (1)
        {

            printf("a)What is the largest planet in our solar system?\n");
            printf("\n1: Saturn\n2: Jupiter\n3: Neptune\n4: Uranus\n\n");
            scanf("%d", &topic1q1);
            if (topic1q1 >= 1 && topic1q1 <= 4)
            {
                if (topic1q1 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Jupiter\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q2
        while (1)
        {
            printf("b)Which book was authored by George Orwell?\n");
            printf("\n1: Venus\n2: Mars\n3: Mercury\n4: Pluto\n\n");
            scanf("\n%d", &topic1q2);
            if (topic1q2 >= 1 && topic1q2 <= 4)
            {
                if (topic1q2 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer!! Correct Answer is 2: Mars\n");
                }
                break;
            }
            else
            {
                printf("Enter an Answer between 1-4.");
            }
        }
        // Q3
        while (1)
        {

            printf("c)What is the closest star to Earth?\n");
            printf("\n1: Sirius\n2: Alpha Centauri\n3: Proxima Centauri\n4: The Sun\n\n");
            scanf("%d", &topic1q3);
            if (topic1q3 >= 1 && topic1q3 <= 4)
            {
                if (topic1q3 == 4)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 4: The Sun\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q4
        while (1)
        {

            printf("d)Which galaxy is Earth a part of?\n");
            printf("\n1: Andromeda\n2: Milky Way\n3: Whirlpool\n4: Sombrero\n\n");
            scanf("%d", &topic1q4);
            if (topic1q4 >= 1 && topic1q4 <= 4)
            {
                if (topic1q4 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Milky Way\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q5
        while (1)
        {

            printf("e)What is the term for a star that suddenly increases in brightness and then fades?\n");
            printf("\n1: Supernova\n2: Black Hole\n3: Pulsar\n4: White Dwarf\n\n");
            scanf("%d", &topic1q5);
            if (topic1q5 >= 1 && topic1q5 <= 4)
            {
                if (topic1q5 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Supernova\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q6
        while (1)
        {

            printf("f)Which planet has the most moons?\n");
            printf("\n1: Earth\n2: Saturn\n3: Mars\n4: Neptune\n\n");
            scanf("%d", &topic1q6);
            if (topic1q6 >= 1 && topic1q6 <= 4)
            {
                if (topic1q6 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Saturn\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q7
        while (1)
        {

            printf("g)What is the name of the first artificial satellite launched into space?\n");
            printf("\n1: Voyager 1\n2: Sputnik 1\n3: Apollo 11\n4: Hubble\n\n");
            scanf("%d", &topic1q7);
            if (topic1q7 >= 1 && topic1q7 <= 4)
            {
                if (topic1q7 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Sputnik 1\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q8
        while (1)
        {

            printf("h)Which planet is famous for its rings?\n");
            printf("\n1: Uranus\n2: Jupiter\n3: Saturn\n4: Neptune\n\n");
            scanf("%d", &topic1q8);
            if (topic1q8 >= 1 && topic1q8 <= 4)
            {
                if (topic1q8 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: Saturn\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q9
        while (1)
        {

            printf("j)What type of celestial object is the Andromeda?\n");
            printf("\n1: Nebula\n2: Comet\n3: c) Galaxy\n4: Star Cluster\n\n");
            scanf("%d", &topic1q9);
            if (topic1q9 >= 1 && topic1q9 <= 4)
            {
                if (topic1q9 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: Galaxy\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q10
        while (1)
        {

            printf("k)What is the primary component of the Sun?\n");
            printf("\n1: Hydrogen\n2: Helium\n3: Oxygen\n4: Carbon\n\n");
            scanf("%d", &topic1q10);
            if (topic1q10 >= 1 && topic1q10 <= 4)
            {
                if (topic1q10 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 1: Hydrogen\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        break;
        //TOPIC 
        case 5:
        printf("\n>>> You've chosen the General Science quiz!\n\n");
        // Q1
        while (1)
        {

            printf("a)Which gas do plants absorb during photosynthesis?\n");
            printf("\n1: Oxygen\n2: Nitrogen\n3: Carbon Dioxide\n4: Methane\n\n");
            scanf("%d", &topic1q1);
            if (topic1q1 >= 1 && topic1q1 <= 4)
            {
                if (topic1q1 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: Carbon Dioxide\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q2
        while (1)
        {
            printf("b)What is the hardest natural substance on Earth?\n");
            printf("\n1: Diamond\n2: Steel\n3: Quartz\n4: Gold\n\n");
            scanf("\n%d", &topic1q2);
            if (topic1q2 >= 1 && topic1q2 <= 4)
            {
                if (topic1q2 == 1)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer!! Correct Answer is 1: Diamond\n");
                }
                break;
            }
            else
            {
                printf("Enter an Answer between 1-4.");
            }
        }
        // Q3
        while (1)
        {

            printf("c)What part of the human body is primarily responsible for pumping blood?\n");
            printf("\n1: Brain\n2: Lungs\n3: Heart\n4: Kidneys\n\n");
            scanf("%d", &topic1q3);
            if (topic1q3 >= 1 && topic1q3 <= 4)
            {
                if (topic1q3 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: Heart\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q4
        while (1)
        {

            printf("d)Which organ in the human body is responsible for filtering blood?\n");
            printf("\n1: Liver\n2: Lungs\n3: Stomach\n4: Kidneys\n\n");
            scanf("%d", &topic1q4);
            if (topic1q4 >= 1 && topic1q4 <= 4)
            {
                if (topic1q4 == 4)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 4: Kidneys\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q5
        while (1)
        {

            printf("e)Which planet is known for having the strongest winds in the solar system?\n");
            printf("\n1: Jupiter\n2: Neptune\n3: Uranus\n4: Venus\n\n");
            scanf("%d", &topic1q5);
            if (topic1q5 >= 1 && topic1q5 <= 4)
            {
                if (topic1q5 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Neptune\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q6
        while (1)
        {

            printf("f)What is the basic unit of life?\n");
            printf("\n1: Atom\n2: Molecule\n3: Cell\n4: Organ\n\n");
            scanf("%d", &topic1q6);
            if (topic1q6 >= 1 && topic1q6 <= 4)
            {
                if (topic1q6 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 3: Cell\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q7
        while (1)
        {

            printf("g)Which vitamin is primarily obtained from sunlight?\n");
            printf("\n1: Vitamin C\n2: Vitamin D\n3: Vitamin B\n4: Vitamin A\n\n");
            scanf("%d", &topic1q7);
            if (topic1q7 >= 1 && topic1q7 <= 4)
            {
                if (topic1q7 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Vitamin D\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q8
        while (1)
        {

            printf("h)What is the SI unit of force?\n");
            printf("\n1: Joule\n2: Newton\n3: Pascal\n4: Watt\n\n");
            scanf("%d", &topic1q8);
            if (topic1q8 >= 1 && topic1q8 <= 4)
            {
                if (topic1q8 == 2)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 2: Newton\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q9
        while (1)
        {

            printf("j)Approximately how many stars are out there?\n");
            printf("\n1: 300 billion\n2: 200 billion\n3: 700 billion\n4: 400 billion\n\n");
            scanf("%d", &topic1q9);
            if (topic1q9 >= 1 && topic1q9 <= 4)
            {
                if (topic1q9 == 4)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is 4: 400 billion\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        // Q10
        while (1)
        {

            printf("k)Which one is essential for life.\n");
            printf("\n1: Hydrogen\n2: Helium\n3: Oxygen\n4: Carbon\n\n");
            scanf("%d", &topic1q10);
            if (topic1q10 >= 1 && topic1q10 <= 4)
            {
                if (topic1q10 == 3)
                {
                    printf("\nCorrect Answer!!\n\n");
                    score++;
                }
                else
                {
                    printf("\nWrong Answer! Correct answer is : Oxygen\n\n");
                }
                break;
            }
            else
            {
                printf("\nEnter an answer between 1-4\n\n");
            }
        }
        break;
    default:
        printf("Choose a topic between 1-5");
        break;
    }
    if (score > 7)
        {
            printf("\nExcellent!! Your score is: %d\n", score);
        }
        else if (score>=4)
        {
            printf("Good! Your score is: %d\n", score);
        }
        else{
            printf("You're Fail! Your score is: %d\n", score);
        }
}