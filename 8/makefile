CFLAGS = -O2 -Wall -Wextra -pedantic -std=c99
LNFLAGS = -Wall -Wextra -pedantic
LN = $(CC)

OBJS   = solution8.o
TARGET = solution8

.DEFAULT: all
.PHONY: all clean
.INTERMEDIATE: $(OBJS)

all : $(TARGET)

clean :
	$(RM) $(TARGET)
	$(RM) $(OBJS)

$(TARGET) : $(OBJS)
	$(LN) $(LNFLAGS) -o $@ $^

