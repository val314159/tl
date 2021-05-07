BIN=tl
LDLIBS=-lreadline
call: clean all
all: $(BIN)
clean: ; rm -fr *.o $(BIN) *~
