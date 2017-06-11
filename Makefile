nl2txt.exe: main.c
	gcc -o nl2txt.exe main.c
	
clean:
	@rm -rf *.exe
