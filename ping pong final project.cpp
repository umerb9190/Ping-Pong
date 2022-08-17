#include<iostream>                     //these are the library for c++ code
#include<cstdlib>                       //this library is for random func    
#include<ctime>                         // this is for random function with seed time
#include"graphics.h"             /*this is our graphic library taken from */
#include<windows.h>                     //sound and other are taken from this library
#include<mmsystem.h>                    //this is for multimedia system
using namespace std;
int x2 = 0;         //x2  is to tackle problem for left boundary
int um = 0;         //um is to tackle problem for  right boundary
int speed = 1;
int m;
void  members() {
    char m1[50] = " E N T E R   Y O U R   N A M E";
    char m5[200] = " P R E S S   A N Y   K E Y   TO   GO   B A C K   TO   M E N U";
    outtextxy(395, 300, m1);
    outtextxy(395, 320, m2);
    outtextxy(395, 340, m3);
    outtextxy(395, 360, m4);
    outtextxy(395, 400, m5);
    getch();
}
void display() {
    char intro[128] = " W E L C O M E";
    char to[200] = "T O ";
    char ping[200] = " P I N G   P O N G";
    char p1[200] = " P R E S S   M/m  F O R    M E M B E R S";
    char p2[200] = " P R E S S   I/i   F O R    I N S T R U C T I O N S ";
    char p3[200] = " P R E S S   G/g   T O   S T A R T   G A M E";
    char p4[200] = " P R E S S   ESC   T O   E X I T   G A M E";
    outtextxy(350, 150, intro);
    outtextxy(360, 190, to);
    outtextxy(350, 225, ping);
    outtextxy(350, 300, p1);
    outtextxy(350, 320, p2);
    outtextxy(350, 340, p3);
    outtextxy(350, 360, p4);

    delay(0.0001);

}
void instructions() {
    char ins1[300] = "1.  P R E S S   A/a   T O   M O V E   L O W E R   B A T   L E F T  ";
    char ins2[300] = "2.  P R E S S   D/d   T O   M O V E   L O W E R   B A T  R I G H T  ";
    char ins3[300] = "3.  P R E S S   K/k   T O   M O V E   U P P E R   B A T   L E F T  ";
    char ins4[300] = "4.  P R E S S   L/l   T O   M O V E   U P P E R   B A T   R I G H T  ";
    char ins5[500] = "5.  H I T T I N G   T H E   B A L L   O N   B A T    W I L L   I N C R E A S E   Y O U R   S C O R E ";
    char ins6[500] = "6.  M I S S I N G   T H E   B A L L   W I L L   D E C R E A S E   Y O U R  L I F E ";
    char ins7[200] = " P R E S S   A N Y   K E Y   TO   GO   B A C K   TO   M E N U";
    outtextxy(395, 300, ins1);
    outtextxy(395, 320, ins2);
    outtextxy(395, 340, ins3);
    outtextxy(395, 360, ins4);
    outtextxy(395, 380, ins5);
    outtextxy(395, 400, ins6);
    outtextxy(395, 450, ins7);
    getch();
}
void eliminate(int& a, int& b, int& c, int& d)
{
    a = -1;               //a is for up
    b = -1;               //b is for down       
    c = 1;                //c is for left  
    d = 1;                //d is for right
}
//void eliminate1(int& a, int& b, int& c, int& d)
//{
//    a = 1;
//    b = 1;
//    c = -1;
//    d = -1;
//}
void eleminate2(int& a, int& b, int& c, int& d)
{
    a = 1;
    b = 1;
    c = -1;                           // moves downside the ball
    d = -1;
}
//void eleminate3(int& a, int& b, int& c, int& d)
//{
//    a = 1; b = 1;
//    c = -1;
//    d = -1;
//
//}
void elimniate5(int& a, int& b, int& c, int& d) {
    a = -1;
    b = -1;               // left side of down bat, ball moving up
    c = -1;
    d = -1;
}
void eliminate6(int& a, int& b, int& c, int& d) {
    a = -1;
    b = -1;       //restricting the ball from left boundary
    c = 1;
    d = 1;
}

