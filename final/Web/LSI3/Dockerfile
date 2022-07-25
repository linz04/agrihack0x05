FROM php:7.3-apache
#Install git
RUN apt-get update \
    && apt-get install -y git
RUN docker-php-ext-install pdo pdo_mysql mysqli
RUN a2enmod rewrite
#Install Composer
RUN php -r "copy('https://getcomposer.org/installer', 'composer-setup.php');"
RUN php composer-setup.php --install-dir=. --filename=composer
RUN mv composer /usr/local/bin/
COPY src/ /var/www/html/

# Create ctf-user
RUN groupadd -r nomoresecret && useradd -r -g nomoresecret nomoresecret
RUN mkdir /home/nomoresecret

# Challenge files
ADD flag /home/nomoresecret/flag.txt
ADD linz_is_here_this_the_real_flag /home/nomoresecret/linz_is_here_this_the_real_flag

EXPOSE 80