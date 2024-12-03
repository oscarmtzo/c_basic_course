#!/bin/bash

# crear el archivo sin template
#touch $1
nombre_archivo=$1
echo -e "#include <stdio.h>\n\nint main(){\n\n\treturn 0;\n}" > "$nombre_archivo"

#abre la edicion del mismo archivo en VSCode si es que esta instalado, puede arrojar error al no estarlo, necesito agregar verificacion
code $1

# tal vez si no encuntre code como comando en el shell, usar editor embedido en la terminal como nano o vim para editarlo