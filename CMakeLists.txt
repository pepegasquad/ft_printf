cmake_minimum_required(VERSION 3.15)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_printf src/main.c include/ft_printf.h libft/ft_atoi.c libft/ft_bzero.c libft/ft_memchr.c libft/ft_memcpy.c libft/ft_memset.c libft/ft_pow.c libft/ft_strchr.c libft/ft_strchri.c libft/ft_strlen.c libft/ft_strncmp.c libft/ft_wcharlen.c libft/ft_wstrlen.c libft/libft.h)