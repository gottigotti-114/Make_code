CREATE ROLE hoge1;
GRANT SELECT ON sample.* TO hoge1;

GRANT ROLE hoge2;
GRANT INSERT ON sample.* TO hoge2;


CREATE USER hoge IDENTIFIED BY 'hoge';

GRANT hoge1 TO hoge;