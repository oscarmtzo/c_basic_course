#!/bin/bash

archivo_c=$1
archivo_prefijo_out="${archivo_c%.*}.out"
#echo $archivo_prefijo_out
gcc "$archivo_c" -o "$archivo_prefijo_out"

./"$archivo_prefijo_out"
