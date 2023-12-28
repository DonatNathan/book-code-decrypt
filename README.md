# Decrypt book

## How to clone

```
git clone git@github.com:DonatNathan/book-code-decrypt.git
cd book-code-decrypt
```

## How to setup

```
sudo pacman -Syu
sudo pacman -Sy gcovr yay base-devel
yay -S criterion
```

## How to compile

```
make
```

## How to execute

```
./decrypt <encrypted_file> <key_file> <separators>
```

Name | Description
---- | -----------
encrypted_file (*) | A file containing the encrypted code
key_file (*) | A file containing the key to decrypt the code
separators | A string of differents separators in the key (ex: "-/")
(*) : Mandatory parameters

The decrypted code is write in the **output.txt** file.

You can find examples of encrypted files at "tests/functionals/inputs" and examples of key files at "tests/functionals/keys".
