

#include <iostream>
using namespace std;


int main()
{
    int x;
    cout << "<<<Day of Week: ";
    cin >> x;
    switch (x) {
    case 1:
        cout << "Today is Monday, reminder, please start to prepaer exam about C++ \n";
        break;
    case 2:
        cout << "Today is Thuesday, please check ur hometsak, because tomorrov will be conference about C++, dont skip it!!! \n";
        break;
    case 3:
        cout << "Today is Wednesday, dont forget, today at 16:45 will start conference about C++. \nAfter the conference u can go for shaurma :)";
        break;
    case 4:
        cout << "Today is Thursday , today won't be something coconferences, start to do your homework, because today will be conference \n";
        break;
    case 5:
        cout << "Today is Friday, at 16:45 will be conference about C++, dont skip please, of course after the conference u can to rest:D\n";
        break;
    case 6:
        cout << "Today is Saturday, today u can rest all day, but please dont forget about Exam\n";
        break;
    case 7:
        cout << "Today is Sunday, today is weekend, and i dont know what to write, just shaurma is the best!\n ";
    }

    int i;
    int y;
    int b;
    cout << " OH, LUCKER ! \n";
    cout << "Hi, now u got on mini-game 'Oh, LUCKER' \n";
    cout << "Rules are simple, u should to get answer on 3 simple qustiones \n ";
    cout << "U cant to win something, because we dont have money, and we waste your and our time! \n";
    cout << "Well, lets start, first question: \n";
    cout << "Who is the founder of Microsoft Corporation? \n";
    cout << "Variants of answer: \n 1)Me \n 2)Mark Zuckerberg \n 3)Elon Musk \n 4)Bill Gates \n";

    cin >> i;
    switch (i) {
    case 1:
        cout << "WRONG ANSWER, sadly but im not a founder of Microsoft, Sorry Bye \n";
        break;
    case 2: 
        cout << "WRONG ANSWER, no Mark Zuckerberg is not a founder of Microsoft, sorry Bye \n";
        break;
    case 3:
        cout << "WRONG ANSWER, no Elon Musk is not a founder of Microsoft, sorry Bye\n";
        break;
    case 4:
        cout << "RIGHT ANSWER, yes Bill Gates became a founder of Microsoft; \n";
        // идет следующий вопрос,  так как был выбран правильный ответ для предыдущего вопроса
        cout << "Next qeustion: \n";
        cout << "When was created C++? \n";
        cout << "Variants of answer: \n 1)1981 \n 2)1987 \n 3)1990 \n 4)1985 \n";
        cin >> y;
        switch (y) {
        case 1:
            cout << "WRONG ANSWER, Sorry, Bye\n";
            break;
        case 2:
            cout << "WRONG ANSWER, Sorry , Bye\n";
            break;
        case 3:
            cout << "WRONG ANSWER, Sorry, Bye \n";
            break;
        case 4:
            cout << "RIGHT ANSWER, yes C++ was created in 1985 \n";

            // идет следующий вопрос,  так как был выбран правильный ответ для предыдущего вопроса 

            cout << "Next question: \n";
            cout << "What is the most popular game? \n";
            cout << "Variants of answer: 4)Tetris \n 3)Gta5 \n 2)CS:GO \n1)Minecraft \n";
            cin >> b;
            switch (b) {
            case 4:
            
                cout << "WRONG ANSWER, Sorry, Bye \n";
                break;
            case 3:
                cout << "WRONG ANSWER, Sorry Bye \n";
                break;
            case 2:
                cout << "WRONG ANSWER, Sorry Bye \n";
                break;
            case 1:
                cout << "RIGHT ANSWER, Yes , Minecraft is the best selling game \n";

                cout << "MY Congratulations, u right answered on all questions! \n";
                break;

            }


            break;
        }

        break;

    }

}
//я запихнул следующие вопросы в правильные ответы кейса, то есть если ответ неправильный то далее ничего не будет происходить а если ответ
// правильный, то тот 
//  кейс не закрывается а в нем идет далее вопросы, и так до коцна
// я не уверен правильно ли я сделал и можно ли так вообще делать, но я когда придумал эту схему то мне она показалась довольно оптимальной
// и плюс она полностью рабочая