void eliminate7(int& a, int& b, int& c, int& d)
{
    a = 1;
    b = 1;      // right side of upper bat to refelct the ball
    c = 1;
    d = 1;
}
void eliminate8(int& a, int& b, int& c, int& d) {
    a = 1;
    b = 1;       // left side of upper bat to refelct the ball
    c = -1;
    d = -1;
}
void eliminate9(int& a, int& b, int& c, int& d) {
    a = -1;
    b = -1;      // when ball touches the centre of down bat
    c = 0;
    d = 0;
}
void eliminate10(int& a, int& b, int& c, int& d) {
    a = 1;       // when ball touches the centre of upper bat
    b = 1;
    c = 0;
    d = 0;
}
void eliminate12(int& a, int& b, int& c, int& d) {
    c = -1;
    d = -1;
    a = -1;
    b = -1;
}

void eliminate13(int& a, int& b, int& c, int& d) {
    a = 1;
    b = 1;         //ball will move up from bottom
    c = 1; d = 1;
}
void eliminate14(int& a, int& b, int& c, int& d) {
    a = 1;
    b = 1;
    c = -1; d = -1;
}
void eliminate15(int& a, int& b, int& c, int& d) {
    a = 1;
    b = 1;
    c = 1; d = 1;
}
void eliminate16(int& a, int& b, int& c, int& d) {
    a = 1;
    b = 1;
    c = 0; d = 0;
}


