# Makefile

# 设置编译器
CC = g++

# 设置链接器
LD = $(CC)

# 设置C++标准
CPPFLAGS += -std=c++14

# 设置警告级别
CPPFLAGS += -Wall -Wextra -pedantic

# 设置头文件搜索路径
CPPFLAGS += -I../include

# 指定要编译的目标文件和依赖文件列表
SOURCES := $(wildcard ../src/*.cpp)
OBJECTS := $(patsubst ../src/%.cpp, obj/%.o, $(SOURCES))
DEPS := $(OBJECTS:.o=.d)

# 定义可执行程序名
EXECUTABLE = bin/main

.PHONY: all clean

all: $(EXECUTABLE)

obj/%.o: src/%.cpp
	@mkdir -p obj/
	$(CC) $(CPPFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p bin/
	$(LD) $^ -o $@ -L./lib 


clean:
	rm -rf obj/ bin/