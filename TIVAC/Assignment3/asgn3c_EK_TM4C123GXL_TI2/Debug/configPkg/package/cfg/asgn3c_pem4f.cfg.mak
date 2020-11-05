# invoke SourceDir generated makefile for asgn3c.pem4f
asgn3c.pem4f: .libraries,asgn3c.pem4f
.libraries,asgn3c.pem4f: package/cfg/asgn3c_pem4f.xdl
	$(MAKE) -f C:\Users\kirk\workspace_v10\asgn3c_EK_TM4C123GXL_TI2/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\kirk\workspace_v10\asgn3c_EK_TM4C123GXL_TI2/src/makefile.libs clean

