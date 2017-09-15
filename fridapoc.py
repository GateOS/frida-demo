import frida
import sys

session = frida.attach("poc")
script = session.create_script("""
Interceptor.attach(ptr("%s"),{
    onLeave:function(retval){
        retval.replace(1337)
    }
})
""" % int(sys.argv[1],16))

script.load()
sys.stdin.read()