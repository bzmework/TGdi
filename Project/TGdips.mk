
TGdips.dll: dlldata.obj TGdi_p.obj TGdi_i.obj
	link /dll /out:TGdips.dll /def:TGdips.def /entry:DllMain dlldata.obj TGdi_p.obj TGdi_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del TGdips.dll
	@del TGdips.lib
	@del TGdips.exp
	@del dlldata.obj
	@del TGdi_p.obj
	@del TGdi_i.obj
