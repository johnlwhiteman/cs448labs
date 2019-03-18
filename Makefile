.PHONY: clean

simplestack: simplestack.c
	gcc -fno-pie -fno-stack-protector -z execstack $< -o $@ 

aslr: aslr.c
	gcc -fPIE -fno-stack-protector -z execstack -g $< -o $@ 

shellcode: shellcode.c
	gcc -fno-stack-protector -z execstack $< -o $@ 

clean: 
	rm -f aslr shellcode simplestack
