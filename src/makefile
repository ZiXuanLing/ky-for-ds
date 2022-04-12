.DS: all

all: linear_list

linear_list: sqlist.o

sqlist.o: sqlist.cc
	g++ -c $^ -o $@

.PHONY: clean

clean:
	rm -fr *.o