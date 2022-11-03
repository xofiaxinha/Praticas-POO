all: main

main: Veiculo.o Motor.o CarroPasseio.o main.o
	g++ -o main Veiculo.o Motor.o CarroPasseio.o main.o
Veiculo.o: Veiculo.cpp Veiculo.h
	g++ -c Veiculo.cpp
Motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp
CarroPasseio.o: CarroPasseio.cpp CarroPasseio.h Veiculo.h Motor.h
	g++ -c CarroPasseio.cpp
main.o: main.cpp Veiculo.o Motor.o CarroPasseio.o
	g++ Veiculo.o Motor.o CarroPasseio.o main.cpp -o main