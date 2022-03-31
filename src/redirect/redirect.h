/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:34:24 by yironmak          #+#    #+#             */
/*   Updated: 2022/03/25 15:38:06 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDIRECT_H
# define REDIRECT_H

# include "../minishell.h"

int		redirect_input(char	**cmd);
void	redirect_output(char **cmds, char **files, t_list *env, int input_flag);
int		copy_file(char	*in_file, int fd_out);
int		just_copy(char **files, char **cmds);
char	**find_files(char **cmd, char *type);
void	create_files(char **files);
void	on_heredoc_sig(int num);

#endif