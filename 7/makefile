CPPFLAGS = -O2 -Wall -Wextra -pedantic -std=c++0x
LNFLAGS = -Wall -Wextra -pedantic
LN = $(CXX)

OBJS   = solution7.o
TARGET = solution7

.DEFAULT: all
.PHONY: all clean
.INTERMEDIATE: $(OBJS)

all : $(TARGET)

clean :
	$(RM) $(TARGET)
	$(RM) $(OBJS)

$(TARGET) : $(OBJS)
	$(LN) $(LNFLAGS) -o $@ $^

