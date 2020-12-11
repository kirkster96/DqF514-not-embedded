# invoke SourceDir generated makefile for app_cop.pem4f
app_cop.pem4f: .libraries,app_cop.pem4f
.libraries,app_cop.pem4f: package/cfg/app_cop_pem4f.xdl
	$(MAKE) -f C:\Users\kirk\workspace_v10\coprocessor_CC1352R1_LAUNCHXL_tirtos_ccs/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\kirk\workspace_v10\coprocessor_CC1352R1_LAUNCHXL_tirtos_ccs/src/makefile.libs clean

