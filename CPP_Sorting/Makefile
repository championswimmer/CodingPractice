CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		CPP_Sorting.o Array_IO.o BubbleSort.o SimpleSorts.o

LIBS =

TARGET =	CPP_Sorting

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
