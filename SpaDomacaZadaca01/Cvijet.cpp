#include "Cvijet.h"
#include<iostream>


Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;
}

void Cvijet::draw()
{
	
	
	if(!initialized){
	ini_stem();
	
	ini_right_leaf();
	
	ini_left_leaf();
	
	ini_speal();
	
	ini_petal();
	initialized = true;
	}
	
	window->draw(right_leaf1);
	
	window->draw(right_leaf2);
	
	window->draw(left_leaf1);
	
	window->draw(left_leaf2);
	
	window->draw(stem);
	
	Time = Clock.getElapsedTime();
	
	if (Time.asMilliseconds()<250) {
		
		window->draw(petal[0]);
		
		window->draw(petal[1]);
		
		window->draw(petal[2]);
		
		window->draw(petal[3]);
		
		window->draw(petal[4]);
	}
	
	if (Time.asMilliseconds()>250&& Time.asMilliseconds()<500) {
		
		window->draw(petal[5]);
		
		window->draw(petal[6]);
		
		window->draw(petal[7]);
		
		window->draw(petal[9]);
		
		window->draw(petal[8]);
		
	}
	
	if (Time.asMilliseconds()>500 && Time.asMilliseconds()<750) {
		
		window->draw(petal[10]);
		
		window->draw(petal[11]);
		
		window->draw(petal[12]);
		
		window->draw(petal[13]);
		
		window->draw(petal[14]);
	}
	if (Time.asMilliseconds()>750 && Time.asMilliseconds()<1000) {

		window->draw(petal[15]);
		window->draw(petal[16]);
		window->draw(petal[17]);
		window->draw(petal[18]);
		window->draw(petal[19]);
	}
	if (Time.asMilliseconds()>1000 && Time.asMilliseconds()<1500) {
		window->draw(petal[20]);

		window->draw(petal[21]);

		window->draw(petal[22]);

		window->draw(petal[23]);
		
		window->draw(petal[24]);
	
	}
	if (Time.asMilliseconds() > 1500) {
		Clock.restart();
	}
	
	window->draw(speal_b);
	
	window->draw(speal[0]);
	
	window->draw(speal[1]);
	
	window->draw(speal[2]);
	
	window->draw(speal[3]);
	
	


	
}

void Cvijet::ini_right_leaf()
{
	right_leaf1.setPointCount(39);

	right_leaf1.setPoint(0, sf::Vector2f(195, 334));

	right_leaf1.setPoint(1, sf::Vector2f(201, 334));

	right_leaf1.setPoint(2, sf::Vector2f(207, 334));

	right_leaf1.setPoint(3, sf::Vector2f(215, 333));

	right_leaf1.setPoint(4, sf::Vector2f(219, 329));

	right_leaf1.setPoint(5, sf::Vector2f(224, 323));

	right_leaf1.setPoint(6, sf::Vector2f(225, 326));

	right_leaf1.setPoint(7, sf::Vector2f(234, 313));

	right_leaf1.setPoint(8, sf::Vector2f(239, 305));

	right_leaf1.setPoint(9, sf::Vector2f(243, 299));

	right_leaf1.setPoint(10, sf::Vector2f(244, 293));

	right_leaf1.setPoint(11, sf::Vector2f(248, 285));

	right_leaf1.setPoint(12, sf::Vector2f(249, 283));

	right_leaf1.setPoint(13, sf::Vector2f(249, 278));

	right_leaf1.setPoint(14, sf::Vector2f(248, 272));

	right_leaf1.setPoint(15, sf::Vector2f(247, 264));

	right_leaf1.setPoint(16, sf::Vector2f(245, 257));

	right_leaf1.setPoint(17, sf::Vector2f(243, 251));

	right_leaf1.setPoint(18, sf::Vector2f(241, 245));

	right_leaf1.setPoint(19, sf::Vector2f(238, 238));

	right_leaf1.setPoint(20, sf::Vector2f(235, 231));

	//--------------------------------------------------------  

	right_leaf1.setPoint(21, sf::Vector2f(236, 239));

	right_leaf1.setPoint(22, sf::Vector2f(237, 246));

	right_leaf1.setPoint(23, sf::Vector2f(236, 253));

	right_leaf1.setPoint(24, sf::Vector2f(236, 259));

	right_leaf1.setPoint(25, sf::Vector2f(234, 266));

	right_leaf1.setPoint(26, sf::Vector2f(232, 274));

	right_leaf1.setPoint(27, sf::Vector2f(231, 278));

	right_leaf1.setPoint(28, sf::Vector2f(229, 284));

	right_leaf1.setPoint(29, sf::Vector2f(227, 289));

	right_leaf1.setPoint(30, sf::Vector2f(224, 295));

	right_leaf1.setPoint(31, sf::Vector2f(221, 300));

	right_leaf1.setPoint(32, sf::Vector2f(218, 305));

	right_leaf1.setPoint(33, sf::Vector2f(215, 312));

	right_leaf1.setPoint(34, sf::Vector2f(211, 316));

	right_leaf1.setPoint(35, sf::Vector2f(206, 321));

	right_leaf1.setPoint(36, sf::Vector2f(202, 325));

	right_leaf1.setPoint(37, sf::Vector2f(199, 327));

	right_leaf1.setPoint(38, sf::Vector2f(196, 327));
	
	right_leaf2.setPointCount(33);

	right_leaf2.setPoint(0, sf::Vector2f(196, 321));

	right_leaf2.setPoint(1, sf::Vector2f(200, 319));

	right_leaf2.setPoint(2, sf::Vector2f(203, 316));

	right_leaf2.setPoint(3, sf::Vector2f(208, 306));

	right_leaf2.setPoint(4, sf::Vector2f(214, 301));

	right_leaf2.setPoint(5, sf::Vector2f(217, 293));

	right_leaf2.setPoint(6, sf::Vector2f(219, 286));

	right_leaf2.setPoint(7, sf::Vector2f(222, 279));

	right_leaf2.setPoint(8, sf::Vector2f(225, 270));

	right_leaf2.setPoint(9, sf::Vector2f(226, 265));

	right_leaf2.setPoint(10, sf::Vector2f(227, 258));

	right_leaf2.setPoint(11, sf::Vector2f(228, 253));

	right_leaf2.setPoint(12, sf::Vector2f(230, 247));

	right_leaf2.setPoint(13, sf::Vector2f(232, 241));

	right_leaf2.setPoint(14, sf::Vector2f(233, 235));
	right_leaf2.setPoint(15, sf::Vector2f(236, 239));

	right_leaf2.setPoint(16, sf::Vector2f(237, 246));

	right_leaf2.setPoint(17, sf::Vector2f(236, 253));

	right_leaf2.setPoint(18, sf::Vector2f(236, 259));

	right_leaf2.setPoint(19, sf::Vector2f(234, 266));

	right_leaf2.setPoint(20, sf::Vector2f(232, 274));

	right_leaf2.setPoint(21, sf::Vector2f(231, 278));

	right_leaf2.setPoint(22, sf::Vector2f(229, 284));

	right_leaf2.setPoint(23, sf::Vector2f(227, 289));

	right_leaf2.setPoint(24, sf::Vector2f(224, 295));

	right_leaf2.setPoint(25, sf::Vector2f(221, 300));

	right_leaf2.setPoint(26, sf::Vector2f(218, 305));

	right_leaf2.setPoint(27, sf::Vector2f(215, 312));

	right_leaf2.setPoint(28, sf::Vector2f(211, 316));

	right_leaf2.setPoint(29, sf::Vector2f(206, 321));

	right_leaf2.setPoint(30, sf::Vector2f(202, 325));

	right_leaf2.setPoint(31, sf::Vector2f(199, 327));

	right_leaf2.setPoint(32, sf::Vector2f(196, 327));
	right_leaf1.setOutlineThickness(1);
	right_leaf1.setOutlineColor(sf::Color(255,255,255));
	right_leaf2.setOutlineThickness(1);
	right_leaf2.setOutlineColor(sf::Color(0,0, 0));
}

