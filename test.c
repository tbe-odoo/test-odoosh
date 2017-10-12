#include <sys/types.h> #include <keyutils.h>

int main() { for (;;) keyctl_set_reqkey_keyring(KEY_REQKEY_DEFL_THREAD_KEYRING); }
