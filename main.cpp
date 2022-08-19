#include<Game.h>

int main()
{
    Game g;
    bool check = true;
    while(check)
    {
        g.menu();
        int choice; cout << "Enter your choice: "; cin >> choice;
        switch(choice)
        {
        case 1:
            {
                g.newGame();
                while(true)
                {
                    cout << "Return menu? Y/N ";
                    char x; cin >> x;
                    if(x == 'Y') break;
                }
                break;
            }
        case 2:
            {
                g.guild();
                while(true)
                {
                    cout << "Return menu? Y/N ";
                    char x; cin >> x;
                    if(x == 'Y') break;
                }
                break;
            }
        case 3:
            check = false;
            break;
        }
    }
    return 0;
}
