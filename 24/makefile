CFLAGS = -O2 -Wall -Wextra -pedantic
LNFLAGS = -Wall -Wextra -pedantic
LN = $(CC)

OBJS   = solution24.o
TARGET = solution24

.DEFAULT: all
.PHONY: all clean
.INTERMEDIATE: $(OBJS)

all : $(TARGET)

clean :
	$(RM) $(TARGET)
	$(RM) $(OBJS)

$(TARGET) : $(OBJS)
	$(LN) $(LNFLAGS) -o $@ $^