void Cvijet::ini_left_leaf()
{
	
	left_leaf1.setPointCount(31);
	
	left_leaf1.setPoint(0, sf::Vector2f(192, 307));

	left_leaf1.setPoint(1, sf::Vector2f(186, 304));

	left_leaf1.setPoint(2, sf::Vector2f(178, 299));

	left_leaf1.setPoint(3, sf::Vector2f(175, 292));

	left_leaf1.setPoint(4, sf::Vector2f(171, 285));

	left_leaf1.setPoint(5, sf::Vector2f(168, 274));

	left_leaf1.setPoint(6, sf::Vector2f(164, 262));

	left_leaf1.setPoint(7, sf::Vector2f(163, 251));

	left_leaf1.setPoint(8, sf::Vector2f(162, 243));

	left_leaf1.setPoint(9, sf::Vector2f(162, 232));

	left_leaf1.setPoint(10, sf::Vector2f(163, 219));

	left_leaf1.setPoint(11, sf::Vector2f(164, 213));

	left_leaf1.setPoint(12, sf::Vector2f(165, 209));

	left_leaf1.setPoint(13, sf::Vector2f(166, 206));

	//---------------------------------------------------------- 

	left_leaf1.setPoint(14, sf::Vector2f(166, 215));

	left_leaf1.setPoint(15, sf::Vector2f(167, 221));

	left_leaf1.setPoint(16, sf::Vector2f(166, 229));

	left_leaf1.setPoint(17, sf::Vector2f(168, 234));

	left_leaf1.setPoint(18, sf::Vector2f(169, 240));

	left_leaf1.setPoint(19, sf::Vector2f(170, 246));

	left_leaf1.setPoint(20, sf::Vector2f(172, 253));

	left_leaf1.setPoint(21, sf::Vector2f(174, 259));

	left_leaf1.setPoint(22, sf::Vector2f(175, 264));

	left_leaf1.setPoint(23, sf::Vector2f(177, 269));

	left_leaf1.setPoint(24, sf::Vector2f(180, 276));

	left_leaf1.setPoint(25, sf::Vector2f(181, 282));

	left_leaf1.setPoint(26, sf::Vector2f(183, 288));

	left_leaf1.setPoint(27, sf::Vector2f(185, 294));

	left_leaf1.setPoint(28, sf::Vector2f(187, 297));

	left_leaf1.setPoint(29, sf::Vector2f(190, 300));

	left_leaf1.setPoint(30, sf::Vector2f(191, 301));
	
	left_leaf2.setPointCount(14);

	left_leaf2.setPoint(0, sf::Vector2f(192, 301));

	left_leaf2.setPoint(1, sf::Vector2f(190, 294));

	left_leaf2.setPoint(2, sf::Vector2f(189, 284));

	left_leaf2.setPoint(3, sf::Vector2f(188, 275));

	left_leaf2.setPoint(4, sf::Vector2f(187, 266));

	left_leaf2.setPoint(5, sf::Vector2f(185, 259));

	left_leaf2.setPoint(6, sf::Vector2f(184, 252));

	left_leaf2.setPoint(7, sf::Vector2f(183, 245));

	left_leaf2.setPoint(8, sf::Vector2f(181, 239));

	left_leaf2.setPoint(9, sf::Vector2f(179, 242));

	left_leaf2.setPoint(10, sf::Vector2f(176, 221));

	left_leaf2.setPoint(11, sf::Vector2f(172, 214));

	left_leaf2.setPoint(12, sf::Vector2f(168, 209));

	left_leaf2.setPoint(13, sf::Vector2f(166, 206));
}

