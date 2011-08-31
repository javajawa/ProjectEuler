CFLAGS = -O2 -Wall -Wextra -pedantic
LNFLAGS = -Wall -Wextra -pedantic
LN = $(CC)

OBJS   = solution1.o
TARGET = solution1

.DEFAULT: all
.PHONY: all clean
.INTERMEDIATE: $(OBJS)

all : $(TARGET)

clean :
	$(RM) $(TARGET)
	$(RM) $(OBJS)

$(TARGET) : $(OBJS)
	$(LN) $(LNFLAGS) -o $@ $^

