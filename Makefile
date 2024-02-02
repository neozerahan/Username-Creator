CC = gcc
CFLAGS = -Wall
EXE = UsernameCreator

$(EXE): Objects\Main Objects\Helper
	$(CC) Objects\Main Objects\Helper -o $@

Objects\Main: Header\Define.h Header\Helper.h
	$(CC) $(CFLAGS) -c Source\Main.c -o $@

Objects\Helper: Header\Define.h Header\Helper.h
	$(CC) $(CFLAGS) -c Source\Helper.c -o $@

clean:
	rm $(EXE) Objects\Main Objects\Helper