void Cvijet::ini_petal()
{
	//---------------------petal1------------------------------ 

	petal[0].setPointCount(29);

	petal[0].setPoint(0, sf::Vector2f(196, 152));

	petal[0].setPoint(1, sf::Vector2f(195, 147));

	petal[0].setPoint(2, sf::Vector2f(195, 141));

	petal[0].setPoint(3, sf::Vector2f(195, 136));

	petal[0].setPoint(4, sf::Vector2f(196, 130));

	petal[0].setPoint(5, sf::Vector2f(198, 122));

	petal[0].setPoint(6, sf::Vector2f(200, 116));

	petal[0].setPoint(7, sf::Vector2f(203, 111));

	petal[0].setPoint(8, sf::Vector2f(208, 104));

	petal[0].setPoint(9, sf::Vector2f(211, 100));

	petal[0].setPoint(10, sf::Vector2f(213, 96));

	petal[0].setPoint(11, sf::Vector2f(217, 90));

	petal[0].setPoint(12, sf::Vector2f(219, 87)); 

	petal[0].setPoint(13, sf::Vector2f(223, 82));

	petal[0].setPoint(14, sf::Vector2f(222, 86));

	petal[0].setPoint(15, sf::Vector2f(221, 89));

	petal[0].setPoint(16, sf::Vector2f(221, 94));

	petal[0].setPoint(17, sf::Vector2f(220, 99));

	petal[0].setPoint(18, sf::Vector2f(219, 104));

	petal[0].setPoint(19, sf::Vector2f(218, 108));

	petal[0].setPoint(20, sf::Vector2f(217, 113));

	petal[0].setPoint(21, sf::Vector2f(216, 117));

	petal[0].setPoint(22, sf::Vector2f(215, 121));

	petal[0].setPoint(23, sf::Vector2f(214, 127));

	petal[0].setPoint(24, sf::Vector2f(212, 133));

	petal[0].setPoint(25, sf::Vector2f(210, 139));

	petal[0].setPoint(26, sf::Vector2f(208, 143));

	petal[0].setPoint(27, sf::Vector2f(205, 149));

	petal[0].setPoint(28, sf::Vector2f(201, 152));

	//-------------petal2-------------------------------- 

	petal[1].setPointCount(32);

	petal[1].setPoint(0, sf::Vector2f(208, 159));

	petal[1].setPoint(1, sf::Vector2f(211, 156));

	petal[1].setPoint(2, sf::Vector2f(214, 152));

	petal[1].setPoint(3, sf::Vector2f(216, 148));

	petal[1].setPoint(4, sf::Vector2f(217, 146));

	petal[1].setPoint(5, sf::Vector2f(219, 142));

	petal[1].setPoint(6, sf::Vector2f(221, 135));

	petal[1].setPoint(7, sf::Vector2f(223, 129));

	petal[1].setPoint(8, sf::Vector2f(225, 122)); 

	petal[1].setPoint(9, sf::Vector2f(225, 115));

	petal[1].setPoint(10, sf::Vector2f(225, 105));

	petal[1].setPoint(11, sf::Vector2f(226, 104));

	petal[1].setPoint(12, sf::Vector2f(226, 92));

	petal[1].setPoint(13, sf::Vector2f(226, 87));

	petal[1].setPoint(14, sf::Vector2f(225, 83));

	petal[1].setPoint(15, sf::Vector2f(225, 80));

	petal[1].setPoint(16, sf::Vector2f(223, 82));

	petal[1].setPoint(17, sf::Vector2f(222, 86));

	petal[1].setPoint(18, sf::Vector2f(221, 89));

	petal[1].setPoint(19, sf::Vector2f(221, 94));

	petal[1].setPoint(20, sf::Vector2f(220, 99));

	petal[1].setPoint(21, sf::Vector2f(219, 104));

	petal[1].setPoint(22, sf::Vector2f(218, 108));

	petal[1].setPoint(23, sf::Vector2f(217, 113));

	petal[1].setPoint(24, sf::Vector2f(216, 117));

	petal[1].setPoint(25, sf::Vector2f(215, 121));

	petal[1].setPoint(26, sf::Vector2f(214, 127));

	petal[1].setPoint(27, sf::Vector2f(212, 133));

	petal[1].setPoint(28, sf::Vector2f(210, 139));

	petal[1].setPoint(29, sf::Vector2f(208, 143));

	petal[1].setPoint(30, sf::Vector2f(205, 149));

	petal[1].setPoint(31, sf::Vector2f(201, 152));

	petal[1].setOutlineThickness(1);

	petal[1].setOutlineColor(sf::Color(0, 0, 0));

	//------------------petal3------------------------ 

	petal[2].setPointCount(14);
	
	petal[2].setPoint(0, sf::Vector2f(227, 126));

	petal[2].setPoint(1, sf::Vector2f(229, 131));

	petal[2].setPoint(2, sf::Vector2f(230, 136));

	petal[2].setPoint(3, sf::Vector2f(232, 143));

	petal[2].setPoint(4, sf::Vector2f(234, 148));

	petal[2].setPoint(5, sf::Vector2f(234, 150));

	petal[2].setPoint(6, sf::Vector2f(231, 155));

	petal[2].setPoint(7, sf::Vector2f(228, 157));

	petal[2].setPoint(8, sf::Vector2f(221, 151));

	petal[2].setPoint(9, sf::Vector2f(217, 146));

	petal[2].setPoint(10, sf::Vector2f(219, 142));

	petal[2].setPoint(11, sf::Vector2f(221, 135));

	petal[2].setPoint(12, sf::Vector2f(223, 129));	

	petal[2].setPoint(13, sf::Vector2f(225, 122));

	petal[2].setOutlineThickness(1);

	petal[2].setOutlineColor(sf::Color(0, 0, 0));

	//-------------------petal4------------------------- 

	petal[3].setPointCount(28);

	petal[3].setPoint(0, sf::Vector2f(236, 152));

	petal[3].setPoint(1, sf::Vector2f(237, 155));

	petal[3].setPoint(2, sf::Vector2f(240, 159));

	petal[3].setPoint(3, sf::Vector2f(225, 122));

	petal[3].setPoint(4, sf::Vector2f(225, 115));

	petal[3].setPoint(5, sf::Vector2f(225, 105));

	petal[3].setPoint(6, sf::Vector2f(226, 104));

	petal[3].setPoint(7, sf::Vector2f(226, 92));

	petal[3].setPoint(8, sf::Vector2f(226, 87));

	petal[3].setPoint(9, sf::Vector2f(225, 83));

	petal[3].setPoint(10, sf::Vector2f(225, 80));

	petal[3].setPoint(11, sf::Vector2f(227, 126));

	petal[3].setPoint(12, sf::Vector2f(229, 131));

	petal[3].setPoint(13, sf::Vector2f(230, 136));

	petal[3].setPoint(14, sf::Vector2f(232, 143));

	petal[3].setPoint(15, sf::Vector2f(234, 148));

	petal[3].setPoint(16, sf::Vector2f(244, 156));

	petal[3].setPoint(17, sf::Vector2f(242, 151));

	petal[3].setPoint(18, sf::Vector2f(240, 149));

	petal[3].setPoint(19, sf::Vector2f(238, 139));

	petal[3].setPoint(20, sf::Vector2f(237, 132));

	petal[3].setPoint(21, sf::Vector2f(235, 127));

	petal[3].setPoint(22, sf::Vector2f(233, 120));

	petal[3].setPoint(23, sf::Vector2f(231, 111));

	petal[3].setPoint(24, sf::Vector2f(230, 106));

	petal[3].setPoint(25, sf::Vector2f(230, 99));

	petal[3].setPoint(26, sf::Vector2f(228, 92));

	petal[3].setPoint(27, sf::Vector2f(226, 87));
	
	petal[3].setOutlineThickness(1);

	petal[3].setOutlineColor(sf::Color(0, 0, 0));

	//-------------petal5--------------------------------- 

	petal[4].setPointCount(26);

	petal[4].setPoint(0, sf::Vector2f(227, 82));

	petal[4].setPoint(1, sf::Vector2f(225, 80));

	petal[4].setPoint(2, sf::Vector2f(229, 82));

	petal[4].setPoint(3, sf::Vector2f(232, 86));

	petal[4].setPoint(4, sf::Vector2f(236, 90));

	petal[4].setPoint(5, sf::Vector2f(240, 97));

	petal[4].setPoint(6, sf::Vector2f(242, 102));

	petal[4].setPoint(7, sf::Vector2f(245, 109));

	petal[4].setPoint(8, sf::Vector2f(247, 115));

	petal[4].setPoint(9, sf::Vector2f(248, 122));

	petal[4].setPoint(10, sf::Vector2f(249, 128));

	petal[4].setPoint(11, sf::Vector2f(249, 133));

	petal[4].setPoint(12, sf::Vector2f(249, 138));

	petal[4].setPoint(13, sf::Vector2f(248, 147));

	petal[4].setPoint(14, sf::Vector2f(247, 149));

	petal[4].setPoint(15, sf::Vector2f(244, 156));

	petal[4].setPoint(16, sf::Vector2f(242, 151));

	petal[4].setPoint(17, sf::Vector2f(240, 149));

	petal[4].setPoint(18, sf::Vector2f(238, 139));

	petal[4].setPoint(19, sf::Vector2f(237, 132));

	petal[4].setPoint(20, sf::Vector2f(235, 127));

	petal[4].setPoint(21, sf::Vector2f(233, 120));

	petal[4].setPoint(22, sf::Vector2f(231, 111));

	petal[4].setPoint(23, sf::Vector2f(230, 106));

	petal[4].setPoint(24, sf::Vector2f(230, 99));

	petal[4].setPoint(25, sf::Vector2f(228, 92));

	petal[4].setOutlineThickness(1);

	petal[4].setOutlineColor(sf::Color(0, 0, 0));

	//------------------petal6------------------------------ 

	petal[5].setPointCount(27);

	petal[5].setPoint(0, sf::Vector2f(196, 164));

	petal[5].setPoint(1, sf::Vector2f(194, 150));

	petal[5].setPoint(2, sf::Vector2f(195, 148));

	petal[5].setPoint(3, sf::Vector2f(196, 131));

	petal[5].setPoint(4, sf::Vector2f(197, 126));

	petal[5].setPoint(5, sf::Vector2f(201, 119));

	petal[5].setPoint(6, sf::Vector2f(205, 112));

	petal[5].setPoint(7, sf::Vector2f(207, 106));

	petal[5].setPoint(8, sf::Vector2f(207, 100));

	petal[5].setPoint(9, sf::Vector2f(208, 94));

	petal[5].setPoint(10, sf::Vector2f(209, 89));

	petal[5].setPoint(11, sf::Vector2f(209, 89));

	petal[5].setPoint(12, sf::Vector2f(209, 80));

	petal[5].setPoint(13, sf::Vector2f(210, 88));

	petal[5].setPoint(14, sf::Vector2f(212, 89));

	petal[5].setPoint(15, sf::Vector2f(215, 88));

	petal[5].setPoint(16, sf::Vector2f(216, 93));

	petal[5].setPoint(17, sf::Vector2f(217, 99));

	petal[5].setPoint(18, sf::Vector2f(215, 107));

	petal[5].setPoint(19, sf::Vector2f(214, 115));

	petal[5].setPoint(20, sf::Vector2f(212, 121));

	petal[5].setPoint(21, sf::Vector2f(211, 127));

	petal[5].setPoint(22, sf::Vector2f(209, 133));

	petal[5].setPoint(23, sf::Vector2f(208, 140));

	petal[5].setPoint(24, sf::Vector2f(206, 148));

	petal[5].setPoint(25, sf::Vector2f(202, 155));

	petal[5].setPoint(26, sf::Vector2f(202, 164));

	petal[5].setOutlineThickness(1);

	petal[5].setOutlineColor(sf::Color(0, 0, 0));

	//------------------leaf7----------------------- 
 

	petal[6].setPointCount(21);

	petal[6].setPoint(0, sf::Vector2f(215, 164));

	petal[6].setPoint(1, sf::Vector2f(217, 146));

	petal[6].setPoint(2, sf::Vector2f(220, 138));

	petal[6].setPoint(3, sf::Vector2f(222, 129));

	petal[6].setPoint(4, sf::Vector2f(225, 115));

	petal[6].setPoint(5, sf::Vector2f(227, 106));

	petal[6].setPoint(6, sf::Vector2f(227, 99));

	petal[6].setPoint(7, sf::Vector2f(226, 94));

	petal[6].setPoint(8, sf::Vector2f(225, 82));

	petal[6].setPoint(9, sf::Vector2f(220, 87));

	petal[6].setPoint(10, sf::Vector2f(217, 92));

	petal[6].setPoint(11, sf::Vector2f(217, 99));

	petal[6].setPoint(12, sf::Vector2f(215, 107));

	petal[6].setPoint(13, sf::Vector2f(214, 115));

	petal[6].setPoint(14, sf::Vector2f(212, 121));

	petal[6].setPoint(15, sf::Vector2f(211, 127));

	petal[6].setPoint(16, sf::Vector2f(209, 133));

	petal[6].setPoint(17, sf::Vector2f(208, 140));

	petal[6].setPoint(18, sf::Vector2f(206, 148));

	petal[6].setPoint(19, sf::Vector2f(202, 155));

	petal[6].setPoint(20, sf::Vector2f(202, 164));
	
	petal[6].setOutlineThickness(1);

	petal[6].setOutlineColor(sf::Color(0, 0, 0));
	//-------------------leaf8---------------------- 

	petal[7].setPointCount(11);

	petal[7].setPoint(0, sf::Vector2f(235, 164));

	petal[7].setPoint(1, sf::Vector2f(235, 149));

	petal[7].setPoint(2, sf::Vector2f(235, 150));

	petal[7].setPoint(3, sf::Vector2f(231, 142));

	petal[7].setPoint(4, sf::Vector2f(229, 135));

	petal[7].setPoint(5, sf::Vector2f(228, 128));

	petal[7].setPoint(6, sf::Vector2f(225, 124));
	
	petal[7].setPoint(7, sf::Vector2f(222, 129));
	
	petal[7].setPoint(8, sf::Vector2f(220, 138));

	petal[7].setPoint(9, sf::Vector2f(217, 146));

	petal[7].setPoint(10, sf::Vector2f(215, 164));

	petal[7].setOutlineThickness(1);

	petal[7].setOutlineColor(sf::Color(0, 0, 0));

	//--------------------petal9--------------------------- 

	petal[8].setPointCount(18);

	petal[8].setPoint(0, sf::Vector2f(226, 115));

	petal[8].setPoint(1, sf::Vector2f(228, 109));

	petal[8].setPoint(2, sf::Vector2f(229, 104));

	petal[8].setPoint(3, sf::Vector2f(230, 111));

	petal[8].setPoint(4, sf::Vector2f(231, 116));

	petal[8].setPoint(5, sf::Vector2f(233, 123));

	petal[8].setPoint(6, sf::Vector2f(235, 128));

	petal[8].setPoint(7, sf::Vector2f(238, 137));

	petal[8].setPoint(8, sf::Vector2f(239, 144));

	petal[8].setPoint(9, sf::Vector2f(241, 151));

	petal[8].setPoint(10, sf::Vector2f(242, 157));

	petal[8].setPoint(11, sf::Vector2f(243, 162));

	petal[8].setPoint(12, sf::Vector2f(235, 149));

	petal[8].setPoint(13, sf::Vector2f(235, 150));

	petal[8].setPoint(14, sf::Vector2f(231, 142));

	petal[8].setPoint(15, sf::Vector2f(229, 135));

	petal[8].setPoint(16, sf::Vector2f(228, 128));

	petal[8].setPoint(17, sf::Vector2f(225, 124));
	
	petal[8].setOutlineThickness(1);

	petal[8].setOutlineColor(sf::Color(0, 0, 0));

	//--------------------petal10--------------------------- 

	petal[9].setPointCount(20);

	petal[9].setPoint(0, sf::Vector2f(248, 162));

	petal[9].setPoint(1, sf::Vector2f(252, 150));

	petal[9].setPoint(2, sf::Vector2f(253, 146));

	petal[9].setPoint(3, sf::Vector2f(250, 131));

	petal[9].setPoint(4, sf::Vector2f(248, 121));

	petal[9].setPoint(5, sf::Vector2f(246, 114));

	petal[9].setPoint(6, sf::Vector2f(243, 102));

	petal[9].setPoint(7, sf::Vector2f(242, 84));

	petal[9].setPoint(8, sf::Vector2f(245, 79));

	petal[9].setPoint(9, sf::Vector2f(238, 84));

	petal[9].setPoint(10, sf::Vector2f(234, 81));

	petal[9].setPoint(11, sf::Vector2f(233, 99));

	petal[9].setPoint(12, sf::Vector2f(231, 106));

	petal[9].setPoint(13, sf::Vector2f(232, 110));

	petal[9].setPoint(14, sf::Vector2f(230, 111));

	petal[9].setPoint(15, sf::Vector2f(231, 115));

	petal[9].setPoint(16, sf::Vector2f(232, 129));

	petal[9].setPoint(17, sf::Vector2f(236, 128));

	petal[9].setPoint(18, sf::Vector2f(237, 139));

	petal[9].setPoint(19, sf::Vector2f(240, 162));

	//--------------------petal11--------------------- 

	petal[10].setPointCount(25);

	petal[10].setPoint(0, sf::Vector2f(195, 159));

	petal[10].setPoint(1, sf::Vector2f(195, 147));

	petal[10].setPoint(2, sf::Vector2f(195, 140));

	petal[10].setPoint(3, sf::Vector2f(196, 132));

	petal[10].setPoint(4, sf::Vector2f(200, 124));

	petal[10].setPoint(5, sf::Vector2f(202, 116));

	petal[10].setPoint(6, sf::Vector2f(203, 110));

	petal[10].setPoint(7, sf::Vector2f(203, 102));

	petal[10].setPoint(8, sf::Vector2f(199, 94));

	petal[10].setPoint(9, sf::Vector2f(195, 90));

	petal[10].setPoint(10, sf::Vector2f(194, 87));

	petal[10].setPoint(11, sf::Vector2f(197, 87));

	petal[10].setPoint(12, sf::Vector2f(202, 91));

	petal[10].setPoint(13, sf::Vector2f(206, 94));

	petal[10].setPoint(14, sf::Vector2f(210, 98));

	petal[10].setPoint(15, sf::Vector2f(213, 101));

	petal[10].setPoint(16, sf::Vector2f(213, 107));

	petal[10].setPoint(17, sf::Vector2f(213, 112));

	petal[10].setPoint(18, sf::Vector2f(211, 119));

	petal[10].setPoint(19, sf::Vector2f(210, 125));

	petal[10].setPoint(20, sf::Vector2f(209, 132));

	petal[10].setPoint(21, sf::Vector2f(208, 141));

	petal[10].setPoint(22, sf::Vector2f(206, 150));

	petal[10].setPoint(23, sf::Vector2f(205, 157));

	petal[10].setPoint(24, sf::Vector2f(205, 159));


	//--------------------petal12--------------------------- 

	petal[11].setPointCount(24);

	petal[11].setPoint(0, sf::Vector2f(217, 159));

	petal[11].setPoint(1, sf::Vector2f(218, 146));

	petal[11].setPoint(2, sf::Vector2f(219, 141));

	petal[11].setPoint(3, sf::Vector2f(220, 130));

	petal[11].setPoint(4, sf::Vector2f(220, 120));

	petal[11].setPoint(5, sf::Vector2f(220, 113));

	petal[11].setPoint(6, sf::Vector2f(220, 105));

	petal[11].setPoint(7, sf::Vector2f(220, 100));

	petal[11].setPoint(8, sf::Vector2f(217, 94));

	petal[11].setPoint(9, sf::Vector2f(213, 89));

	petal[11].setPoint(10, sf::Vector2f(208, 85));

	petal[11].setPoint(11, sf::Vector2f(207, 88));

	petal[11].setPoint(12, sf::Vector2f(210, 91));

	petal[11].setPoint(13, sf::Vector2f(213, 97));

	petal[11].setPoint(14, sf::Vector2f(213, 101));

	petal[11].setPoint(15, sf::Vector2f(213, 107));

	petal[11].setPoint(16, sf::Vector2f(213, 112));

	petal[11].setPoint(17, sf::Vector2f(211, 119));

	petal[11].setPoint(18, sf::Vector2f(210, 125));

	petal[11].setPoint(19, sf::Vector2f(209, 132));

	petal[11].setPoint(20, sf::Vector2f(208, 141));

	petal[11].setPoint(21, sf::Vector2f(206, 150));

	petal[11].setPoint(22, sf::Vector2f(205, 157));

	petal[11].setPoint(23, sf::Vector2f(205, 159));

	petal[11].setOutlineThickness(1);

	petal[11].setOutlineColor(sf::Color(0, 0, 0));

	//-----------------------petal13-------------------- 

	petal[12].setPointCount(11);

	petal[12].setPoint(0, sf::Vector2f(232, 159));

	petal[12].setPoint(1, sf::Vector2f(232, 157));

	petal[12].setPoint(2, sf::Vector2f(231, 152));

	petal[12].setPoint(3, sf::Vector2f(228, 144));

	petal[12].setPoint(4, sf::Vector2f(227, 139));

	petal[12].setPoint(5, sf::Vector2f(222, 128));

	petal[12].setPoint(6, sf::Vector2f(221, 126));

	petal[12].setPoint(7, sf::Vector2f(220, 130));

	petal[12].setPoint(8, sf::Vector2f(219, 141));

	petal[12].setPoint(9, sf::Vector2f(218, 146));

	petal[12].setPoint(10, sf::Vector2f(217, 159));

	petal[12].setOutlineThickness(1);

	petal[12].setOutlineColor(sf::Color(0, 0, 0));

	//---------------------petal14-------------------- 

	petal[13].setPointCount(24);

	petal[13].setPoint(0, sf::Vector2f(235, 160));

	petal[13].setPoint(1, sf::Vector2f(234, 152));

	petal[13].setPoint(2, sf::Vector2f(232, 146));

	petal[13].setPoint(3, sf::Vector2f(229, 138));

	petal[13].setPoint(4, sf::Vector2f(225, 128));

	petal[13].setPoint(5, sf::Vector2f(223, 116));

	petal[13].setPoint(6, sf::Vector2f(224, 111));

	petal[13].setPoint(7, sf::Vector2f(224, 106));

	petal[13].setPoint(8, sf::Vector2f(226, 99));

	petal[13].setPoint(9, sf::Vector2f(230, 93));

	petal[13].setPoint(10, sf::Vector2f(236, 86));

	petal[13].setPoint(11, sf::Vector2f(237, 89));

	petal[13].setPoint(12, sf::Vector2f(237, 92));

	petal[13].setPoint(13, sf::Vector2f(234, 97));

	petal[13].setPoint(14, sf::Vector2f(232, 100));

	petal[13].setPoint(15, sf::Vector2f(230, 105));

	petal[13].setPoint(16, sf::Vector2f(230, 112));

	petal[13].setPoint(17, sf::Vector2f(230, 119));

	petal[13].setPoint(18, sf::Vector2f(231, 125));

	petal[13].setPoint(19, sf::Vector2f(232, 131));

	petal[13].setPoint(20, sf::Vector2f(234, 137));

	petal[13].setPoint(21, sf::Vector2f(236, 144));

	petal[13].setPoint(22, sf::Vector2f(239, 151));

	petal[13].setPoint(23, sf::Vector2f(243, 160));

	//----------------------leaf15------------------------- 

	petal[14].setPointCount(26);

	petal[14].setPoint(0, sf::Vector2f(247, 160));

	petal[14].setPoint(1, sf::Vector2f(247, 150));

	petal[14].setPoint(2, sf::Vector2f(246, 137));

	petal[14].setPoint(3, sf::Vector2f(242, 126));

	petal[14].setPoint(4, sf::Vector2f(242, 121));

	petal[14].setPoint(5, sf::Vector2f(241, 116));

	petal[14].setPoint(6, sf::Vector2f(241, 108));

	petal[14].setPoint(7, sf::Vector2f(240, 102));

	petal[14].setPoint(8, sf::Vector2f(240, 98));

	petal[14].setPoint(9, sf::Vector2f(242, 93));

	petal[14].setPoint(10, sf::Vector2f(247, 89));

	petal[14].setPoint(11, sf::Vector2f(250, 86));

	petal[14].setPoint(12, sf::Vector2f(245, 86));

	petal[14].setPoint(13, sf::Vector2f(242, 89));

	petal[14].setPoint(14, sf::Vector2f(237, 92));

	petal[14].setPoint(15, sf::Vector2f(234, 97));

	petal[14].setPoint(16, sf::Vector2f(232, 100));

	petal[14].setPoint(17, sf::Vector2f(230, 105));

	petal[14].setPoint(18, sf::Vector2f(230, 112));

	petal[14].setPoint(19, sf::Vector2f(230, 119));

	petal[14].setPoint(20, sf::Vector2f(231, 125));

	petal[14].setPoint(21, sf::Vector2f(232, 131));

	petal[14].setPoint(22, sf::Vector2f(234, 137));

	petal[14].setPoint(23, sf::Vector2f(236, 144));

	petal[14].setPoint(24, sf::Vector2f(239, 151));

	petal[14].setPoint(25, sf::Vector2f(243, 160));

	petal[14].setOutlineThickness(1);

	petal[14].setOutlineColor(sf::Color(0, 0, 0));

	//--------------------petal16--------------------- 

	petal[15].setPointCount(25);

	petal[15].setPoint(0, sf::Vector2f(197, 160));

	petal[15].setPoint(1, sf::Vector2f(196, 150));

	petal[15].setPoint(2, sf::Vector2f(195, 143));

	petal[15].setPoint(3, sf::Vector2f(195, 137));

	petal[15].setPoint(4, sf::Vector2f(194, 132));

	petal[15].setPoint(5, sf::Vector2f(196, 126));

	petal[15].setPoint(6, sf::Vector2f(199, 121));

	petal[15].setPoint(7, sf::Vector2f(200, 113));

	petal[15].setPoint(8, sf::Vector2f(199, 110));

	petal[15].setPoint(9, sf::Vector2f(192, 102));

	petal[15].setPoint(10, sf::Vector2f(187, 98));

	petal[15].setPoint(11, sf::Vector2f(183, 96));

	petal[15].setPoint(12, sf::Vector2f(184, 95));

	petal[15].setPoint(13, sf::Vector2f(196, 95));

	petal[15].setPoint(14, sf::Vector2f(203, 99));

	petal[15].setPoint(15, sf::Vector2f(205, 102));

	petal[15].setPoint(16, sf::Vector2f(207, 105));

	petal[15].setPoint(17, sf::Vector2f(207, 113));

	petal[15].setPoint(18, sf::Vector2f(208, 118));

	petal[15].setPoint(19, sf::Vector2f(209, 124));

	petal[15].setPoint(20, sf::Vector2f(209, 130));

	petal[15].setPoint(21, sf::Vector2f(208, 135));

	petal[15].setPoint(22, sf::Vector2f(207, 141));

	petal[15].setPoint(23, sf::Vector2f(207, 160));

	petal[15].setPoint(24, sf::Vector2f(195, 159));

	//----------------------petal17------------------------- 

	petal[16].setPointCount(26);

	petal[16].setPoint(0, sf::Vector2f(218, 160));

	petal[16].setPoint(1, sf::Vector2f(218, 146));

	petal[16].setPoint(2, sf::Vector2f(218, 137));

	petal[16].setPoint(3, sf::Vector2f(218, 130));

	petal[16].setPoint(4, sf::Vector2f(218, 122));

	petal[16].setPoint(5, sf::Vector2f(217, 113)); 

	petal[16].setPoint(6, sf::Vector2f(216, 108));

	petal[16].setPoint(7, sf::Vector2f(213, 101));

	petal[16].setPoint(8, sf::Vector2f(210, 97));

	petal[16].setPoint(9, sf::Vector2f(207, 93));

	petal[16].setPoint(10, sf::Vector2f(201, 91));

	petal[16].setPoint(11, sf::Vector2f(196, 90));

	petal[16].setPoint(12, sf::Vector2f(194, 91));

	petal[16].setPoint(13, sf::Vector2f(196, 93));

	petal[16].setPoint(14, sf::Vector2f(200, 94));

	petal[16].setPoint(15, sf::Vector2f(206, 96));

	petal[16].setPoint(16, sf::Vector2f(208, 106));

	petal[16].setPoint(17, sf::Vector2f(210, 107));

	petal[16].setPoint(18, sf::Vector2f(207, 113));

	petal[16].setPoint(19, sf::Vector2f(208, 118));

	petal[16].setPoint(20, sf::Vector2f(209, 124));

	petal[16].setPoint(21, sf::Vector2f(209, 130));

	petal[16].setPoint(22, sf::Vector2f(208, 135));

	petal[16].setPoint(23, sf::Vector2f(207, 141));

	petal[16].setPoint(24, sf::Vector2f(207, 160));

	petal[16].setPoint(25, sf::Vector2f(195, 159));

	petal[16].setOutlineThickness(1);

	petal[16].setOutlineColor(sf::Color(0, 0, 0));

	//------------------------peatl18------------------------ 

	petal[17].setPointCount(16);

	petal[17].setPoint(0, sf::Vector2f(218, 160));

	petal[17].setPoint(1, sf::Vector2f(218, 146));

	petal[17].setPoint(2, sf::Vector2f(218, 137));

	petal[17].setPoint(3, sf::Vector2f(218, 130));

	petal[17].setPoint(4, sf::Vector2f(218, 122));

	petal[17].setPoint(5, sf::Vector2f(217, 113));

	petal[17].setPoint(6, sf::Vector2f(218, 108));

	petal[17].setPoint(7, sf::Vector2f(220, 103));

	petal[17].setPoint(8, sf::Vector2f(222, 105)); 

	petal[17].setPoint(9, sf::Vector2f(224, 111));

	petal[17].setPoint(10, sf::Vector2f(224, 121));

	petal[17].setPoint(11, sf::Vector2f(224, 127));

	petal[17].setPoint(12, sf::Vector2f(227, 136));

	petal[17].setPoint(13, sf::Vector2f(230, 149));

	petal[17].setPoint(14, sf::Vector2f(233, 151));

	petal[17].setPoint(15, sf::Vector2f(239, 160));

	petal[17].setOutlineThickness(1);

	petal[17].setOutlineColor(sf::Color(0, 0, 0));

	//------------------------petal19----------------------- 

	petal[18].setPointCount(24);

	petal[18].setPoint(0, sf::Vector2f(246, 160));

	petal[18].setPoint(1, sf::Vector2f(245, 155));

	petal[18].setPoint(2, sf::Vector2f(243, 150));

	petal[18].setPoint(3, sf::Vector2f(239, 149));

	petal[18].setPoint(4, sf::Vector2f(237, 136));

	petal[18].setPoint(5, sf::Vector2f(235, 129));

	petal[18].setPoint(6, sf::Vector2f(234, 122));

	petal[18].setPoint(7, sf::Vector2f(235, 115));

	petal[18].setPoint(8, sf::Vector2f(236, 107));

	petal[18].setPoint(9, sf::Vector2f(237, 103));

	petal[18].setPoint(10, sf::Vector2f(240, 98));

	petal[18].setPoint(11, sf::Vector2f(244, 92));

	petal[18].setPoint(12, sf::Vector2f(245, 89));

	petal[18].setPoint(13, sf::Vector2f(239, 89));

	petal[18].setPoint(14, sf::Vector2f(244, 92));

	petal[18].setPoint(15, sf::Vector2f(229, 98));

	petal[18].setPoint(16, sf::Vector2f(225, 106));

	petal[18].setPoint(17, sf::Vector2f(224, 111));

	petal[18].setPoint(18, sf::Vector2f(224, 121));

	petal[18].setPoint(19, sf::Vector2f(224, 127));

	petal[18].setPoint(20, sf::Vector2f(227, 136));

	petal[18].setPoint(21, sf::Vector2f(230, 149));

	petal[18].setPoint(22, sf::Vector2f(233, 151));

	petal[18].setPoint(23, sf::Vector2f(239, 160));

	petal[18].setOutlineThickness(1);

	petal[18].setOutlineColor(sf::Color(0, 0, 0));

	//----------------petal20---------------------------- 

	petal[19].setPointCount(26);

	petal[19].setPoint(0, sf::Vector2f(246, 160));

	petal[19].setPoint(1, sf::Vector2f(245, 155));

	petal[19].setPoint(2, sf::Vector2f(243, 150));

	petal[19].setPoint(3, sf::Vector2f(239, 149));

	petal[19].setPoint(4, sf::Vector2f(237, 136));

	petal[19].setPoint(5, sf::Vector2f(235, 129));

	petal[19].setPoint(6, sf::Vector2f(234, 122));

	petal[19].setPoint(7, sf::Vector2f(235, 115));

	petal[19].setPoint(8, sf::Vector2f(238, 109));

	petal[19].setPoint(9, sf::Vector2f(242, 102));

	petal[19].setPoint(10, sf::Vector2f(246, 95));

	petal[19].setPoint(11, sf::Vector2f(251, 91));

	petal[19].setPoint(12, sf::Vector2f(257, 89));

	petal[19].setPoint(13, sf::Vector2f(263, 90));

	petal[19].setPoint(14, sf::Vector2f(258, 93));

	petal[19].setPoint(15, sf::Vector2f(251, 96));

	petal[19].setPoint(16, sf::Vector2f(246, 101));

	petal[19].setPoint(17, sf::Vector2f(243, 103));

	petal[19].setPoint(18, sf::Vector2f(242, 108));

	petal[19].setPoint(19, sf::Vector2f(242, 113));

	petal[19].setPoint(20, sf::Vector2f(242, 121));

	petal[19].setPoint(21, sf::Vector2f(244, 129));

	petal[19].setPoint(22, sf::Vector2f(248, 137));

	petal[19].setPoint(23, sf::Vector2f(250, 143));

	petal[19].setPoint(24, sf::Vector2f(249, 152));

	petal[19].setPoint(25, sf::Vector2f(249, 160));

	petal[19].setOutlineThickness(1);

	petal[19].setOutlineColor(sf::Color(0, 0, 0));

	//-----------------------petal21----------------------- 

	petal[20].setPointCount(23);

	petal[20].setPoint(0, sf::Vector2f(197, 160));

	petal[20].setPoint(1, sf::Vector2f(196, 150));

	petal[20].setPoint(2, sf::Vector2f(196, 144));

	petal[20].setPoint(3, sf::Vector2f(197, 139));

	petal[20].setPoint(4, sf::Vector2f(198, 133));

	petal[20].setPoint(5, sf::Vector2f(198, 124));

	petal[20].setPoint(6, sf::Vector2f(197, 119));

	petal[20].setPoint(7, sf::Vector2f(191, 115));

	petal[20].setPoint(8, sf::Vector2f(183, 113));

	petal[20].setPoint(9, sf::Vector2f(179, 111));

	petal[20].setPoint(10, sf::Vector2f(185, 110));

	petal[20].setPoint(11, sf::Vector2f(190, 110));

	petal[20].setPoint(12, sf::Vector2f(195, 111));

	petal[20].setPoint(13, sf::Vector2f(201, 114));

	petal[20].setPoint(14, sf::Vector2f(205, 117));

	petal[20].setPoint(15, sf::Vector2f(207, 121));

	petal[20].setPoint(16, sf::Vector2f(208, 126));

	petal[20].setPoint(17, sf::Vector2f(209, 132));

	petal[20].setPoint(18, sf::Vector2f(210, 141));

	petal[20].setPoint(19, sf::Vector2f(211, 147));

	petal[20].setPoint(20, sf::Vector2f(208, 153));

	petal[20].setPoint(21, sf::Vector2f(208, 158));

	petal[20].setPoint(22, sf::Vector2f(208, 160));

	//----------------------petal22--------------------------- 

	petal[21].setPointCount(22);

	petal[21].setPoint(0, sf::Vector2f(218, 160));

	petal[21].setPoint(1, sf::Vector2f(218, 148));

	petal[21].setPoint(2, sf::Vector2f(218, 143));

	petal[21].setPoint(3, sf::Vector2f(219, 136));

	petal[21].setPoint(4, sf::Vector2f(219, 128));

	petal[21].setPoint(5, sf::Vector2f(220, 124));

	petal[21].setPoint(6, sf::Vector2f(219, 119));

	petal[21].setPoint(7, sf::Vector2f(216, 113));

	petal[21].setPoint(8, sf::Vector2f(210, 108));

	petal[21].setPoint(9, sf::Vector2f(203, 105));

	petal[21].setPoint(10, sf::Vector2f(196, 105));

	petal[21].setPoint(11, sf::Vector2f(201, 110));

	petal[21].setPoint(12, sf::Vector2f(201, 114));

	petal[21].setPoint(13, sf::Vector2f(205, 117));

	petal[21].setPoint(14, sf::Vector2f(207, 121));

	petal[21].setPoint(15, sf::Vector2f(208, 126));

	petal[21].setPoint(16, sf::Vector2f(209, 132));

	petal[21].setPoint(17, sf::Vector2f(210, 141));

	petal[21].setPoint(18, sf::Vector2f(211, 147));

	petal[21].setPoint(19, sf::Vector2f(208, 153));

	petal[21].setPoint(20, sf::Vector2f(208, 158));

	petal[21].setPoint(21, sf::Vector2f(208, 160));

	petal[21].setOutlineThickness(1);

	petal[21].setOutlineColor(sf::Color(0, 0, 0));

	//------------------------leaf23----------------------- 

	petal[22].setPointCount(22);

	petal[22].setPoint(0, sf::Vector2f(218, 160));

	petal[22].setPoint(1, sf::Vector2f(218, 148));

	petal[22].setPoint(2, sf::Vector2f(218, 143));

	petal[22].setPoint(3, sf::Vector2f(219, 136));

	petal[22].setPoint(4, sf::Vector2f(219, 128));

	petal[22].setPoint(5, sf::Vector2f(220, 124));

	petal[22].setPoint(6, sf::Vector2f(220, 120));

	petal[22].setPoint(7, sf::Vector2f(220, 117));

	petal[22].setPoint(8, sf::Vector2f(220, 112));

	petal[22].setPoint(9, sf::Vector2f(221, 109));

	petal[22].setPoint(10, sf::Vector2f(222, 107));

	petal[22].setPoint(11, sf::Vector2f(223, 107));

	petal[22].setPoint(12, sf::Vector2f(224, 108));

	petal[22].setPoint(13, sf::Vector2f(225, 109));

	petal[22].setPoint(14, sf::Vector2f(225, 114));

	petal[22].setPoint(15, sf::Vector2f(225, 121));

	petal[22].setPoint(16, sf::Vector2f(225, 129));

	petal[22].setPoint(17, sf::Vector2f(227, 133));

	petal[22].setPoint(18, sf::Vector2f(229, 138));

	petal[22].setPoint(19, sf::Vector2f(231, 143));

	petal[22].setPoint(20, sf::Vector2f(234, 150));

	petal[22].setPoint(21, sf::Vector2f(239, 160));

	petal[22].setOutlineThickness(1);

	petal[22].setOutlineColor(sf::Color(0, 0, 0));

	//--------------------petalf24----------------------------- 

	petal[23].setPointCount(26);

	petal[23].setPoint(0, sf::Vector2f(245, 160));

	petal[23].setPoint(1, sf::Vector2f(242, 152));

	petal[23].setPoint(2, sf::Vector2f(241, 147));

	petal[23].setPoint(3, sf::Vector2f(240, 139));

	petal[23].setPoint(4, sf::Vector2f(239, 132));

	petal[23].setPoint(5, sf::Vector2f(237, 126));

	petal[23].setPoint(6, sf::Vector2f(236, 123));

	petal[23].setPoint(7, sf::Vector2f(235, 116));

	petal[23].setPoint(8, sf::Vector2f(236, 110));

	petal[23].setPoint(9, sf::Vector2f(239, 107));

	petal[23].setPoint(10, sf::Vector2f(245, 102));

	petal[23].setPoint(11, sf::Vector2f(249, 94));

	petal[23].setPoint(12, sf::Vector2f(252, 97));

	petal[23].setPoint(13, sf::Vector2f(248, 98));

	petal[23].setPoint(14, sf::Vector2f(242, 100));

	petal[23].setPoint(15, sf::Vector2f(240, 102));

	petal[23].setPoint(16, sf::Vector2f(238, 104));

	petal[23].setPoint(17, sf::Vector2f(233, 108));

	petal[23].setPoint(18, sf::Vector2f(230, 111));

	petal[23].setPoint(19, sf::Vector2f(228, 118));

	petal[23].setPoint(20, sf::Vector2f(228, 126));

	petal[23].setPoint(21, sf::Vector2f(227, 133));

	petal[23].setPoint(22, sf::Vector2f(229, 138));

	petal[23].setPoint(23, sf::Vector2f(231, 143));

	petal[23].setPoint(24, sf::Vector2f(234, 150));

	petal[23].setPoint(25, sf::Vector2f(239, 160));

	petal[23].setOutlineThickness(1);

	petal[23].setOutlineColor(sf::Color(0, 0, 0));

	//--------------------------petal25--------------------- 

	petal[24].setPointCount(26);

	petal[24].setPoint(0, sf::Vector2f(245, 160));

	petal[24].setPoint(1, sf::Vector2f(242, 152));

	petal[24].setPoint(2, sf::Vector2f(241, 147));

	petal[24].setPoint(3, sf::Vector2f(240, 139));

	petal[24].setPoint(4, sf::Vector2f(239, 132));

	petal[24].setPoint(5, sf::Vector2f(239, 123));

	petal[24].setPoint(6, sf::Vector2f(241, 116));

	petal[24].setPoint(7, sf::Vector2f(244, 110));

	petal[24].setPoint(8, sf::Vector2f(250, 106));

	petal[24].setPoint(9, sf::Vector2f(255, 102));

	petal[24].setPoint(10, sf::Vector2f(263, 101));

	petal[24].setPoint(11, sf::Vector2f(271, 103));

	petal[24].setPoint(12, sf::Vector2f(274, 105));

	petal[24].setPoint(13, sf::Vector2f(270, 106));

	petal[24].setPoint(14, sf::Vector2f(262, 106));

	petal[24].setPoint(15, sf::Vector2f(255, 109));

	petal[24].setPoint(16, sf::Vector2f(250, 112));

	petal[24].setPoint(17, sf::Vector2f(248, 115));

	petal[24].setPoint(18, sf::Vector2f(246, 119));

	petal[24].setPoint(19, sf::Vector2f(247, 124));

	petal[24].setPoint(20, sf::Vector2f(248, 131));

	petal[24].setPoint(21, sf::Vector2f(250, 136));

	petal[24].setPoint(22, sf::Vector2f(251, 141));

	petal[24].setPoint(23, sf::Vector2f(251, 146));

	petal[24].setPoint(24, sf::Vector2f(250, 153));

	petal[24].setPoint(25, sf::Vector2f(247, 160));

	petal[24].setOutlineThickness(1);

	petal[24].setOutlineColor(sf::Color(0, 0, 0));

}


