# rvs18-spa-dz-01
## Domaća zadaća 01 za SPA u 2018
### ROK PREDAJE: 26.3.2018. 08:59

Cilj ove domaće zadaće je osnažiti studentovo znanje organizacije C++ projekta u više datoteka, izrade
klase te pravilne definicije i implementacije konstruktora. Kako bi domaća zadaća dobila dašak
zanimljivosti, umjesto suhoparne konzolne aplikacije odabrali smo svijetlo i dinamično SFML okruženje.

SFML (engl. Simple and Fast Multimedia Library) je biblioteka namijenjena radu s multimedijom i izradi
igara (https://www.sfml-dev.org/). SFML programski kôd se može kompajlirati i pokrenuti na
Windowsima, Linuxu, Mac OS X, a u planu je i podrška za Android i iOS.

Domaća zadaća se sastoji od tri dijela, a prosječno vrijeme rješavanja je do 2 sata.

### Dio 1: priprema radne okoline
U ovom trenutku biste trebali imati instaliran Git klijent kako je to objašnjeno u Uputi za rad s GitHubom.
Priprema radne okoline se sastoji od sljedećih koraka:
1. Otići na https://www.sfml-dev.org/download/sfml/2.4.2/ i preuzeti verziju Visual C++ 14 (2015) -
32-bit. Raspakirati je u C:\spa\sfml\ (ili negdje drugdje).
2. Na GitHubu otvoriti moj projekt https://github.com/gdambic/rvs18-spa-dz-01.
3. Kliknuti na gumb Fork kako biste napravili svoju kopiju projekta.
4. Kliknuti Clone or Download i kopirati si Git putanju (ima oblik „https://github.com/x/y.git“)
5. Otići u C:\spa\ (ili negdje drugdje).
6. Desni klik na mapu i zadati „Git Bash Here“.
7. Zadati „git clone https://github.com/x/y.git“.
8. Otvoriti projekt u Visual Studiju dvostrukim klikom na SpaDomacaZadaca01.sln.
9. Desni klik na projekt (pazite, ne na solution!) pa zadati Properties.
10. Na vrhu lijevo pod Configuration odabrati „All Configurations“ te podesiti:
    - Otići u C/C++ » General » Additional Include Directories i tu unijeti putnju do SFML include
mape (kod mene je to „C:\spa\SFML-2.4.2\include“).
    - Otići u C++ » Preprocessor » Preprocessor Definitions i tu na početak dodati (pazeći da
ništa ne pregazimo): „SFML_STATIC;“.
    - Otići u Linker » General » Additional Library Directories i tu unijeti putnju do SFML lib
mape (kod mene je to „C:\spa\SFML-2.4.2\lib“)
    - Otići u Linker » Input» Additional Dependencies i tu na početak dodati (pazeći da ništa ne
pregazimo): „opengl32.lib; freetype.lib; jpeg.lib; winmm.lib; sfml-graphics-s-d.lib; sfmlwindow-s-d.lib;
sfml-system-s-d.lib;“
    - Kliknuti OK.
11. Provjeriti da su u alatnoj traci Visual Studija odabrane opcije „Debug“ i „x86“ te zadati Build.
12. Pokretanjem aplikacije dobijemo prazni crni ekran i ispod njega konzolu
13. Spremni ste za rad!

### Dio 2: dodavanje crteža cvijeta u SFML aplikaciju (ishod: 1, najviše bodova: 1.5)
Vaš zadatak u ovom dijelu je sljedeći:
1. U Source.cpp otkomentirati linije 7 i 19.
2. Napraviti novu klasu Cvijet tako da korisnik prilikom izrade objekta te klase mora kao parametar
poslati adresu prozora (linija 7).
3. Implementirati klasu Cvijet tako da na ekran iscrtava cvijet. Crtanje u SFML možemo raditi
temeljnim geometrijskim likovima: https://www.sfml-dev.org/tutorials/2.4/graphics-shape.php

Pri izradi pazite na sve ono što je važno kod dodavanja novog tipa podataka (nove datoteke, privatni
članovi, javni članovi, konstruktori).

### Dio 3: dodavanje animacije u SFML aplikaciju (ishod: 1, najviše bodova: 0.5)
Vaš zadatak u ovom dijelu je implementirati neku (bilo kakvu) animaciju. Na slici gore je animirana
veličina sunca koja kreće od 20 piksela, smanjuje se na 15 piksela, a zatim se opet povećava na 20
piksela i tako stalno. Animaciju radite u metodi draw klase Cvijet, uz potrebna proširenja klase Cvijet s
privatnim članovima koji čuvaju stanje (recimo, trebat će vam sf::Clock frameClock): https://www.sfmldev.org/tutorials/2.4/system-time.php.

### Predaja rješenja
Kad ste gotovi, rješenje predajete na sljedeći način:
1. Prema Uputi za rad s GitHubom, napravite „git add“, „git commit“ i „git push“ mijenjanih
datoteka.
2. Na GitHubu odete na tab „Pull requests“.
3. Klik na „New pull request“.
4. Klik na „Create pull request“.
5. U ovisnosti tko vam je asistent, kao naziv zahtjeva upišite „ime-prezime-mzagar“ ili „imeprezime-
dbele“ i predajte zahtjev.

### Bonus dio:
Dodijeljeni bodovi neće ovisiti o vizualnoj dopadljivosti vašeg rada; bodove donosi isključivo ispravna
izrada klase i organizacija objekta, pa makar iscrtali (i animirali) i samo jednu točku.

Međutim, dijelit će se i tri nagrade za tri studenta koja naprave vizualno najbolje rješenje: 1. nagrada su
3 sdolara, 2. nagrada su 2 sdolara, a 3. nagrada je 1 sdolar.
1 sdolar (slika preuzeta s http://www.celebritycash.com/shop/index.php?route=product/product&product_id=340)
Čemu služe sdolari? Svaki sdolar može od strane dobitnika biti zamijenjen za 1 bod na međuispitu.
