#include <iostream>
#include <random>
#include <SFML/Graphics.hpp>
#include <sstream>
#include "vector"
#include "cmath"
using namespace std;
using namespace sf;

int summ(string s){

    vector<int>flag;
    s += '+';
    string f;

    for(size_t i = 0; i < size(s); i++){
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == ':'){
            flag.push_back(stoi(f));
            f = "";
        }
        else {
            f += s[i];
        }
    }
    for(size_t j = 0; j < size(s); j++){
        if(s[j] == '+'){
            int l = flag[0] + flag[1];
            return l;
            break;
        }
        else if(s[j] == '-'){
            int l = flag[0] - flag[1];
            return l;
            break;
        }
        else if(s[j] == '*'){
            int l = flag[0] * flag[1];
            return l;
            break;
        }
        else if(s[j] == ':'){
            int l = flag[0] / flag[1];
            return l;
            break;
        }

    }

}



int main()
{
    RenderWindow window(VideoMode(450, 570), "claculator"); //(500, 650)

    sf::RectangleShape shape(Vector2f(500,100));
    shape.setPosition(0,10);
    shape.setFillColor(sf::Color::White);

//===================================================================================================
                                    //NUMBERS

    Color butn(219, 219, 219);

    sf::RectangleShape b1(Vector2f(100,100));
    b1.setPosition(10,130);
    b1.setFillColor(butn);

    sf::RectangleShape b2(Vector2f(100,100));
    b2.setPosition(10,240);
    b2.setFillColor(butn);

    sf::RectangleShape b3(Vector2f(100,100));
    b3.setPosition(10,350);
    b3.setFillColor(butn);
//---------------------------------------------------------------------------- FRIST |
    sf::RectangleShape b4(Vector2f(100,100));
    b4.setPosition(120,130);
    b4.setFillColor(butn);

    sf::RectangleShape b5(Vector2f(100,100));
    b5.setPosition(120,240);
    b5.setFillColor(butn);

    sf::RectangleShape b6(Vector2f(100,100));
    b6.setPosition(120,350);
    b6.setFillColor(butn);
//---------------------------------------------------------------------------- SECOND ||

    sf::RectangleShape b7(Vector2f(100,100));
    b7.setPosition(230,130);
    b7.setFillColor(butn);

    sf::RectangleShape b8(Vector2f(100,100));
    b8.setPosition(230,240);
    b8.setFillColor(butn);

    sf::RectangleShape b9(Vector2f(100,100));
    b9.setPosition(230,350);
    b9.setFillColor(butn);

    sf::RectangleShape b0(Vector2f(100,100));
    b0.setPosition(230,460);
    b0.setFillColor(butn);
//------------------------------------------------------------------------------ THIRD |||
//====================================================================================================

    sf::RectangleShape bpl(Vector2f(100,100));
    bpl.setPosition(340,130);
    bpl.setFillColor(butn);

    sf::RectangleShape bmin(Vector2f(100,100));
    bmin.setPosition(340,240);
    bmin.setFillColor(butn);

    sf::RectangleShape bum(Vector2f(100,100));
    bum.setPosition(340,350);
    bum.setFillColor(butn);

    sf::RectangleShape bdel(Vector2f(100,100));
    bdel.setPosition(340,460);
    bdel.setFillColor(butn);

    sf::RectangleShape finish(Vector2f(210,100));
    finish.setPosition(10,460);
    finish.setFillColor(butn);


//------------------------------------------------------------------------------
    Font font;
    font.loadFromFile("/home/larsymain/Рабочий стол/average c++ enjoyer/animeclicker/AlbertSans-ExtraLight.ttf");
//------------------------------------------------------------------------------

    const int x_pos = 42;
    const int y_pos = 30;


    Text one("1", font, 30);
    one.setFillColor(Color(0,0,0,255));
    one.setStyle(Text::Bold);
    one.setPosition(10+45,130+30);

    Text two("2", font, 30);
    two.setFillColor(Color(0,0,0,255));
    two.setStyle(Text::Bold);
    two.setPosition(10+x_pos,240+y_pos);

    Text tree("3", font, 30);
    tree.setFillColor(Color(0,0,0,255));
    tree.setStyle(Text::Bold);
    tree.setPosition(10+x_pos,350+y_pos);

    Text four("4", font, 30);
    four.setFillColor(Color(0,0,0,255));
    four.setStyle(Text::Bold);
    four.setPosition(120+x_pos,130+y_pos);

    Text five("5", font, 30);
    five.setFillColor(Color(0,0,0,255));
    five.setStyle(Text::Bold);
    five.setPosition(120+x_pos,240+y_pos);

    Text six("6", font, 30);
    six.setFillColor(Color(0,0,0,255));
    six.setStyle(Text::Bold);
    six.setPosition(120+x_pos,350+y_pos);

    Text seven("7", font, 30);
    seven.setFillColor(Color(0,0,0,255));
    seven.setStyle(Text::Bold);
    seven.setPosition(230+x_pos,130+y_pos);

    Text eigth("8", font, 30);
    eigth.setFillColor(Color(0,0,0,255));
    eigth.setStyle(Text::Bold);
    eigth.setPosition(230+x_pos,240+y_pos);

    Text nine("9", font, 30);
    nine.setFillColor(Color(0,0,0,255));
    nine.setPosition(230+x_pos,350+y_pos);
    nine.setStyle(Text::Bold);

    Text zero("0", font, 30);
    zero.setFillColor(Color(0,0,0,255));
    zero.setPosition(230+x_pos,460+y_pos);
    zero.setStyle(Text::Bold);
//------------------------------------------------------------------------------

    Text plus("+", font, 30);
    plus.setFillColor(Color(0,0,0,255));
    plus.setPosition(340+x_pos,130+y_pos);
    plus.setStyle(Text::Bold);

    Text minus("-", font, 30);
    minus.setFillColor(Color(0,0,0,255));
    minus.setPosition(340+x_pos,240+y_pos);
    minus.setStyle(Text::Bold);

    Text umn("*", font, 30);
    umn.setFillColor(Color(0,0,0,255));
    umn.setPosition(340+x_pos+1,350+y_pos+7);
    umn.setStyle(Text::Bold);

    Text delit(":", font, 30);
    delit.setFillColor(Color(0,0,0,255));
    delit.setPosition(340+x_pos+6,460+y_pos);
    delit.setStyle(Text::Bold);

    Text equal("=", font, 30);
    equal.setFillColor(Color(0,0,0,255));
    equal.setPosition(115-3,460+28);
    equal.setStyle(Text::Bold);
//------------------------------------------------------------------------------
                    //LOGIC
    string answer = "";

//------------------------------------------------------------------------------

    Text sc("", font, 20);
    sc.setFillColor(Color(0,0,0,255));




    Color color(192,192,192); // gray color for button
    while (window.isOpen())
    {
        Event event;
        Vector2i PosMouse = Mouse::getPosition(window);

        while (window.pollEvent(event))
        {
            if (Keyboard::isKeyPressed(Keyboard::C)) {
                answer = "";
            }
            if(event.type == Event::MouseButtonPressed) {
                // FIRST |
                if (PosMouse.x <= 110  and PosMouse.x >= 10 and PosMouse.y >= 130 and PosMouse.y <= 230) {
                    b1.setFillColor(color);
                    answer += "1";
                }
                if (PosMouse.x <= 110  and PosMouse.x >= 10 and PosMouse.y >= 240 and PosMouse.y <= 340) {
                    b2.setFillColor(color);
                    answer += "2";
                }
                if (PosMouse.x <= 110  and PosMouse.x >= 10 and PosMouse.y >= 350 and PosMouse.y <= 450) {
                    b3.setFillColor(color);
                    answer += "3";
                }
                //===========================================================================================
                if (PosMouse.x <= 220  and PosMouse.x >= 120 and PosMouse.y >= 130 and PosMouse.y <= 230) {
                    b4.setFillColor(color);
                    answer += "4";
                }
                if (PosMouse.x <= 220  and PosMouse.x >= 120 and PosMouse.y >= 240 and PosMouse.y <= 340) {
                    b5.setFillColor(color);
                    answer += "5";
                }
                if (PosMouse.x <= 220  and PosMouse.x >= 120 and PosMouse.y >= 350 and PosMouse.y <= 450) {
                    b6.setFillColor(color);
                    answer += "6";
                }
                //============================================================================================
                if (PosMouse.x <= 330  and PosMouse.x >= 230 and PosMouse.y >= 130 and PosMouse.y <= 230) {
                    b7.setFillColor(color);
                    answer += "7";
                }
                if (PosMouse.x <= 330  and PosMouse.x >= 230 and PosMouse.y >= 240 and PosMouse.y <= 340) {
                    b8.setFillColor(color);
                    answer += "8";
                }
                if (PosMouse.x <= 330  and PosMouse.x >= 230 and PosMouse.y >= 350 and PosMouse.y <= 450) {
                    b9.setFillColor(color);
                    answer += "9";
                }

                if (PosMouse.x <= 330  and PosMouse.x >= 230 and PosMouse.y >= 460 and PosMouse.y <= 570) {
                    b0.setFillColor(color);
                    answer += "0";
                }
                //============================================================================================
                if (PosMouse.x <= 440  and PosMouse.x >= 340 and PosMouse.y >= 130 and PosMouse.y <= 230) {
                    bpl.setFillColor(color);
                    answer += "+";
                }

                if (PosMouse.x <= 440  and PosMouse.x >= 340 and PosMouse.y >= 240 and PosMouse.y <= 350) {
                    bmin.setFillColor(color);
                    answer += "-";
                }

                if (PosMouse.x <= 440  and PosMouse.x >= 340 and PosMouse.y >= 340 and PosMouse.y <= 450) {
                    bum.setFillColor(color);
                    answer += "*";
                }

                if (PosMouse.x <= 440  and PosMouse.x >= 340 and PosMouse.y >= 450 and PosMouse.y <= 560) {
                    bdel.setFillColor(color);
                    answer += ":";
                }

                //============================================================================================
                if (PosMouse.x <= 220  and PosMouse.x >= 10 and PosMouse.y >= 460 and PosMouse.y <= 570) {
                    finish.setFillColor(color);
                    if(!answer.empty()) {
                        int flag = summ(answer);
                        answer = to_string(flag);
                    }
                }

                //============================================================================================
            }
            else{
                b1.setFillColor(Color::White);
                b2.setFillColor(Color::White);
                b3.setFillColor(Color::White);
                b4.setFillColor(Color::White);
                b5.setFillColor(Color::White);
                b6.setFillColor(Color::White);
                b7.setFillColor(Color::White);
                b8.setFillColor(Color::White);
                b9.setFillColor(Color::White);
                b0.setFillColor(Color::White);
//============================================================
                bpl.setFillColor(Color::White);
                bmin.setFillColor(Color::White);
                bum.setFillColor(Color::White);
                bdel.setFillColor(Color::White);
                finish.setFillColor(Color::White);
//============================================================

//============================================================
            }


            if (event.type == Event::Closed)
                window.close();
        }
//============================================================
        //                 OUTPUT
        ostringstream ans;
        ans << answer;
        sc.setString("" + ans.str());
        sc.setPosition(50,50);

//============================================================
        window.clear();
        window.draw(shape);
//============================================================
        window.draw(b1);
        window.draw(b2);
        window.draw(b3);
        window.draw(b4);
        window.draw(b5);        //NUMBERS
        window.draw(b6);
        window.draw(b7);
        window.draw(b8);
        window.draw(b9);
        window.draw(b0);
//==============================================================

        window.draw(bpl);
        window.draw(bmin);
        window.draw(bum);
        window.draw(bdel);

        window.draw(finish);
//==============================================================
        window.draw(sc);
//============================================================
        window.draw(one);
        window.draw(two);
        window.draw(tree);
        window.draw(four);
        window.draw(five);
        window.draw(six);
        window.draw(seven);
        window.draw(eigth);
        window.draw(nine);
        window.draw(zero);
//============================================================
        window.draw(plus);
        window.draw(minus);
        window.draw(umn);
        window.draw(delit);
        window.draw(equal);
//============================================================
        window.display();
    }

    return 0;
}

