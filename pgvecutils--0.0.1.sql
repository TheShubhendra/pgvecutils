CREATE FUNCTION vector_rand(int)
RETURNS vector
AS 'pgvecutils', 'vector_rand'
LANGUAGE C STRICT;
