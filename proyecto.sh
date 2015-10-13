#!/bin/bash
clear
function usuario {
read -p "ingrese el tipo de usuario: 1-maestro 2-alumno 3-exit " op
echo
case $op in
        1*)
		if [ -d /home/maestros ]; then
		read  -p "Ingrese un usuario: " user
		echo
		useradd $user -d /home/maestros/$user -m
		passwd $user
		adduser $user profesor
		./proyecto.sh
		else
		mkdir /home/maestros
		chmod 740 /home/maestros
 		read  -p "Ingrese un usuario: " user
                echo
                useradd $user -d /home/maestros/$user -m
                passwd $user
		adduser $user profesor
                ./proyecto.sh
		fi
		;;
        2*)
		if [ -d /home/estudiantes ]; then
                read  -p "Ingrese un usuario: " user
                echo
                useradd $user -d /home/estudiantes/$user -m
                passwd $user
                adduser $user estudiante
                ./proyecto.sh
                else
                mkdir /home/estudiantes
                chmod 740 /home/estudiantes
                read  -p "Ingrese un usuario: " user
                echo
                useradd $user -d /home/estudiantes/$user -m
                passwd $user
                adduser $user estudiante
                ./proyecto.sh
                fi
                ;;

        3*)
                ./proyecto ;;
        *)
                ./proyecto.sh ;;
esac
}

function grupo {
read -p "Ingrese un grupo :" grupo
echo
addgroup $grupo
./proyecto.sh
}

function salir {
exit
}


read -p "ingrese el numero deseado: 1-useradd 2-addgroup 3-exit " op
echo
case $op in
	1*)
		usuario ;;
	2*)
		grupo ;;
	3*)
		salir ;;
	*)
		./proyecto.sh ;;
esac
