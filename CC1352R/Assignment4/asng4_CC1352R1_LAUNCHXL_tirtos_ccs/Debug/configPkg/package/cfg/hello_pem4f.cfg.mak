# invoke SourceDir generated makefile for hello.pem4f
hello.pem4f: .libraries,hello.pem4f
.libraries,hello.pem4f: package/cfg/hello_pem4f.xdl
	$(MAKE) -f C:\Users\kirk\workspace_v10\asng4_CC1352R1_LAUNCHXL_tirtos_ccs/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\kirk\workspace_v10\asng4_CC1352R1_LAUNCHXL_tirtos_ccs/src/makefile.libs clean

