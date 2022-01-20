CPP=g++ --std=c++11
CFLAGS= -Wall

all : Projet

Projet : main.o Amazone.o Guerrier.o Moine.o Sorciere.o Perso.o Piece.o Objet.o Arme.o Bouclier.o Cle.o Potion.o Sac.o
	$(CPP) $(CFLAGS) -o $@ $^

main.o : main.cpp
	$(CPP) $(CFLAGS) -c $<

Amazone.o : Amazone.cpp Amazone.h
	$(CPP) $(CFLAGS) -c $<

Guerrier.o : Guerrier.cpp Guerrier.h
	$(CPP) $(CFLAGS) -c $<

Moine.o : Moine.cpp Moine.h
	$(CPP) $(CFLAGS) -c $<

Sorciere.o : Sorciere.cpp Sorciere.h
	$(CPP) $(CFLAGS) -c $<

Perso.o : Perso.cpp Perso.h
	$(CPP) $(CFLAGS) -c $<

Piece.o : Piece.cpp Piece.h
	$(CPP) $(CFLAGS) -c $<

Objet.o : Objet.cpp Objet.h
	$(CPP) $(CFLAGS) -c $<

Arme.o : Arme.cpp Arme.h
	$(CPP) $(CFLAGS) -c $<

Bouclier.o : Bouclier.cpp Bouclier.h
	$(CPP) $(CFLAGS) -c $<

Cle.o : Cle.cpp Cle.h
	$(CPP) $(CFLAGS) -c $<

Potion.o : Potion.cpp Potion.h
	$(CPP) $(CFLAGS) -c $<

Sac.o : Sac.cpp Sac.h
	$(CPP) $(CFLAGS) -c $<

clean :
	rm *.o

test: all
	./Projet
