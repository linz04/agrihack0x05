CREATE TABLE databreach.news(id BIGINT, title VARCHAR(200), content TEXT);
GRANT SELECT ON databreach.* TO 'db_databreach'@'%';


INSERT INTO `databreach` (`id`, `title`, `content`)
VALUES
  (1,'Adobe','<h3>Date:  October 2013<br>Impact: 412.2 million accounts</h3><p>As reported in early October of 2013 by security blogger Brian Krebs, Adobe originally reported that hackers had stolen nearly 3 million encrypted customer credit card records, plus login data for an undetermined number of user accounts.'),
  (2,'Canva','<h3>Date:  May 2019<br>Impact: 137 million user accounts</h3><p>In May 2019 Australian graphic design tool website Canva suffered an attack that exposed email addresses, usernames, names, cities of residence, and salted and hashed with bcrypt passwords (for users not using social logins — around 61 million) of 137 million users. Canva says the hackers managed to view, but not steal, files with partial credit card and payment data.'),
  (3,'eBay','<h3>Date:  May 2014<br>Impact: 145 million users</h3><p>eBay reported that an attack exposed its entire account list of 145 million users in May 2014, including names, addresses, dates of birth and encrypted passwords. The online auction giant said hackers used the credentials of three corporate employees to access its network and had complete access for 229 days—more than enough time to compromise the user database.');
  (0417,'Databreach','<h3>Date: November 2020<br>Impact: agrihack{SQLi_lead_to_data_breach_and_it_is_very_DANGER!!!!!_LINZ_IS_HERE}</h3><p>In November 2020 this website has been attacked by someone xd');