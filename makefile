bin: Ativ_Zumbi.c
	gcc $< -o $@
.PHONY: run clean

run:
	./bin

clean:
	rm bin
