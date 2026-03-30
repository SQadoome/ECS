SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
TARGET := ecs.exe

all: $(OBJS)
	clang++ $(OBJS) -o $(TARGET) -Llib
	ecs.exe

run:
	ecs.exe

%.o: %.cpp
	clang++ -c $< -o $@

clean:
	del *.o ecs.exe