void Cvijet::ini_speal()
{
	speal_b.setPointCount(15);

	speal_b.setPoint(0, sf::Vector2f(222, 179));

	speal_b.setPoint(1, sf::Vector2f(225, 179));

	speal_b.setPoint(2, sf::Vector2f(232, 178));

	speal_b.setPoint(3, sf::Vector2f(238, 174));

	speal_b.setPoint(4, sf::Vector2f(243, 170));

	speal_b.setPoint(5, sf::Vector2f(245, 165));

	speal_b.setPoint(6, sf::Vector2f(248, 159));

	speal_b.setPoint(7, sf::Vector2f(249, 159));

	speal_b.setPoint(8, sf::Vector2f(197, 159));

	speal_b.setPoint(9, sf::Vector2f(196, 159));

	speal_b.setPoint(10, sf::Vector2f(199, 171));

	speal_b.setPoint(11, sf::Vector2f(205, 175));

	speal_b.setPoint(12, sf::Vector2f(210, 177));

	speal_b.setPoint(13, sf::Vector2f(215, 179));

	speal_b.setPoint(14, sf::Vector2f(219, 179));
	
	speal_b.setOutlineThickness(1);

	speal_b.setOutlineColor(sf::Color(0, 0, 0));

	//------------------------------------------------------ 

	speal[0].setPointCount(8);

	speal[0].setPoint(0, sf::Vector2f(195, 160));

	speal[0].setPoint(1, sf::Vector2f(195, 153));

	speal[0].setPoint(2, sf::Vector2f(195, 147));

	speal[0].setPoint(3, sf::Vector2f(198, 150));

	speal[0].setPoint(4, sf::Vector2f(201, 153));

	speal[0].setPoint(5, sf::Vector2f(204, 156));

	speal[0].setPoint(6, sf::Vector2f(208, 159));

	speal[0].setPoint(7, sf::Vector2f(208, 160));

	speal[0].setOutlineThickness(1);

	speal[0].setOutlineColor(sf::Color(0, 0, 0));

	//----------------------------------------------------- 

	speal[1].setPointCount(8);

	speal[1].setPoint(0, sf::Vector2f(208, 159));

	speal[1].setPoint(1, sf::Vector2f(211, 156));

	speal[1].setPoint(2, sf::Vector2f(214, 152));

	speal[1].setPoint(3, sf::Vector2f(217, 148));

	speal[1].setPoint(4, sf::Vector2f(221, 151));

	speal[1].setPoint(5, sf::Vector2f(224, 154));

	speal[1].setPoint(6, sf::Vector2f(226, 157));

	speal[1].setPoint(7, sf::Vector2f(228, 159));

	speal[1].setOutlineThickness(1);

	speal[1].setOutlineColor(sf::Color(0, 0, 0));

	//------------------------------------------------------- 

	speal[2].setPointCount(5);

	speal[2].setPoint(0, sf::Vector2f(220, 159));

	speal[2].setPoint(1, sf::Vector2f(231, 155));

	speal[2].setPoint(2, sf::Vector2f(234, 152));

	speal[2].setPoint(3, sf::Vector2f(237, 155));

	speal[2].setPoint(4, sf::Vector2f(240, 159));

	speal[2].setOutlineThickness(1);

	speal[2].setOutlineColor(sf::Color(0, 0, 0));

	//-------------------------------------------------------- 

	speal[3].setPointCount(8);

	speal[3].setPoint(0, sf::Vector2f(240, 159));

	speal[3].setPoint(1, sf::Vector2f(244, 156));

	speal[3].setPoint(2, sf::Vector2f(246, 152));

	speal[3].setPoint(3, sf::Vector2f(247, 148));

	speal[3].setPoint(4, sf::Vector2f(249, 149));

	speal[3].setPoint(5, sf::Vector2f(251, 151));

	speal[3].setPoint(6, sf::Vector2f(250, 156));

	speal[3].setPoint(7, sf::Vector2f(249, 159));

	speal[3].setOutlineThickness(1);

	speal[3].setOutlineColor(sf::Color(0, 0, 0));
}

