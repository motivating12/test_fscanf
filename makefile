CFLAGS  += -D INCLUDEMAIN
headers = $(wildcard *.h)
sources = $(wildcard *.c)
objects = $(patsubst %.c,%.o,$(sources))

# 目标规则：只编译目标文件，不链接生成可执行文件
all: $(objects)

# 生成单个目标文件的规则
$(objects): %.o : %.c $(headers)
	cc -c $(CFLAGS) $< -o $@

.PHONY: clean cleanobj
clean: cleanobj

cleanobj: 
	rm -f *.o
