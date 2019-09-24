#! /usr/bin/env bash

function main(){
  if ! g++ -std=c+11 -Wall lab1.cpp -o lab1; then
    echo "failed to compile"
    return 1
  fi
  if ! ./generate.py 5; then
    echo "failed to generate tests"
    return 1
  fi
  #остальное смотри в письме я заеьался

}