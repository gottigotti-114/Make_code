CREATE INDEX
    pub_date
ON
    books
    (
        publish,
        publish_date
    )
;

SELECT
    *
FROM
    books
WHERE
    publish = 'ãÄ‰jŽÐ'
;