void game() {
    char v;
    int left = 300; int up = 580; int rights = 390; int down = 600;
    int left1 = 295; int up1 = 5; int rights1 = 380; int down1 = 25;
    int l = 350; int u = 50; int r = 365; int d = 65;
    int L = 3;              // L is for live of player 1(down)
    int L1 = 3;             // L1 is for live of palyer 2(up)
    int k1 = 0;             // score for player 1
    int k2 = 0;             // score for player 2
    int r1 = 1;             //level of game
    int page = 0;
    int a = 1, b = 1; int c = 0, d1 = 0;
    int xox = 0;
    //int kl = 0;
    while (true) {
       
        setactivepage(page);                        //this function removes flickering 


        setvisualpage(1 - page);
        cleardevice();

        rectangle(0, 0, 1100, 609);
        rectangle(0, 0, 789, 609);
        rectangle(l, u, r, d);
        int con = 0;

        u = u + a;
        d = d + b;
        l = l + speed * c;
        r = r + speed * d1;
       
        if (L == 0 || L1 == 0) {
            cleardevice();
            if (k1 > k2) {
                cleardevice();
                char win[100] = " P L A Y E R  1   W I N S";
                outtextxy(350, 340, win);
               
            }
            else if (k1 == k2) {
                char win1[100] = " M A T C H   T I E D";
                outtextxy(350, 340, win1);
            }
            
            else {
                cleardevice();
                char win1[100] = " P L A Y E R  2   W I N S";
                outtextxy(350, 340, win1);
                
            }
        }
        if (xox == 1)
        {
            cleardevice();
            m= getch();
            break;


        }
        if (m == 2) {
            display();
        }

        if (d == 608) {

            L = L - 1;
            l = 350;
            u = 50;
            r = 365;
            d = 65;      //restrict the ball to leave display form down
            eliminate16(a, b, c, d1);
        }

        if (l == 0 && x2 == 0) {
            eliminate6(a, b, c, d1);
        }
        if (l == 0 && x2 == 1) {
            eliminate13(a, b, c, d1);
        }
        
        if (r == 789) {

            eliminate12(a, b, c, d1);

        }

        if (d == 580 && l >= (left - 50) && r <= rights + 50)                     //when enemy 1 strikes space ship this decrease life
        {
            um = 0;
            x2 = 0;
            int var = (left + rights) / 2;
            if (l >= var) {

                eliminate(a, b, c, d1);
                k1++;

            }

            else if ((l >= var + 10) && (l <= var + 10)) {
                eliminate9(a, b, c, d1);
                k1++;
            }

            else {
                elimniate5(a, b, c, d1);
                k1++;

            }


        }

        if (u == 0) {
            L1 = L1 - 1;
            l = 350; 
            u = 50;
            r = 365;
            d = 65;
            eliminate16(a, b, c, d1);
        }
        if (u == 25 && l >= left1 - 50 && r <= rights1 + 50)                     //when enemy 1 strikes space ship this decrease life
        {
            x2 = 1;
            um = 1;

            int var1;

            var1 = (left1 + rights1) / 2;
            if (l >= var1)
            {
                k2++;
                eliminate7(a, b, c, d1);


            }

            else if ((l >= var1 + 10) && (l <= var1 + 10)) {
                eliminate10(a, b, c, d1);
                k2++;

            }
            else {

                eliminate8(a, b, c, d1);
                um = 1;
                k2++;

            }
        }
        if (r == 789 && um == 1) {
            eliminate14(a, b, c, d1);
        }
        if (k1 == 5 || k2 == 5) {
            speed = 2;
            r1 = 2;
        }

        



        char msg[128] = " P L A Y E R 1   L I V E S : ";
        sprintf(msg, " P L A Y E R 1   L I V E S : %d", L);                        //l1 is number of lives
        outtextxy(875, 50, msg);
        char msg1[128] = " P L A Y E R 2   L I V E S : ";
        sprintf(msg1, " P L A Y E R 1   L I V E S : %d", L1);                        //l1 is number of lives
        outtextxy(895, 70, msg1);
        outtextxy(795, 100, "----------------------------------------------------------------------------");
        char ms[128] = " S C O R E 1 :";
        sprintf_s(ms, " S C O R E 1 : %d", k1);
        outtextxy(880, 150, ms);                 //k1 is for score
        char ms1[128] = " S C O R E 2 :";
        sprintf_s(ms1, "  S C O R E 2 : %d", k2);
        outtextxy(900, 170, ms1);
        outtextxy(795, 200, "----------------------------------------------------------------------------");

        char m[128] = " L E V E L :";
        sprintf(m, " L E V E L : %d", r1);                          //r1 is for level
        outtextxy(880, 250, m);
        outtextxy(795, 300, "----------------------------------------------------------------------------");


        outtextxy(890, 500, "P I N G");
        outtextxy(870, 550, "P O N G");
        rectangle(left, up, rights, down);
        rectangle(left1, up1, rights1, down1);
        if (kbhit()) {
            v = getch();
            if (v == 'a' || v == 'A')                                               //if user presses a spaceship moves right
            {

                rectangle(0, 0, 1100, 609);
                rectangle(0, 0, 789, 609);
                delay(0.0001);
                if (left <= 0)                                              //if space ship is at starting point it will not move
                {
                    left = 0;
                    rectangle(left, up, rights, down);
                }
                else                                                    //if space ship is not at start it will move
                {
                    left -= 40;
                    rights -= 40;
                    rectangle(left, up, rights, down);
                }

            }
            if (v == 'd' || v == 'D')                                               //if user presses a spaceship moves right
            {

                rectangle(0, 0, 1100, 609);
                rectangle(0, 0, 789, 609);
                delay(0.0001);
                if (rights >= 789)                                      //if sapce is end pint it does not allow it to move
                {


                    rights = 789;
                    rectangle(left, up, rights, down);
                }
                else                                                    //if space ship is not at start it will move
                {
                    left += 40;
                    rights += 40;
                    rectangle(left, up, rights, down);
                }

            }

            if (v == 'k' || v == 'K')                                               //if user presses a spaceship moves right
            {

                rectangle(0, 0, 1100, 609);
                rectangle(0, 0, 789, 609);
                delay(0.0001);
                if (left1 <= 0)                                           //if space ship is at starting point it will not move
                {
                    left1 = 0;
                    rectangle(left1, up1, rights1, down1);
                }
                else                                                    //if space ship is not at start it will move
                {
                    left1 -= 40;
                    rights1 -= 40;
                    rectangle(left1, up1, rights1, down1);
                }

            }
            if (v == 'l' || v == 'L')                                               //if user presses a spaceship moves right
            {

                rectangle(0, 0, 1100, 609);
                rectangle(0, 0, 789, 609);
                delay(0.0001);
                if (rights1 >= 789)                                              //if space ship is at starting point it will not move
                {
                    rights1 = 789;
                    rectangle(left1, up1, rights1, down1);
                }
                else                                                    //if space ship is not at start it will move
                {
                    left1 += 40;
                    rights1 += 40;
                    rectangle(left1, up1, rights1, down1);
                }

            }
        }

        page = 1 - page;
    }

}


int main()
{
    char  li;
    initwindow(1300, 1000);
   
    do {
        cleardevice();
        display();
        li = getch();
        if (li == 'm'||li=='M') {
            cleardevice();
            members();
        }
        else if (li == 'i'|| li == 'I') {
            cleardevice();
            instructions();
        }
        else if (li == 'g'||li == 'G') {
            game();

        }
        else if (li == 27) {
            return 0;
        }
    } while (1);

    system("pause");

    return 0;
}
