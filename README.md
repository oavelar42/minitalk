 [![Intro](https://img.shields.io/badge/Cursus-Minitalk-success?style=for-the-badge&logo=42)](https://github.com/oavelar42/minitalk)

<h4>  The client must communicate the string passed as a parameter to the server. Once
the string has been received, the server must display it.
  
- Communication between your programs should ONLY be done using UNIX signals.
  
- The server must be able to display the string pretty quickly. By quickly we mean
that if you think it is too long, then it is probably too long (hint: 1 second for 100
characters is COLOSSAL)
  
- Your server should be able to receive strings from several clients in a row, without
needing to be restarted.
  
- You can only use the two signals SIGUSR1 and SIGUSR2.</h4>

- For Run :

$ make

create ./server 
       ./client
       
- _first point you need ./server (created number of server)

- _after run ./client ("number server" "write something")
