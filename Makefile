.PHONY: clean

naive: naive.c
	gcc -O0 -fno-pie -fno-stack-protector -z execstack $< -o $@ 

func: func.c
	gcc -O0 -fno-pie -fno-stack-protector -z execstack $< -o $@ 

aslr: aslr.c
	gcc -O0 -fPIE -fno-stack-protector -z execstack -g $< -o $@ 

notsonaive: notsonaive.c
	gcc -O0 -fno-pie -fno-stack-protector -z execstack $< -o $@ 

shellcode: shellcode.c
	gcc -O0 -fno-stack-protector -z execstack $< -o $@ 

signme: signme.c 
	gcc -O0 -fno-stack-protector -z execstack $< -o $@ 

simplestack: simplestack.c
	gcc -O0 -fno-pie -fno-stack-protector -z execstack $< -o $@ 

testshellcode: testshellcode.c
	gcc -O0 -fno-pie -fno-stack-protector -z execstack $< -o $@ 

clean: 
	rm -f aslr func naive notsonaive shellcode simplestack \
          signme testshellcode *.asc *.sig
