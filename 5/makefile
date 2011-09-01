CPPFLAGS = -O2 -Wall -Wextra -pedantic -std=c++0x
LNFLAGS = -Wall -Wextra -pedantic
LN = $(CXX)

OBJS   = solution5.o
TARGET = solution5

.DEFAULT: all
.PHONY: all clean
.INTERMEDIATE: $(OBJS)

all : $(TARGET)

clean :
	$(RM) $(TARGET)
	$(RM) $(OBJS)

$(TARGET) : $(OBJS)
	$(LN) $(LNFLAGS) -o $@ $^

