/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apardo-m <apardo-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:29:51 by apardo-m          #+#    #+#             */
/*   Updated: 2025/01/18 16:40:20 by apardo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP

# include <iostream>
# include <poll.h>
# include <vector>

class Server
{
	private:
		std::string					_serverName;
		std::string					_password;
		int							_port;
		int							_fdServer;

//		static bool					_Signal;

		std::vector<struct pollfd>	_fdsClients;
//		std::vector<Client>			_clients;
//		std::vector<Channel>		_channels;

	public:
		Server(std::string serverName, std::string password, int port);
		~Server( void );

		std::string	getServerName( void ) const;
		std::string	getPassword( void ) const;
		int 		getPort( void ) const;
		int			getFdServer( void ) const;
};

#endif
