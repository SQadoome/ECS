SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
TARGET := ecs.exe

all: $(OBJS)
	g++ $(OBJS) -o $(TARGET) -L lib -lraylib -lgdi32 -lwinmm
	ecs.exe

run:
	ecs.exe

%.o: %.cpp
	clang++ -c $< -o $@

clean:
	del *.o ecs.exe

