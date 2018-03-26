#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow*window) {
    this->window = window;
}




void Cvijet::draw() {

    // pozadina //

    sf::RectangleShape pozadina(sf::Vector2f(400, 400));
    pozadina.setPosition(0, 0);
    //animacija

    sf::CircleShape sun;
    sun.setRadius(40);
    sun.setFillColor(sf::Color::Yellow);


    sf::Time elapsed = clock.getElapsedTime();
    if (elapsed.asSeconds() > 0.2)
    {
        animation_counter++;
        if (animation_counter > 14)
        {
            animation_counter = 0;
        }
        clock.restart();
    }
    //    
    //      
    //  (150, 85, 22)    (117, 65, 15)    
    //      (30, 15, 2)  0, 0, 0)
    switch (animation_counter) {
    case 0:
        sun.setRadius(40);
        sun.setPosition(-20, 40);
        pozadina.setFillColor(sf::Color(196, 136, 80));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 1:
        sun.setRadius(40);
        sun.setPosition(15, 25);
        pozadina.setFillColor(sf::Color(196, 133, 74));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 2:
        sun.setRadius(40);
        sun.setPosition(50, 10);
        pozadina.setFillColor(sf::Color(196, 130, 68));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 3:
        sun.setRadius(40);
        sun.setPosition(85, -5);
        pozadina.setFillColor(sf::Color(198, 129, 63));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 4:
        sun.setRadius(40);
        sun.setPosition(120, -30);
        pozadina.setFillColor(sf::Color(196, 125, 56));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 5:
        sun.setRadius(40);
        sun.setPosition(155, -30);
        pozadina.setFillColor(sf::Color(196, 121, 49));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 6:
        sun.setRadius(40);
        sun.setPosition(190, -15);
        pozadina.setFillColor(sf::Color(196, 118, 43));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 7:
        sun.setRadius(40);
        sun.setPosition(225, 0);
        pozadina.setFillColor(sf::Color(193, 112, 34));
        window->draw(pozadina);
        window->draw(sun);

        break;
    case 8:
        sun.setRadius(40);
        sun.setPosition(260, 15);
        pozadina.setFillColor(sf::Color(178, 103, 30));
        window->draw(pozadina);
        window->draw(sun);
        break;
    case 9:
        sun.setRadius(40);
        sun.setPosition(295, 30);
        pozadina.setFillColor(sf::Color(132, 74, 18));
        window->draw(pozadina);
        window->draw(sun);
        break;
    case 10:
        sun.setRadius(40);
        sun.setPosition(330, 45);
        pozadina.setFillColor(sf::Color(102, 56, 13));
        window->draw(pozadina);
        window->draw(sun);
        break;
    case 11:
        sun.setRadius(40);
        sun.setPosition(365, 60);
        pozadina.setFillColor(sf::Color(86, 47, 10));
        window->draw(pozadina);
        window->draw(sun);
        break;
    case 12:
        sun.setRadius(40);
        sun.setPosition(385, 75);
        pozadina.setFillColor(sf::Color(71, 38, 7));
        window->draw(pozadina);
        window->draw(sun);
        break;
    case 13:
        sun.setRadius(40);
        sun.setPosition(400, 85);
        pozadina.setFillColor(sf::Color(56, 29, 5));
        window->draw(pozadina);
        window->draw(sun);
        break;
    default:
        break;
    }

    // stabljika 1 //

    sf::RectangleShape stabljika(sf::Vector2f(150, 8));
    stabljika.setFillColor(sf::Color(30, 219, 13));
    stabljika.setPosition(167, 239);
    stabljika.rotate(90);
    window->draw(stabljika);

    // stabljika 2 //

    sf::RectangleShape stabljika2(sf::Vector2f(150, 6));
    stabljika2.setFillColor(sf::Color(21, 153, 9));
    stabljika2.setPosition(172, 239);
    stabljika2.rotate(90);
    window->draw(stabljika2);


    // Sloj1 - plavo //

    sf::CircleShape latica1(45);
    latica1.setFillColor(sf::Color::Cyan);
    latica1.setPosition(90, 90);
    window->draw(latica1);

    sf::CircleShape latica2(45);
    latica2.setFillColor(sf::Color::Cyan);
    latica2.setPosition(165, 70);
    window->draw(latica2);

    sf::CircleShape latica3(45);
    latica3.setFillColor(sf::Color::Cyan);
    latica3.setPosition(210, 130);
    window->draw(latica3);

    sf::CircleShape latica4(45);
    latica4.setFillColor(sf::Color::Cyan);
    latica4.setPosition(160, 180);
    window->draw(latica4);

    sf::CircleShape latica5(45);
    latica5.setFillColor(sf::Color::Cyan);
    latica5.setPosition(85, 160);
    window->draw(latica5);

    // Sloj2 - zuto //

    sf::CircleShape latica11(40);
    latica11.setFillColor(sf::Color::Blue);
    latica11.setPosition(96, 95);
    window->draw(latica11);


    sf::CircleShape latica22(40);
    latica22.setFillColor(sf::Color::Blue);
    latica22.setPosition(170, 75);
    window->draw(latica22);

    sf::CircleShape latica33(40);
    latica33.setFillColor(sf::Color::Blue);
    latica33.setPosition(215, 135);
    window->draw(latica33);

    sf::CircleShape latica44(40);
    latica44.setFillColor(sf::Color::Blue);
    latica44.setPosition(165, 185);
    window->draw(latica44);

    sf::CircleShape latica55(40);
    latica55.setFillColor(sf::Color::Blue);
    latica55.setPosition(90, 165);
    window->draw(latica55);


    // Sloj3 //

    sf::CircleShape latica111(30);
    latica111.setFillColor(sf::Color::Cyan);
    latica111.setPosition(104, 103);
    window->draw(latica111);


    sf::CircleShape latica222(30);
    latica222.setFillColor(sf::Color::Cyan);
    latica222.setPosition(173, 87);
    window->draw(latica222);

    sf::CircleShape latica333(30);
    latica333.setFillColor(sf::Color::Cyan);
    latica333.setPosition(215, 140);
    window->draw(latica333);

    sf::CircleShape latica444(30);
    latica444.setFillColor(sf::Color::Cyan);
    latica444.setPosition(168, 186);
    window->draw(latica444);

    sf::CircleShape latica555(30);
    latica555.setFillColor(sf::Color::Cyan);
    latica555.setPosition(99, 168);
    window->draw(latica555);


    // Sredina cvetica //

    sf::CircleShape sredina(33);
    sredina.setFillColor(sf::Color::Yellow);
    sredina.setPosition(154, 136);
    sredina.setOutlineThickness(4);
    sredina.setOutlineColor(sf::Color::Blue);
    window->draw(sredina);

    // tockice u sredini cvijeta //

    sf::CircleShape tockica1(2.5);
    tockica1.setFillColor(sf::Color(11, 116, 191));
    tockica1.setPosition(170, 150);
    window->draw(tockica1);

    sf::CircleShape tockica2(2.5);
    tockica2.setFillColor(sf::Color(11, 116, 191));
    tockica2.setPosition(162, 160);
    window->draw(tockica2);

    sf::CircleShape tockica3(2.5);
    tockica3.setFillColor(sf::Color(11, 116, 191));
    tockica3.setPosition(168, 173);
    window->draw(tockica3);

    sf::CircleShape tockica4(2.5);
    tockica4.setFillColor(sf::Color(11, 116, 191));
    tockica4.setPosition(190, 150);
    window->draw(tockica4);

    sf::CircleShape tockica5(2.5);
    tockica5.setFillColor(sf::Color(11, 116, 191));
    tockica5.setPosition(177, 160);
    window->draw(tockica5);

    sf::CircleShape tockica6(2.5);
    tockica6.setFillColor(sf::Color(11, 116, 191));
    tockica6.setPosition(190, 168);
    window->draw(tockica6);

    sf::CircleShape tockica7(2.5);
    tockica7.setFillColor(sf::Color(11, 116, 191));
    tockica7.setPosition(184, 182);
    window->draw(tockica7);


    // Travnjak //

    sf::RectangleShape travnjak(sf::Vector2f(400, 20));
    travnjak.setFillColor(sf::Color(66, 247, 49));
    travnjak.setPosition(0, 380);
    window->draw(travnjak);

    // trava //

    sf::RectangleShape trava1(sf::Vector2f(20, 3));
    trava1.setFillColor(sf::Color(66, 247, 49));
    trava1.rotate(90);
    trava1.setPosition(20, 360);
    window->draw(trava1);

    sf::RectangleShape trava2(sf::Vector2f(20, 3));
    trava2.setFillColor(sf::Color(66, 247, 49));
    trava2.rotate(90);
    trava2.setPosition(40, 360);
    window->draw(trava2);

    sf::RectangleShape trava3(sf::Vector2f(20, 3));
    trava3.setFillColor(sf::Color(66, 247, 49));
    trava3.rotate(90);
    trava3.setPosition(60, 360);
    window->draw(trava3);

    sf::RectangleShape trava4(sf::Vector2f(20, 3));
    trava4.setFillColor(sf::Color(66, 247, 49));
    trava4.rotate(90);
    trava4.setPosition(80, 360);
    window->draw(trava4);

    sf::RectangleShape trava5(sf::Vector2f(20, 3));
    trava5.setFillColor(sf::Color(66, 247, 49));
    trava5.rotate(90);
    trava5.setPosition(100, 360);
    window->draw(trava5);

    sf::RectangleShape trava6(sf::Vector2f(20, 3));
    trava6.setFillColor(sf::Color(66, 247, 49));
    trava6.rotate(90);
    trava6.setPosition(120, 360);
    window->draw(trava6);

    sf::RectangleShape trava7(sf::Vector2f(20, 3));
    trava7.setFillColor(sf::Color(66, 247, 49));
    trava7.rotate(90);
    trava7.setPosition(140, 360);
    window->draw(trava7);


    sf::RectangleShape trava9(sf::Vector2f(20, 3));
    trava9.setFillColor(sf::Color(66, 247, 49));
    trava9.rotate(90);
    trava9.setPosition(190, 360);
    window->draw(trava9);

    sf::RectangleShape trava10(sf::Vector2f(20, 3));
    trava10.setFillColor(sf::Color(66, 247, 49));
    trava10.rotate(90);
    trava10.setPosition(210, 360);
    window->draw(trava10);

    sf::RectangleShape trava11(sf::Vector2f(20, 3));
    trava11.setFillColor(sf::Color(66, 247, 49));
    trava11.rotate(90);
    trava11.setPosition(230, 360);
    window->draw(trava11);

    sf::RectangleShape trava12(sf::Vector2f(20, 3));
    trava12.setFillColor(sf::Color(66, 247, 49));
    trava12.rotate(90);
    trava12.setPosition(250, 360);
    window->draw(trava12);

    sf::RectangleShape trava13(sf::Vector2f(20, 3));
    trava13.setFillColor(sf::Color(66, 247, 49));
    trava13.rotate(90);
    trava13.setPosition(270, 360);
    window->draw(trava13);

    sf::RectangleShape trava14(sf::Vector2f(20, 3));
    trava14.setFillColor(sf::Color(66, 247, 49));
    trava14.rotate(90);
    trava14.setPosition(290, 360);
    window->draw(trava14);

    sf::RectangleShape trava15(sf::Vector2f(20, 3));
    trava15.setFillColor(sf::Color(66, 247, 49));
    trava15.rotate(90);
    trava15.setPosition(310, 360);
    window->draw(trava15);

    sf::RectangleShape trava16(sf::Vector2f(20, 3));
    trava16.setFillColor(sf::Color(66, 247, 49));
    trava16.rotate(90);
    trava16.setPosition(330, 360);
    window->draw(trava16);

    sf::RectangleShape trava17(sf::Vector2f(20, 3));
    trava17.setFillColor(sf::Color(66, 247, 49));
    trava17.rotate(90);
    trava17.setPosition(350, 360);
    window->draw(trava17);



}
