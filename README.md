# xor-shellcode-demo
A simple XOR-based shellcode encryption demo for educational use.

# XOR Shellcode Encryption Demo

This is a **simple XOR-based shellcode encryption tool** written in C for **educational purposes only**.  
It encrypts a static shellcode buffer using a repeating XOR key and prints the result in a format usable for payload development or analysis training.

---

## 🔍 About

- This project was created during my personal learning journey in binary-level programming.
- I am currently a **student**, in my **second month** of studying low-level security concepts like shellcode, basic encryption, and obfuscation.
- The payload used in this project is **not malicious**. It is a harmless sequence of `NOP` instructions followed by a software breakpoint (`INT3`), used only to test the encoder logic.
- The goal of this project is to **learn how XOR-based encoding works**, how to deal with shellcode formatting, and how byte-level memory operations function in C.

---

## ⚠️ Disclaimer

This repository is created strictly for **educational and research purposes**.  
The author does **not support or encourage** any form of misuse, unethical activity, or illegal use of the information provided.  
Any responsibility for use lies with the end user. Please act responsibly.

---

## 🧠 What I Learned

- Implementing a custom XOR encryptor function in C
- Handling raw shellcode and null-byte-related issues
- Formatting output to be reusable in loaders, droppers, or further tooling

---

## 🛠️ How to Compile

```bash
gcc xor_encryptor.c -o xor_encryptor
./xor_encryptor

## EXAMPLE OUTPUT
[*] Encrypted data:
"\x83\xA7\x50\x4E\xDF"

Thanks for reading.
