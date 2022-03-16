#!/bin/bash
nome_da_pasta=$1
clear

cd ~/Desktop/www/
mkdir $nome_da_pasta
cd ./$nome_da_pasta

# sudo pacman -Syu

if ! [ -x "$(command -v git)" ]; then
  echo "OPS! VOCE PRECISA INSTALAR O GIT"
  echo "INSTALANDO O GERENCIADOR DE PACOTE GIT"

    ## Arch Linux
    sudo pacman -S git

    ## Debian/Ubuntu
    # sudo apt install snapd
fi

git init -y