# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 10:58:04 by fsacufun          #+#    #+#              #
#    Updated: 2023/11/19 10:58:47 by fsacufun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
find . -type f -name '*.sh' -exec basename {} .sh \;
