CXX = g++
CFLAGS = -I. -Wall -Wextra -Werror -g -pedantic -std=c++11 -fbounds-check -O2
DEPS = utils.h CoffeeMachine.h BeanGrinder.h BeanHopper.h CupReceptacle.h HeatSource.h WaterSource.h
OBJ = CoffeeMachine.o BeanGrinder.o BeanHopper.o CupReceptacle.o HeatSource.o WaterSource.o
MAIN = main.o
TEST = test.o

%.o: %.cpp $(OBJ)
	$(CXX) -c -o $@ $< $(CFLAGS)

app: $(MAIN) $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

apptest: $(TEST) $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm *.o app apptest
