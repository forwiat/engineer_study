TARGET=main
CPP_FILES=$(shell ls *.c)
BASE=$(basename $(CPP_FILES))
OBJS=$(addsuffix .o,$(addprefix obj/,$(BASE)))
$(TARGET):$(OBJS)
	g++ -o $(TARGET) $(OBJS)
obj/%.o:%.c
	$(info $@)
	$(info $<)
	g++ -c -o $@ $<
clean:
	rm -f main
	rm -f obj/*.o
