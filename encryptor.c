#include <stdio.h>
#include <string.h>
#include <stdint.h>

void xor_encrypt_decrypt(unsigned char *data, size_t data_len, const unsigned char *key, size_t key_len) {
    
    for (size_t i = 0; i < data_len; i++) {
        data[i] ^= key[i % key_len]; // XOR with repeating key
    }
}

void print_shellcode(unsigned char *data, size_t len) {
    
    printf("\""); // start first line
    
    for(size_t i = 0; i < len; i++) {
        printf("\\x%02X", data[i]);
        if((i + 1) % 16 == 0 && (i + 1) < len) {
            printf("\"\n\""); // if its 16 then start new line
        }
    }
    printf("\"\n"); // Final closing 
}

int main(void)
{
    //shellcode (NOT REAL)
     unsigned char shellcode[] =
    "\x90\x90\x90\x90\xCC"; // NOP NOP NOP

size_t shellcode_len = sizeof(shellcode) - 1; // null bytes (\x00) are not allowed so we subtract 1 from sizeof to exclude the null terminator
const unsigned char key[] = {0x13, 0x37, 0xC0, 0xDE }; // using hexadecimal keys instead of strings to reduce detection by static analysis tools
size_t key_len = sizeof(key);
xor_encrypt_decrypt(shellcode, shellcode_len, key, key_len);

printf("\n[*]Encrypted data:\n");
print_shellcode(shellcode, shellcode_len);

return 0;

}
