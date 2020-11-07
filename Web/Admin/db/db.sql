CREATE TABLE chall.login(id INT, username VARCHAR(6), password VARCHAR(35));
GRANT ALL PRIVILEGES ON chall.* TO 'db_user'@'%';

INSERT INTO chall.login(id, username, password) VALUES(1, 'guest', 'p4ssw0rd') ;
INSERT INTO chall.login(id, username, password) VALUES(2, 'admin', 'p4ssw0rd_2_s3kr3t_noone_c4r3d__:(');

