/*

*/

#include <iostream>
#include <string>
using namespace std;
char choice;
bool again = true;
int introvert;
int extrovert;
int positivePerson;
int negativePerson;
int silly;
int serious;
int spontaneous;
int planner;

int main(){


while (again == true)
    {
        cout << "------------------------------------------------\n";
        cout << "                PERSONALITY TEST                \n";
        cout << "------------------------------------------------\n";
        cout << "Answer the following twelve questions to find \nout your personality traits.\n";
        cout << endl;
        cout << endl;


        introvert = 0;
        extrovert = 0;
        positivePerson = 0;
        negativePerson = 0;
        silly = 0;
        serious = 0;
        spontaneous = 0;
        planner = 0;
        // Start of questions
        // Intro vs extrovert
        cout << "1) How likely are you to prefer to stay home and \n   watch a moveie rather than \n   going out on weekends?\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	introvert += 3;    // menu allows points to be added to variables for possible choices.
                            break;
                            
                case 'b':	introvert += 2;
                            break;
                            
                case 'c': 	introvert += 1;
                            extrovert += 1;
                            break;
                
                case 'd':   extrovert += 2;
                            break;
                
                case 'e':   extrovert +=3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl; //Space between questions

        cout << "2) How likely are you to find talking in groups \n   exciting and fulfilling.\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	extrovert +=3;
                            break;
                            
                case 'b':	extrovert += 2;
                            break;
                            
                case 'c': 	introvert += 1;
                            extrovert += 1;
                            break;
                
                case 'd':   introvert += 2;
                            break;
                
                case 'e':   introvert += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "3) How likely are you to go out out of your way \n   to initiate and develope \n   relationships.\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	extrovert +=3;
                            break;
                            
                case 'b':	extrovert += 2;
                            break;
                            
                case 'c': 	introvert += 1;
                            extrovert += 1;
                            break;
                
                case 'd':   introvert += 2;
                            break;
                
                case 'e':   introvert += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        // Positive Person vs Negative person
        cout << "4) Y2K was a great time for new beginings.\n     a) Without a doubt\n     b) Yes\n     c) Neutral\n     d) No\n     e) Definitly not\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	positivePerson +=3;
                            break;
                            
                case 'b':	positivePerson += 2;
                            break;
                            
                case 'c': 	positivePerson += 1;
                            negativePerson += 1;
                            break;
                
                case 'd':   negativePerson += 2;
                            break;
                
                case 'e':   negativePerson += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "5) How likely are you to give a complement to \n   someone today?\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	positivePerson +=3;
                            break;
                            
                case 'b':	positivePerson += 2;
                            break;
                            
                case 'c': 	positivePerson += 1;
                            negativePerson += 1;
                            break;
                
                case 'd':   negativePerson += 2;
                            break;
                
                case 'e':   negativePerson += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "6) You have a chalice filled half way with water\n   how likely are you say to that it is half \n   empty?\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	negativePerson +=3;
                            break;
                            
                case 'b':	negativePerson += 2;
                            break;
                            
                case 'c': 	positivePerson += 1;
                            negativePerson += 1;
                            break;
                
                case 'd':   positivePerson += 2;
                            break;
                
                case 'e':   positivePerson += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        // silly vs serious
        cout << "7) You are Likely to enjoy jokes in the work \n   space.\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	silly +=3;
                            break;
                            
                case 'b':	silly += 2;
                            break;
                            
                case 'c': 	silly += 1;
                            serious += 1;
                            break;
                
                case 'd':   serious += 2;
                            break;
                
                case 'e':   serious += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "8) You are likely only have serious \n   conversations.\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	serious +=3;
                            break;
                            
                case 'b':	serious += 2;
                            break;
                            
                case 'c': 	serious += 1;
                            silly += 1;
                            break;
                
                case 'd':   silly += 2;
                            break;
                
                case 'e':   silly += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "9) How likely are you to play a prank on \n   someone?\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	silly +=3;
                            break;
                            
                case 'b':	silly += 2;
                            break;
                            
                case 'c': 	silly += 1;
                            serious += 1;
                            break;
                
                case 'd':   serious += 2;
                            break;
                
                case 'e':   serious += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        // Spontaneous vs Planner questions
        cout << "10) How likely are you to plan out your weeks \n    beforehand?\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	planner +=3;
                            break;
                            
                case 'b':	planner += 2;
                            break;
                            
                case 'c': 	planner += 1;
                            spontaneous += 1;
                            break;
                
                case 'd':   spontaneous += 2;
                            break;
                
                case 'e':   spontaneous += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "11) How likely are you to just hop in a car and \n    take a road trip?\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	spontaneous +=3;
                            break;
                            
                case 'b':	spontaneous += 2;
                            break;
                            
                case 'c': 	spontaneous += 1;
                            planner += 1;
                            break;
                
                case 'd':   planner += 2;
                            break;
                
                case 'e':   planner += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "12) how likely are you to plan vacations months\n    in advance?\n     a) Very Likely\n     b) Likely\n     c) Neutral\n     d) Not Very Likely\n     e) Never\n";

            cin >> choice;

            switch (choice)
            {
                case 'a':	planner +=3;
                            break;
                            
                case 'b':	planner += 2;
                            break;
                            
                case 'c': 	planner += 1;
                            spontaneous += 1;
                            break;
                
                case 'd':   spontaneous += 2;
                            break;
                
                case 'e':   spontaneous += 3;
                            break;

                default:  	cout << "Please enter a lowercase a,b,c,d,e for a valid input\n";
            }

        cout << endl;

        cout << "                     Results                    \n";
        cout << "------------------------------------------------\n";
        cout << endl;
            if (introvert > extrovert)                      // If statements for possible outcomes
            {
                cout << "You are an Introvert\n";
            }

            if (extrovert > introvert)
            {
                cout << "You are an Extrovert\n";
            }

            if (introvert == extrovert)
            {
                cout << "You are neither an Introvert or Extrovert\n";
            }

            if (positivePerson > negativePerson)
            {
                cout << "You are a Positive Person\n";
            }

            if (negativePerson > positivePerson)
            {
                cout << "You are a Negative Person\n";
            }

            if (positivePerson == negativePerson)
            {
                cout << "You are neither a Positive or Negative Person \n";
            }

            if (silly > serious)
            {
                cout << "You are a silly person.\n";
            }

            if (serious > silly)
            {
                cout << "You are serious person.\n";
            }

            if (serious == silly)
            {
                cout << "You are neither a serious or silly person\n";
            }

            if (planner > spontaneous)
            {
                cout << "You are a Planner\n";
            }

            if (spontaneous > planner)
            {
                cout << "You are Spontaneous\n";
            }

            if (planner == spontaneous)
            {
                cout << "You are neither a Planner or Spontaneous\n";
            }
        cout << "------------------------------------------------\n";
        cout << endl;

        cout << "Would you like to run the test again?\n y) Yes\n n) No\n";
        cin >> choice;
        cout << endl;
        cout << endl;

    if (choice == 'n' || choice == 'N')    // ends while loop
        {
        again = false;
        return 0;
        }   
    
    }

return 0;
}

