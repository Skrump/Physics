OBJS = main.o UserMenu.o RoC.o PointCharge.o LineCharge.o

UserMenu: $(OBJS)
	g++ $(OBJS) -o UserMenu
	
UserMenu.o: UserMenu.cpp
	g++ -c UserMenu.cpp
	
main.o: main.cpp
	g++ -c main.cpp
	
RoC.o: RoC.cpp
	g++ -c RoC.cpp
	
PointCharge.o: PointCharge.cpp
	g++ -c PointCharge.cpp
	
LineCharge.o: LineCharge.cpp
	g++ -c LineCharge.cpp
