CPPFLAGS = -O2 -Wall -Wextra -pedantic -std=c++0x
LNFLAGS = -Wall -Wextra -pedantic
LN = $(CXX)

OBJS   = solution3.o
TARGET = solution3

.DEFAULT: all
.PHONY: all clean
.INTERMEDIATE: $(OBJS)

all : $(TARGET)

clean :
	$(RM) $(TARGET)
	$(RM) $(OBJS)

$(TARGET) : $(OBJS)
	$(LN) $(LNFLAGS) -o $@ $^