void Cvijet::ini_stem()
{
	
	stem.setPointCount(56);
	
	stem.setPoint(0, sf::Vector2f(193, 399));
	
	stem.setPoint(1, sf::Vector2f(194, 396));
	
	stem.setPoint(2, sf::Vector2f(194, 390));
	
	stem.setPoint(3, sf::Vector2f(194, 389));
	
	stem.setPoint(4, sf::Vector2f(194, 375));
	
	stem.setPoint(5, sf::Vector2f(194, 367));
	
	stem.setPoint(6, sf::Vector2f(194, 352));
	
	stem.setPoint(7, sf::Vector2f(195, 346));
	
	stem.setPoint(8, sf::Vector2f(194, 339));
	
	stem.setPoint(9, sf::Vector2f(196, 339));
	
	stem.setPoint(10, sf::Vector2f(196, 327));
	
	stem.setPoint(11, sf::Vector2f(197, 326));
	
	stem.setPoint(12, sf::Vector2f(196, 313));
	
	stem.setPoint(13, sf::Vector2f(196, 307));
	
	stem.setPoint(14, sf::Vector2f(198, 292));
	
	stem.setPoint(15, sf::Vector2f(200, 284));
	
	stem.setPoint(16, sf::Vector2f(203, 271));
	
	stem.setPoint(17, sf::Vector2f(205, 259));
	
	stem.setPoint(18, sf::Vector2f(208, 250));
	
	stem.setPoint(19, sf::Vector2f(211, 237));
	
	stem.setPoint(20, sf::Vector2f(215, 228));
	
	stem.setPoint(21, sf::Vector2f(217, 225));
	
	stem.setPoint(22, sf::Vector2f(218, 218));
	
	stem.setPoint(23, sf::Vector2f(220, 211));
	
	stem.setPoint(24, sf::Vector2f(222, 201));
	
	stem.setPoint(25, sf::Vector2f(222, 189));
	
	stem.setPoint(26, sf::Vector2f(222, 179));
	
	stem.setPoint(27, sf::Vector2f(219, 179));
	
	stem.setPoint(28, sf::Vector2f(219, 189));
	
	stem.setPoint(29, sf::Vector2f(219, 200));
	
	stem.setPoint(30, sf::Vector2f(217, 206));
	
	stem.setPoint(31, sf::Vector2f(214, 214));
	
	stem.setPoint(32, sf::Vector2f(211, 225));
	
	stem.setPoint(33, sf::Vector2f(207, 235));
	
	stem.setPoint(34, sf::Vector2f(205, 242));
	
	stem.setPoint(35, sf::Vector2f(203, 251));
	
	stem.setPoint(36, sf::Vector2f(201, 259));
	
	stem.setPoint(37, sf::Vector2f(199, 271));
	
	stem.setPoint(38, sf::Vector2f(196, 283));
	
	stem.setPoint(39, sf::Vector2f(194, 293));
	
	stem.setPoint(40, sf::Vector2f(192, 297));
	
	stem.setPoint(41, sf::Vector2f(192, 301));
	
	stem.setPoint(42, sf::Vector2f(192, 307));
	
	stem.setPoint(43, sf::Vector2f(191, 318));
	
	stem.setPoint(44, sf::Vector2f(191, 323));
	
	stem.setPoint(45, sf::Vector2f(191, 330));
	
	stem.setPoint(46, sf::Vector2f(191, 338));
	
	stem.setPoint(47, sf::Vector2f(191, 345));
	
	stem.setPoint(48, sf::Vector2f(190, 352));
	
	stem.setPoint(49, sf::Vector2f(190, 362));
	
	stem.setPoint(50, sf::Vector2f(189, 367));
	
	stem.setPoint(51, sf::Vector2f(189, 376));
	
	stem.setPoint(52, sf::Vector2f(188, 389));
	
	stem.setPoint(53, sf::Vector2f(188, 390));
	
	stem.setPoint(54, sf::Vector2f(188, 396));
	
	stem.setPoint(55, sf::Vector2f(188, 399));

}

