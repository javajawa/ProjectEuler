.SUFFIXES:
.PHONY: all c%
.DEFAULT: euler1

FILES-% = $(subst .c,.o,$(wildcard %/*.c))

euler1: c1

c% : $(FILES-%)
	echo $(FILES-%)
	echo $<
	$(CC) $(LDFLAGS) $^ -o euler$*

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@
